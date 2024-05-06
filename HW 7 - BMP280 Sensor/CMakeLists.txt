# Set the minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# Define the project name and version
project(BMP280 VERSION 1.0)

# Specify the C and C++ standards
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# Set variables for the library names
file(GLOB OLED_SOURCES_C "oled_src/*.c")
file(GLOB BMP_SOURCES_C "bmp_src/*.c")


add_executable(bmp280_bin main.c)

# Add a static library for C
add_library(ssd1306 STATIC ${OLED_SOURCES_C})
add_library(bmp280 STATIC ${BMP_SOURCES_C})


# Link the executable with both C and C++ libraries
target_link_libraries(bmp280_bin ssd1306 bmp280)
