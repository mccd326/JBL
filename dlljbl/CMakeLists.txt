cmake_minimum_required(VERSION 3.5...4.0)

# Extract version numbers from version.h

project(JBLDLL
    DESCRIPTION "Jamasato Base Library"
    VERSION "${JBL_VERSION_FULL}")

# Set version.rc to current version information
configure_file(src/version.rc.in ${CMAKE_CURRENT_BINARY_DIR}/version.rc @ONLY)

set(SOURCES
    "src/jbl.cpp"
    "src/string/jblstring.cpp"
    ${CMAKE_CURRENT_BINARY_DIR}/version.rc
)

set(BUILD_SHARED_LIBS ON)

add_compile_definitions(
    JBL_EXPORTS
)

add_library(DLLJBL SHARED ${SOURCES})
set(CMAKE_SHARED_LIBRARY_PREFIX "")


target_include_directories(DLLJBL PUBLIC ${CMAKE_CURRENT_BINARY_DIR})

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    set_target_properties(DLLJBL PROPERTIES
        LINK_FLAGS "-static-libgcc -static-libstdc++"
    )
endif()


add_library(LIBJBL STATIC ${SOURCES})
set(CMAKE_STATIC_LIBRARY_PREFIX "")
