# Set the minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# Define the project name and version
project(ArithmeticLibrary VERSION 1.0)

# Specify the C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# Add an executable for the main program
add_executable(main main.c)

# Add library source files
add_library(int_arithmetic STATIC add_int.c sub_int.c mult_int.c div_int.c)

# Link the example program with the static library
target_link_libraries(main int_arithmetic)