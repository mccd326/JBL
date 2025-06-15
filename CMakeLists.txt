cmake_minimum_required(VERSION 3.5...4.0)
project(JBL
    DESCRIPTION "Jamasato Base Library"
    VERSION 0.0.1
)

# Add source files
add_subdirectory(dlljbl)
if(CMAKE_SYSTEM_VERSION GREATER 5.1)
    message("Configuring test project on modern platforms")
    add_subdirectory(dlljbltest)
else()
    message("Configuring legacy test project")
    add_subdirectory(legacyTest)
endif()

# Define installation rules
#install(TARGETS MyLibrary DESTINATION lib)
#install(FILES include/library.h DESTINATION include)
