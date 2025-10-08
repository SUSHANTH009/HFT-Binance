# Motivation & core idea

Short-term patterns at the tick level can repeat. The central idea: when two consecutive tick-candles are green, the probability that the third is green increases (empirically ~63% on the dataset used). A supervised learner trained on richer contextual features can amplify this edge and yield a high-precision signal for short intraday trades.

# Key hypothesis / observed edge

-Two consecutive green tick-candles (empirical grouping: 30–40 ticks per candle in the conceptual experiments) correlate with a higher chance the following candle is green (~63%).

-A trained gradient-boosted model (XGBoost/LightGBM) with engineered features exhibited high precision (~85%) on the evaluation split used in experiments.


# The provided C++ program

The repository includes a C++ realtime client that connects to a crypto exchange trade websocket, aggregates ticks into candles, computes a compact set of features, runs model inference through a compiled/embedded model, and maintains live performance metrics and logs. Below is a component-by-component explanation (no code):

1) Networking & ingestion

The program uses a robust asynchronous networking stack (Boost.Beast + Boost.Asio + TLS) to open a secure websocket to a trade feed. TLS configuration includes peer verification and Server Name Indication to validate the server certificate.

Each received websocket message is parsed as JSON and converted to a minimal Trade record containing price, quantity, timestamp and a trade-flag (buyer/seller maker). These trades are appended to an in-memory tick buffer.

The connection is set to low-latency socket options (e.g., TCP_NODELAY) and the client performs a synchronous read loop to continuously receive trade events.

2) Candle aggregation

The program groups a fixed number of consecutive ticks into a candle. In the shipped C++ code the grouping size is a small constant (ten ticks) — this is an implementation choice that differs from the conceptual 30–40 ticks used in the original hypothesis. Make this consistent across research and production.

A candle stores open/high/low/close, volume (number of ticks), a timestamp and derived boolean is_green.

3) Online indicator calculation

EMA (exponential moving averages) are updated online using the canonical recurrence (previous EMA and current close). The program tracks three EMAs with spans matching typical short-term settings (9, 15, 21) via pre-computed smoothing constants.

Volatility is estimated as the root-mean-square of recent returns (a fixed short lookback, e.g., 5 candles). Volume context is represented as a ratio to the recent average volume.

Price-position is computed relative to the rolling minimum and maximum over a lookback window (e.g., 10 candles), producing a normalized 0–1 position.

Candle morphology features (body size, upper and lower wick proportions, price range) are computed deterministically from the candle OHLC values.

A modest default value (e.g., RSI default) is present in the data structure; note whether this matches the features used during model training — any mismatch must be reconciled.

4) Feature extraction and model input

Once the system observes two consecutive prior green candles it triggers feature extraction for the most recent candle slice.

The feature vector includes: EMA differences (e.g., ema9-ema15 and ema9-ema21), a placeholder numeric field (code includes an explicit constant value in the feature vector), short-term volatility, volume ratio, body/wick/price-range measures, price-position, recent returns and a short history of lookback returns/body/green flags.

Important: the code includes an explicit constant inserted in the feature vector and uses a default RSI value. This is a potential mismatch with the features used during model training — the training pipeline must have produced features in the same order and with the same placeholders. Any inconsistency will invalidate model outputs.

5) Model inference

The C++ binary calls a compiled model scoring function (from a generated header/library, typically produced with a tool like m2cgen or other C/C++ model exporters). The score outputs a probability-like value for the positive class (next candle green).

The program compares this score with a threshold (0.60) to decide whether to mark the prediction as green or red.

The decision threshold is configurable at the conceptual level and should be chosen by balancing precision vs recall and accounting for execution costs.

6) Metrics, logging and live tracking

The program includes a lightweight file-based logger that appends structured CSV-like logs for sessions, predictions, timing, trade-tick progress, and periodic metrics summaries.

An AccuracyTracker maintains running confusion-matrix counts (TP/FP/TN/FN) and computes derived metrics: accuracy, precision, recall and F1. These metrics are printed to stdout periodically and also written to the persistent log.

Timing telemetry records collection time for a candle (how long to gather N ticks), candle formation time, prediction latency and total processing time.

7) Operational considerations and robustness

The C++ program demonstrates SSL/TLS best-practices such as peer verification and use of SNI. Nevertheless, production-grade clients should add reconnection/backoff, message validation, and optional rate-limiting/backpressure handling.

The read loop catches parsing errors per-message and continues running — this prevents single malformed messages from killing the process, but you should monitor parse error rates.

The program is single-threaded in its core loop. For high-throughput feeds consider decoupling network IO, parsing, feature computation, and inference into separate threads/queues while being careful about synchronization and latency.

<br>

# Ways to improve

Regime filters: identify and trade only in regimes where the edge persists (low-noise trending windows or times of day with consistent behavior).

Order-flow & microstructure features: incorporate bid/ask imbalance, trade direction, and sequence-of-ticks timing to capture mechanics behind micro-moves.

Ensembles & calibration: combine different learners and calibrate probabilities to improve reliability and decision-making.

Economic objective: include transaction costs in model selection and evaluation; optimize for net P&L rather than raw classification accuracy.
