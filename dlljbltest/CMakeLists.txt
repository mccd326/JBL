cmake_minimum_required(VERSION 3.5...4.0)
project(JBLTest DESCRIPTION "Jamasato Base Library Tests")

# Set standard (use 98 for Windows 98, 11 or higher for Windows XP/Linux)
#set(CMAKE_CXX_STANDARD 98)

# Add source files
set(SOURCES src/main.cpp)

include(GoogleTest)
if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
find_package(GTest)
else()
add_subdirectory(googletest)
endif()

include_directories(${CMAKE_SOURCE_DIR}/dlljbl/src)
set(DLLJBL_BINARY_DIR ${CMAKE_BINARY_DIR}/dlljbl_build)

add_executable(JBLtest ${SOURCES})

target_link_libraries(JBLtest LIBJBL gtest)

