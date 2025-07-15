
# read the version header file to extract version numbers
file(READ "${JBL_SOURCE_DIR}/version.h" JBL_VERSION_HEADER_CONTENTS)
string(REGEX MATCH "#define[ \t]+JBL_VERSION_MAJOR[ \t]+([0-9]+)" _major_match "${JBL_VERSION_HEADER_CONTENTS}")
set(JBL_VERSION_MAJOR "${CMAKE_MATCH_1}")
string(REGEX MATCH "#define[ \t]+JBL_VERSION_MINOR[ \t]+([0-9]+)" _minor_match "${JBL_VERSION_HEADER_CONTENTS}")
set(JBL_VERSION_MINOR "${CMAKE_MATCH_1}")
string(REGEX MATCH "#define[ \t]+JBL_VERSION_PATCH[ \t]+([0-9]+)" _patch_match "${JBL_VERSION_HEADER_CONTENTS}")
set(JBL_VERSION_PATCH "${CMAKE_MATCH_1}")

# Match preview macro as any non-whitespace string (e.g., alpha, beta1, rc2, etc.)
string(REGEX MATCH "#define[ \t]+JBL_VERSION_PREVIEW[ \t]+([A-Za-z0-9_\.-]+)" _preview_match "${JBL_VERSION_HEADER_CONTENTS}")
set(JBL_VERSION_PREVIEW "${CMAKE_MATCH_1}")


set(JBL_VERSION_FULL "${JBL_VERSION_MAJOR}.${JBL_VERSION_MINOR}.${JBL_VERSION_PATCH}")
if(JBL_VERSION_PREVIEW)
    set(JBL_VERSION_FULL_SEMANTIC "${JBL_VERSION_FULL}-${JBL_VERSION_PREVIEW}")
endif()

message(STATUS "JBL Version: [${JBL_VERSION_FULL}]")
message(STATUS "JBL Semantic Version: [${JBL_VERSION_FULL_SEMANTIC}]")
