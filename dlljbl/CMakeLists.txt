cmake_minimum_required(VERSION 3.5...4.0)
project(JBLDLL DESCRIPTION "Jamasato Base Library")

# Add source files
set(SOURCES
    "src/jbl.cpp"
    "src/string/jblstring.cpp")

set(BUILD_SHARED_LIBS ON)

add_library(DLLJBL SHARED ${SOURCES})
add_library(LIBJBL STATIC ${SOURCES})