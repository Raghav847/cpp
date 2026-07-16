CXX = clang++
CXXFLAGS = -std=c++20 -Wall -Wextra -g

SRCS = $(wildcard src/*.cpp)
BINS = $(patsubst src/%.cpp,bin/%,$(SRCS))

all: bin $(BINS)

bin:
	mkdir -p bin

bin/%: src/%.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -rf bin
