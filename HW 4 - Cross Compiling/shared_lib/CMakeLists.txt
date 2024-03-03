# Set the minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# Define the project name and version
project(MixedLanguageApplication VERSION 1.0)

# Specify the C and C++ standards
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED True)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set variables for the library names
set(C_LIBRARY int_arithmetic)
set(CPP_LIBRARY double_arithmetic)
file(GLOB SOURCES_CPP "src/*.cpp")
file(GLOB SOURCES_C "src/*.c")

# Add a static library for C
add_library(${C_LIBRARY} SHARED ${SOURCES_C})

# Add a static library for C++
add_library(${CPP_LIBRARY} SHARED ${SOURCES_CPP})

# Add source files for the executable
add_executable(cppmath main.cpp)

# Link the executable with both C and C++ libraries
target_link_libraries(cppmath ${C_LIBRARY} ${CPP_LIBRARY})