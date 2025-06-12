cmake_minimum_required(VERSION 3.5...4.0)
project(JBL DESCRIPTION "Jamasato Base Library")

# Set standard (use 98 for Windows 98, 11 or higher for Windows XP/Linux)
set(CMAKE_CXX_STANDARD 98)

# Add source files
add_subdirectory(dlljbl)
if(CMAKE_SYSTEM_VERSION GREATER 5.1)
    message("Configuring test project on modern platforms")
    add_subdirectory(dlljbltest)
endif()

# Define installation rules
#install(TARGETS MyLibrary DESTINATION lib)
#install(FILES include/library.h DESTINATION include)
