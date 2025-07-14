#pragma once

#define JBL_STRINGIFY(x) #x
#define JBL_STR(x) JBL_STRINGIFY(x)

#define JBL_VERSION_MAJOR    0
#define JBL_VERSION_MINOR    0
#define JBL_VERSION_PATCH    1
#define JBL_VERSION_BUILD    0
#define JBL_VERSION_STRING   JBL_STR(JBL_VERSION_MAJOR) "." \
                            JBL_STR(JBL_VERSION_MINOR) "." \
                            JBL_STR(JBL_VERSION_PATCH) "." \
                            JBL_STR(JBL_VERSION_BUILD)
