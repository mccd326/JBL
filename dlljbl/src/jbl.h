#ifndef JBL_LIB_H
#define JBL_LIB_H

#if defined(__linux__)
#define JBL_LINUX
#elif defined(_WIN32_WINNT)
#define JBL_WINDOWS
#endif

#if defined(__GNUC__)
#   define GCC_VERSION (__GNUC__ * 10000 \
                    + __GNUC_MINOR__ * 100 \
                    + __GNUC_PATCHLEVEL__)
#endif

void GetSystemInformation();

#endif
