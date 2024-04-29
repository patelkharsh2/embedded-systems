# Set the minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# Define the project name and version
project(SSD1306 VERSION 1.0)

# Specify the C and C++ standards
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# Set variables for the library names
file(GLOB SOURCES_C "src/*.c")

add_executable(ssd1306_bin main.c)

# Add a static library for C
add_library(ssd1306 STATIC ${SOURCES_C})

# Link the executable with both C and C++ libraries
target_link_libraries(ssd1306_bin ssd1306)
