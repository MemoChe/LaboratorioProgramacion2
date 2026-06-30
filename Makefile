CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -Iinclude
TARGET = test
BUILD_DIR = build
SRC_DIR = src

SOURCES = $(SRC_DIR)/main.cc $(SRC_DIR)/ArrayDin.cc
OBJECTS = $(patsubst $(SRC_DIR)/%.cc,$(BUILD_DIR)/%.o,$(SOURCES))

$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cc include/ArrayDin.h | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf $(BUILD_DIR) $(TARGET)

.PHONY: run clean
