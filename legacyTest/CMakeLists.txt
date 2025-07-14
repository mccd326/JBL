set(CMAKE_MINIMUM_REQUIRED_VERSION 3.5...4.0)

project(JBL_LEGACY_TEST
        DESCRIPTION "Test project for older platforms"
        VERSION "0.0.1")

set(SOURCES src/main.cpp)

add_executable(legacytests ${SOURCES})

include_directories(../dlljbl/src)

target_link_libraries(legacytests LIBJBL)
target_compile_definitions(legacytests PRIVATE JBL_STATIC)


add_executable(dllLegacyTests ${SOURCES})

target_link_libraries(dllLegacyTests DLLJBL)

set(CMAKE_SHARED_LINKER_FLAGS "-shared")
# Post-build step: copy DLLJBL shared library to output directory for legacytests binaries

add_custom_command(TARGET dllLegacyTests
    POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "$<TARGET_FILE:DLLJBL>"
        $<TARGET_FILE_DIR:dllLegacyTests>
)
