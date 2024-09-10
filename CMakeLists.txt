# Minimum required CMake version
cmake_minimum_required(VERSION 3.15)

# Project name
project(ai_chip_sdk C)

# Define source directories
set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

# Add Cortex-M4 and DSP source directories
add_subdirectory(${SRC_DIR}/cortex-m4)
add_subdirectory(${SRC_DIR}/dsp)

# Set include directories
include_directories(${INCLUDE_DIR})
