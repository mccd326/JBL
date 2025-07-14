cmake_minimum_required(VERSION 3.5...4.0)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

set(JBL_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/dlljbl/src")

include(JBLVersion)

project(JBL
    DESCRIPTION "Jamasato Base Library"
    VERSION "${JBL_VERSION_FULL}"
)

# Add source files
add_subdirectory(dlljbl)
if(CMAKE_SYSTEM_VERSION GREATER 5.1 OR CMAKE_SYSTEM_NAME STREQUAL "Linux")
    message("Configuring test project on modern platforms")
    add_subdirectory(dlljbltest)
endif()
message("Configuring legacy test project")
add_subdirectory(legacyTest)

# Define installation rules
#install(TARGETS MyLibrary DESTINATION lib)
#install(FILES include/library.h DESTINATION include)
