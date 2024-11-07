# Define variables
CXX = g++
CXXFLAGS = -g -Wall   # Added -Iheader to specify header file location
TARGET = main
SOURCES = source/main.cpp
OBJECTS = $(SOURCES:.cpp=.o)

# Default target to build the executable
all: $(TARGET)

# Rule to link object files and create the executable
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Rule to compile .cpp files into .o files
source/%.o: source/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Run the executable
run: $(TARGET)
	./$(TARGET)

# Clean up object and executable files
clear:
	rm -f $(OBJECTS) $(TARGET)

#Usage

#Compile: Run (make) to compile all source files and create the executable.
#Execute: Run (make run) to compile (if necessary) and then execute main.
#Clean: Run (make clear) to remove the compiled files.
