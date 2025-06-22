cmake_minimum_required(VERSION 3.5...4.0)
project(JBLTest DESCRIPTION "Jamasato Base Library Tests")

# Set standard (use 98 for Windows 98, 11 or higher for Windows XP/Linux)
#set(CMAKE_CXX_STANDARD 98)

# Add source files
set(SOURCES
    "src/main.cpp"
    "src/string/jblstring.test.cpp")

include(GoogleTest)
#if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
#else()
find_package(GTest)
if(NOT GTest_FOUND)
    message(STATUS "GTest not found, adding subdirectory for googletest")
    set(BUILD_GMOCK OFF CACHE BOOL "Build gmock" FORCE)
    set(INSTALL_GTEST OFF CACHE BOOL "Install gtest" FORCE)
    set(BUILD_GTEST OFF CACHE BOOL "Build gtest" FORCE)
    set(GTEST_BUILD_TESTS OFF CACHE BOOL "Build gtest tests" FORCE)
    add_subdirectory(googletest)
endif()

include_directories(${CMAKE_SOURCE_DIR}/dlljbl/src)
set(DLLJBL_BINARY_DIR ${CMAKE_BINARY_DIR}/dlljbl_build)

add_executable(JBLtest ${SOURCES})

target_link_libraries(JBLtest LIBJBL gtest)

add_test(NAME JBLtest COMMAND JBLtest)