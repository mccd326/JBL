#pragma once
#ifndef JBL_VERSION_H
#   define JBL_VERSION_H
#endif

/*
 2025-07-14     0.0.1.0         Initial version, creation of version.h and versioning macros.
 2025-07-15     0.0.1.1         Fix for modern Windows toolchain, which didn't define _WIN32_WINNT.
                                Split Windows pipeline into two separate workflows, one for MSVC and one for MinGW.
 2025-07-15     0.0.1.2         Fixed path to legacy test build directory in MinGW pipeline.
 2025-07-15     0.0.1.3         Adjusted artifact uploads for MinGW and MSVC pipelines to only include relevant files.
 2025-07-15     0.0.1.alpha.2   Changed to semantic versioning format.
*/

#define JBL_STRINGIFY(x) #x
#define JBL_STR(x) JBL_STRINGIFY(x)

#define JBL_VERSION_MAJOR    0
#define JBL_VERSION_MINOR    0
#define JBL_VERSION_PATCH    1
#define JBL_VERSION_PREVIEW  alpha.2
#define JBL_VERSION_STRING   JBL_STR(JBL_VERSION_MAJOR) "." \
                            JBL_STR(JBL_VERSION_MINOR) "." \
                            JBL_STR(JBL_VERSION_PATCH) "-" \
                            JBL_STR(JBL_VERSION_PREVIEW)
