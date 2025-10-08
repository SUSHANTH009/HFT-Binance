#!/usr/bin/env python3
"""
Convert trained Random Forest model to C++ header file
(using m2cgen.export_to_c for a single-return scorer)
"""
import joblib
import m2cgen as m2g
import os
import sys
import re

def convert_model_to_cpp(model_path="best_hft_rf.pkl", output_dir="include"):
    # Load the model and metadata
    print(f"Loading model from {model_path}...")
    meta = joblib.load(model_path)
    rf_model = meta["model"]

    print("Model info:")
    print(f"  - features_dim:         {meta.get('features_dim', 'Unknown')}")
    print(f"  - lookback:             {meta.get('lookback',     'Unknown')}")
    print(f"  - tick_count:           {meta.get('tick_count',    'Unknown')}")
    print(f"  - validation_precision: {meta.get('validation_precision', 'Unknown')}")
    print(f"  - best_params:          {meta.get('best_params',  'Unknown')}")

    # Generate C code with a single-return function
    print("Converting model to C code...")
    cpp_code = m2g.export_to_c(rf_model, function_name="forest_score")

    # Post-process: mark helpers inline so header-only
    cpp_code = re.sub(
        r'\bvoid add_vectors\(',
        'static inline void add_vectors(',
        cpp_code
    )
    cpp_code = re.sub(
        r'\bvoid mul_vector_number\(',
        'static inline void mul_vector_number(',
        cpp_code
    )
    # If there are other void-returning helpers, apply similar patterns here

    # Build the header
    header = f"""#pragma once
// Auto-generated C++ header for HFT Random Forest model
// Source: {model_path}

#include <cmath>

// —————————————————————————————
// MODEL IMPLEMENTATION (helpers + forest_score)
// —————————————————————————————
{cpp_code}

// Compile-time feature dimension
constexpr int get_feature_dimension() {{
    return {meta.get('features_dim', 0)};
}}

// Model metadata
struct ModelMetadata {{
    static constexpr int features_dim           = {meta.get('features_dim', 0)};
    static constexpr int lookback               = {meta.get('lookback', 0)};
    static constexpr int tick_count             = {meta.get('tick_count', 0)};
    static constexpr double validation_precision = {meta.get('validation_precision', 0.0)};
}};
"""

    os.makedirs(output_dir, exist_ok=True)
    header_path = os.path.join(output_dir, "hft_forest.h")
    with open(header_path, "w") as f:
        f.write(header)

    print(f"✓ Header file written to: {header_path}")
    return header_path


def verify_model_compatibility(model_path="best_hft_rf.pkl"):
    meta = joblib.load(model_path)
    feat = meta.get("features_dim", 0)
    look = meta.get("lookback", 0)
    expected = 12 + look * 3
    print("Verifying feature dimension:")
    print(f"  actual   = {feat}")
    print(f"  expected = {expected}")
    return feat == expected


def create_makefile():
    mk = """# Makefile for HFT Trading Client with ML Prediction

CXX      = g++
CXXFLAGS = -std=c++17 -O3 -Wall -Wextra
INCLUDES = -Iinclude -I/opt/homebrew/Cellar/boost/1.88.0/include \\
           -I$(brew --prefix openssl)/include \\
           -I$(brew --prefix nlohmann-json)/include
LIBPATHS = -L/opt/homebrew/Cellar/boost/1.88.0/lib \\
           -L$(brew --prefix openssl)/lib
LIBS     = -lssl -lcrypto -lboost_system -lpthread

TARGET   = trading_client
SOURCES  = $(wildcard *.cpp)
OBJECTS  = $(SOURCES:.cpp=.o)

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJECTS)
\t$(CXX) $(OBJECTS) -o $@ $(LIBPATHS) $(LIBS)

%.o: %.cpp
\t$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
\trm -f $(OBJECTS) $(TARGET)

install-deps:
\t@echo "On macOS: brew install boost openssl nlohmann-json"
"""
    with open("Makefile", "w") as f:
        f.write(mk)
    print("✓ Makefile created")


def main():
    model_path = sys.argv[1] if len(sys.argv) > 1 else "best_hft_rf.pkl"
    if not os.path.exists(model_path):
        print(f"Error: '{model_path}' not found")
        return 1

    if not verify_model_compatibility(model_path):
        print("⚠️  Feature dimension mismatch. Aborting.")
        return 1

    convert_model_to_cpp(model_path)
    create_makefile()
    print("\nAll set! Run `make` to build your C++ client.")
    return 0


if __name__ == "__main__":
    sys.exit(main())
