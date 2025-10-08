#include <boost/beast/core.hpp>
#include <boost/beast/ssl.hpp>
#include <boost/beast/websocket.hpp>
#include <boost/beast/websocket/ssl.hpp>
#include <boost/asio/connect.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <boost/asio/ssl/stream.hpp>
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <chrono>
#include <sstream>
#include "nlohmann/json.hpp"
#include "hft_forest.h"

namespace beast = boost::beast;
namespace websocket = beast::websocket;
namespace net = boost::asio;
namespace ssl = boost::asio::ssl;
using tcp = boost::asio::ip::tcp;
using json = nlohmann::json;

struct Trade {
    double price;
    double quantity;
    long long timestamp;
    bool is_buyer_maker;
};

struct Candle {
    double open, high, low, close;
    int volume;
    long long timestamp;
    bool is_green;
    
    double ema_9 = 0, ema_15 = 0, ema_21 = 0;
    double rsi = 50.0, volatility = 0, volume_ratio = 1.0;
    double body_size = 0, upper_wick = 0, lower_wick = 0;
    double price_position = 0, returns = 0, price_range = 0;
};

class Logger {
private:
    std::ofstream log_file;
    std::string get_timestamp() {
        auto now = std::chrono::system_clock::now();
        auto time_t = std::chrono::system_clock::to_time_t(now);
        std::stringstream ss;
        ss << std::put_time(std::gmtime(&time_t), "%Y-%m-%d %H:%M:%S");
        return ss.str();
    }

public:
    Logger(const std::string& filename) : log_file(filename, std::ios::app) {
        if (log_file.is_open()) {
            log_file << "\n=== SESSION START: " << get_timestamp() << " ===\n";
            log_file.flush();
        }
    }
    
    ~Logger() {
        if (log_file.is_open()) {
            log_file << "=== SESSION END: " << get_timestamp() << " ===\n\n";
        }
    }
    
    void log_prediction(double score, bool predicted, bool actual, 
                       double accuracy, double precision, double recall, int total) {
        if (!log_file.is_open()) return;
        
        log_file << get_timestamp() << ",PREDICTION,"
                 << std::fixed << std::setprecision(6)
                 << score << "," << (predicted ? 1 : 0) << "," << (actual ? 1 : 0) 
                 << "," << accuracy << "," << precision << "," << recall 
                 << "," << total << "\n";
        log_file.flush();
    }
    
    void log_timing(int ticks_collected, double time_since_first_tick, 
                   double candle_formation_time, double prediction_time, 
                   double total_processing_time) {
        if (!log_file.is_open()) return;
        
        log_file << get_timestamp() << ",TIMING,"
                 << ticks_collected << ","
                 << std::fixed << std::setprecision(3)
                 << time_since_first_tick << ","
                 << candle_formation_time << ","
                 << prediction_time << ","
                 << total_processing_time << "\n";
        log_file.flush();
    }
    
    void log_trade_timing(int current_ticks, double time_remaining_estimate) {
        if (!log_file.is_open()) return;
        
        log_file << get_timestamp() << ",TRADE_TIMING,"
                 << current_ticks << ","
                 << std::fixed << std::setprecision(3)
                 << time_remaining_estimate << "\n";
        log_file.flush();
    }
    
    void log_metrics(int total, int correct, int tp, int fp, int tn, int fn,
                    double accuracy, double precision, double recall) {
        if (!log_file.is_open()) return;
        
        log_file << get_timestamp() << ",METRICS,"
                 << total << "," << correct << "," << tp << "," << fp 
                 << "," << tn << "," << fn << ","
                 << std::fixed << std::setprecision(6)
                 << accuracy << "," << precision << "," << recall << "\n";
        log_file.flush();
    }
};

struct AccuracyTracker {
    int total = 0, correct = 0;
    int tp = 0, fp = 0, tn = 0, fn = 0;
    Logger& logger;
    
    AccuracyTracker(Logger& log) : logger(log) {}
    
    double accuracy() const { return total > 0 ? (double)correct / total : 0.0; }
    double precision() const { 
        int pred_pos = tp + fp;
        return pred_pos > 0 ? (double)tp / pred_pos : 0.0; 
    }
    double recall() const { 
        int actual_pos = tp + fn;
        return actual_pos > 0 ? (double)tp / actual_pos : 0.0; 
    }
    double f1_score() const {
        double p = precision(), r = recall();
        return (p + r) > 0 ? 2 * p * r / (p + r) : 0.0;
    }
    
    void update(bool predicted, bool actual, double score) {
        total++;
        if (predicted == actual) correct++;
        
        if (predicted && actual) tp++;
        else if (predicted && !actual) fp++;
        else if (!predicted && actual) fn++;
        else tn++;
        
        // Log every prediction
        logger.log_prediction(score, predicted, actual, accuracy(), precision(), recall(), total);
    }
    
    void print_metrics() const {
        std::cout << std::fixed << std::setprecision(4);
        std::cout << "\n=== LIVE METRICS (n=" << total << ") ===" << std::endl;
        std::cout << "Accuracy:  " << accuracy() << " (" << correct << "/" << total << ")" << std::endl;
        std::cout << "Precision: " << precision() << std::endl;
        std::cout << "Recall:    " << recall() << std::endl;
        std::cout << "F1-Score:  " << f1_score() << std::endl;
        std::cout << "Confusion: TP=" << tp << " FP=" << fp << " TN=" << tn << " FN=" << fn << std::endl;
        std::cout << "=================================" << std::endl;
        
        // Log metrics summary
        Logger& non_const_logger = const_cast<Logger&>(logger);
        non_const_logger.log_metrics(total, correct, tp, fp, tn, fn, 
                                   accuracy(), precision(), recall());
    }
};

class TradingPredictor {
private:
    std::deque<Trade> tick_buffer;
    std::deque<Candle> candles;
    AccuracyTracker tracker;
    Logger logger;
    
    std::chrono::high_resolution_clock::time_point candle_start_time;
    std::vector<double> tick_intervals; 
    
    static constexpr int TICK_COUNT = 10;
    static constexpr int MAX_HISTORY = 50;
    static constexpr double PREDICTION_THRESHOLD = 0.60;
    
    // EMA state
    double ema_9 = 0, ema_15 = 0, ema_21 = 0;
    bool ema_init = false;
    
public:
    TradingPredictor() : tracker(logger), logger("trading_predictions.log") {
        tick_intervals.reserve(TICK_COUNT);
    }
    
    void process_trade(const Trade& trade) {
        auto now = std::chrono::high_resolution_clock::now();
        
        if (tick_buffer.empty()) {
            candle_start_time = now;
            tick_intervals.clear();
        } else {
            auto last_tick_time = candle_start_time + 
                std::chrono::duration<double>(std::accumulate(tick_intervals.begin(), tick_intervals.end(), 0.0));
            double interval = std::chrono::duration<double>(now - last_tick_time).count();
            tick_intervals.push_back(interval);
        }
        
        tick_buffer.push_back(trade);
        show_candle_progress(now);
        
        if (tick_buffer.size() >= TICK_COUNT) {
            process_complete_candle(now);
            tick_buffer.clear();
        }
    }
    
private:
    void show_candle_progress(std::chrono::high_resolution_clock::time_point now) {
        int current_ticks = tick_buffer.size();
        double time_since_start = std::chrono::duration<double>(now - candle_start_time).count();
        
        double time_remaining = 0.0;
        if (tick_intervals.size() > 0) {
            double avg_interval = std::accumulate(tick_intervals.begin(), tick_intervals.end(), 0.0) / tick_intervals.size();
            int ticks_remaining = TICK_COUNT - current_ticks;
            time_remaining = avg_interval * ticks_remaining;
        }
        
        std::cout << "\rTicks: " << current_ticks << "/" << TICK_COUNT 
                  << " | Time: " << std::fixed << std::setprecision(2) << time_since_start << "s"
                  << " | Est. remaining: " << time_remaining << "s    " << std::flush;
        
        logger.log_trade_timing(current_ticks, time_remaining);
    }
    
    void process_complete_candle(std::chrono::high_resolution_clock::time_point now) {
        auto candle_start = std::chrono::high_resolution_clock::now();
        
        double time_since_first_tick = std::chrono::duration<double>(now - candle_start_time).count();
        
        Candle candle = create_candle();
        auto candle_end = std::chrono::high_resolution_clock::now();
        double candle_formation_time = std::chrono::duration<double>(candle_end - candle_start).count();
        
        calculate_indicators(candle);
        
        candles.push_back(candle);
        if (candles.size() > MAX_HISTORY) {
            candles.pop_front();
        }
        
        auto prediction_start = std::chrono::high_resolution_clock::now();
        check_prediction();
        auto prediction_end = std::chrono::high_resolution_clock::now();
        double prediction_time = std::chrono::duration<double>(prediction_end - prediction_start).count();
        
        double total_processing_time = std::chrono::duration<double>(prediction_end - candle_start).count();
        
        std::cout << "\n=== CANDLE COMPLETED ===" << std::endl;
        std::cout << "Time to collect 10 ticks: " << std::fixed << std::setprecision(3) << time_since_first_tick << "s" << std::endl;
        std::cout << "Candle formation time: " << candle_formation_time * 1000 << "ms" << std::endl;
        std::cout << "Prediction time: " << prediction_time * 1000 << "ms" << std::endl;
        std::cout << "Total processing time: " << total_processing_time * 1000 << "ms" << std::endl;
        std::cout << "=========================" << std::endl;
        
        logger.log_timing(TICK_COUNT, time_since_first_tick, 
                         candle_formation_time, prediction_time, total_processing_time);
    }
    
    Candle create_candle() {
        Candle c;
        c.open = tick_buffer.front().price;
        c.close = tick_buffer.back().price;
        c.high = c.low = c.open;
        c.volume = tick_buffer.size();
        c.timestamp = tick_buffer.front().timestamp;
        
        for (const auto& tick : tick_buffer) {
            if (tick.price > c.high) c.high = tick.price;
            if (tick.price < c.low) c.low = tick.price;
        }
        
        c.is_green = c.close > c.open;
        return c;
    }
    
    void calculate_indicators(Candle& c) {
        if (!ema_init) {
            ema_9 = ema_15 = ema_21 = c.close;
            ema_init = true;
        } else {
            constexpr double a9 = 2.0 / 10.0, a15 = 2.0 / 16.0, a21 = 2.0 / 22.0;
            ema_9 = a9 * c.close + (1 - a9) * ema_9;
            ema_15 = a15 * c.close + (1 - a15) * ema_15;
            ema_21 = a21 * c.close + (1 - a21) * ema_21;
        }
        
        c.ema_9 = ema_9;
        c.ema_15 = ema_15;
        c.ema_21 = ema_21;
        
        if (!candles.empty()) {
            c.returns = (c.close - candles.back().close) / candles.back().close;
        }
        
        const double inv_close = 1.0 / c.close;
        c.body_size = std::abs(c.close - c.open) * inv_close;
        c.upper_wick = (c.high - std::max(c.open, c.close)) * inv_close;
        c.lower_wick = (std::min(c.open, c.close) - c.low) * inv_close;
        c.price_range = (c.high - c.low) * inv_close;
        
        if (candles.size() >= 5) {
            double sum_sq = 0;
            const size_t start = candles.size() - 5;
            for (size_t i = start; i < candles.size(); i++) {
                double ret = candles[i].returns;
                sum_sq += ret * ret;
            }
            c.volatility = std::sqrt(sum_sq / 5.0);
        }
        
        if (candles.size() >= 5) {
            double avg_vol = 0;
            const size_t start = candles.size() - 5;
            for (size_t i = start; i < candles.size(); i++) {
                avg_vol += candles[i].volume;
            }
            c.volume_ratio = c.volume / (avg_vol / 5.0);
        }
        
        if (candles.size() >= 10) {
            double min_low = c.low, max_high = c.high;
            const size_t start = candles.size() - 10;
            for (size_t i = start; i < candles.size(); i++) {
                if (candles[i].low < min_low) min_low = candles[i].low;
                if (candles[i].high > max_high) max_high = candles[i].high;
            }
            if (max_high > min_low) {
                c.price_position = (c.close - min_low) / (max_high - min_low);
            }
        }
    }
    
    void check_prediction() {
        if (candles.size() < 3) {
        std::cout << "Not enough candles yet (" << candles.size() << "/3)" << std::endl;
        return;
    }
        
        const int n = candles.size();
        if (candles[n-3].is_green && candles[n-2].is_green) {
            auto features = extract_features(n-2);
            
            if (!features.empty()) {
                double output[2] = {0.0, 0.0};
                forest_score(features.data(), output);
                double score = output[1];
                
                bool predicted = score > PREDICTION_THRESHOLD;
                bool actual = candles[n-1].is_green;
                
                tracker.update(predicted, actual, score);
                
                std::cout << "\n=== PREDICTION #" << tracker.total << " ===" << std::endl;
                std::cout << "Score: " << std::fixed << std::setprecision(4) << score << std::endl;
                std::cout << "Predicted: " << (predicted ? "GREEN" : "RED") << std::endl;
                std::cout << "Actual: " << (actual ? "GREEN" : "RED") << std::endl;
                std::cout << "Result: " << (predicted == actual ? "CORRECT ✓" : "WRONG ✗") << std::endl;
                
                if (tracker.total % 5 == 0) {
                    tracker.print_metrics();
                }
            }
        }
    }
    
    std::vector<double> extract_features(int idx) {
        constexpr int LOOKBACK = 5;
        if (idx < LOOKBACK + 1) return {};
        
        std::vector<double> features;
        features.reserve(12 + LOOKBACK * 3);
        
        const Candle& c = candles[idx];
        
        features.insert(features.end(), {
            c.ema_9 - c.ema_15, c.ema_9 - c.ema_21, 25.0, 
            c.rsi, c.volatility, c.volume_ratio,
            c.body_size, c.upper_wick, c.lower_wick,
            c.price_position, c.returns, c.price_range
        });
        
        for (int j = 1; j <= LOOKBACK; j++) {
            int hist_idx = idx - j;
            if (hist_idx >= 0) {
                const Candle& h = candles[hist_idx];
                features.insert(features.end(), {
                    h.returns, h.body_size, h.is_green ? 1.0 : 0.0
                });
            } else {
                features.insert(features.end(), {0.0, 0.0, 0.0});
            }
        }
        
        for (double& f : features) {
            if (!std::isfinite(f)) f = 0.0;
        }
        
        return features;
    }
};

int main() {
    try {
        const char* host = "fstream.binance.com";
        const char* port = "443";
        const char* target = "/ws/btcusdc@trade";

        net::io_context ioc;
        ssl::context ctx{ssl::context::tlsv12_client};
        ctx.set_default_verify_paths();
        ctx.set_verify_mode(ssl::verify_peer);

        websocket::stream<beast::ssl_stream<tcp::socket>> ws{ioc, ctx};
        tcp::resolver resolver{ioc};

        auto results = resolver.resolve(host, port);
        auto ep = net::connect(get_lowest_layer(ws), results);
        get_lowest_layer(ws).set_option(tcp::no_delay{true});
        
        if (!SSL_set_tlsext_host_name(ws.next_layer().native_handle(), host)) {
            beast::error_code ec{static_cast<int>(::ERR_get_error()), net::error::get_ssl_category()};
            throw beast::system_error{ec};
        }
        
        ws.next_layer().handshake(ssl::stream_base::client);
        ws.set_option(websocket::stream_base::timeout{
            std::chrono::seconds(30),
            std::chrono::seconds(30),
            true
        });
        
        ws.handshake(host, target);
        
        std::cout << "Connected to Binance BTCUSDC stream" << std::endl;
        std::cout << "ML prediction system with timing analysis active..." << std::endl;
        std::cout << "Log format: TIMESTAMP,TYPE,DATA..." << std::endl;
        std::cout << "TIMING: ticks_collected,time_since_first_tick,candle_formation_time,prediction_time,total_processing_time" << std::endl;
        std::cout << "TRADE_TIMING: current_ticks,estimated_time_remaining" << std::endl;

        TradingPredictor predictor;
        beast::flat_buffer buffer;

        while (true) {
            buffer.consume(buffer.size());
            ws.read(buffer);

            if (ws.is_message_done()) {
                try {
                    auto msg = beast::buffers_to_string(buffer.data());
                    json j = json::parse(msg);
                    
                    Trade trade{
                        std::stod(j.at("p").get<std::string>()),
                        std::stod(j.at("q").get<std::string>()),
                        j.at("T").get<long long>(),
                        j.at("m").get<bool>()
                    };
                    
                    predictor.process_trade(trade);
                    
                } catch (const std::exception& e) {
                    std::cerr << "Parse error: " << e.what() << std::endl;
                }
            }
        }
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}