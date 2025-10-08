# Makefile for HFT Trading Client with ML Prediction

CXX = g++
CXXFLAGS = -std=c++17 -O3 -Wall -Wextra

BREW_OPENSSL := $(shell brew --prefix openssl)
BREW_JSON := $(shell brew --prefix nlohmann-json)

INCLUDES = \
    -Iinclude \
    -I/opt/homebrew/Cellar/boost/1.88.0/include \
    -I$(BREW_OPENSSL)/include \
    -I$(BREW_JSON)/include

LIBPATHS = \
    -L/opt/homebrew/Cellar/boost/1.88.0/lib \
    -L$(BREW_OPENSSL)/lib

LIBS = -lssl -lcrypto -lboost_system -lpthread

TARGET = trading_client
SRCDIR = .
SOURCES = $(wildcard $(SRCDIR)/*.cpp)
OBJECTS = $(SOURCES:.cpp=.o)

.PHONY: all clean run install-deps

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $@ $(LIBPATHS) $(LIBS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

# Dependencies
$(OBJECTS): include/hft_forest.h

install-deps:
	@echo "Installing dependencies..."
	@echo "Make sure you have:"
	@echo "  - Boost Beast (libboost-all-dev)"
	@echo "  - OpenSSL (libssl-dev)"
	@echo "  - nlohmann/json (nlohmann-json3-dev)"
	@echo ""
	@echo "On Ubuntu/Debian:"
	@echo "sudo apt-get install libboost-all-dev libssl-dev nlohmann-json3-dev"
	@echo ""
	@echo "On macOS:"
	@echo "brew install boost openssl nlohmann-json"

run: $(TARGET)
	./$(TARGET)
