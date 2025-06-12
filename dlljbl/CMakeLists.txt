cmake_minimum_required(VERSION 3.5...4.0)
project(JBLDLL DESCRIPTION "Jamasato Base Library")

# Set standard (use 98 for Windows 98, 11 or higher for Windows XP/Linux)
set(CMAKE_CXX_STANDARD 98)

# Add source files
set(SOURCES src/lib.cpp src/lib.h)

add_library(JBLDLL ${SOURCES})
