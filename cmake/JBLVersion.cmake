
# read the version header file to extract version numbers
file(READ "${JBL_SOURCE_DIR}/version.h" JBL_VERSION_HEADER_CONTENTS)
string(REGEX MATCH "#define[ \t]+JBL_VERSION_MAJOR[ \t]+([0-9]+)" _major_match "${JBL_VERSION_HEADER_CONTENTS}")
set(JBL_VERSION_MAJOR "${CMAKE_MATCH_1}")
string(REGEX MATCH "#define[ \t]+JBL_VERSION_MINOR[ \t]+([0-9]+)" _minor_match "${JBL_VERSION_HEADER_CONTENTS}")
set(JBL_VERSION_MINOR "${CMAKE_MATCH_1}")
string(REGEX MATCH "#define[ \t]+JBL_VERSION_PATCH[ \t]+([0-9]+)" _patch_match "${JBL_VERSION_HEADER_CONTENTS}")
set(JBL_VERSION_PATCH "${CMAKE_MATCH_1}")
string(REGEX MATCH "#define[ \t]+JBL_VERSION_BUILD[ \t]+([0-9]+)" _patch_match "${JBL_VERSION_HEADER_CONTENTS}")
set(JBL_VERSION_BUILD "${CMAKE_MATCH_1}")

set(JBL_VERSION_FULL "${JBL_VERSION_MAJOR}.${JBL_VERSION_MINOR}.${JBL_VERSION_PATCH}.${JBL_VERSION_BUILD}")
