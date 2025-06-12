set(CMAKE_MINIMUM_REQUIRED_VERSION 3.5...4.0)

project(JBL_LEGACY_TEST)

set(SOURCES src/main.cpp)

add_executable(legacytests ${SOURCES})

include_directories(../dlljbl/src)

target_link_libraries(legacytests JBLDLL)
