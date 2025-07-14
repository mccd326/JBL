#ifndef JBL_LIB_H
#define JBL_LIB_H

#if defined(__linux__)
#   define JBL_LINUX
#elif defined(_WIN32_WINNT)
#   define JBL_WINDOWS
#endif

#if defined(JBL_WINDOWS)
#   if defined(JBL_STATIC)
#       define JBL_EXPORT
#   elif defined(JBL_EXPORTS)
#       define JBL_EXPORT __declspec(dllexport)
#   else
#       define JBL_EXPORT __declspec(dllimport)
#   endif
#   define JBL_API  __cdecl
#endif


#if defined(__GNUC__)
#   define GCC_VERSION (__GNUC__ * 10000 \
                    + __GNUC_MINOR__ * 100 \
                    + __GNUC_PATCHLEVEL__)
#endif

JBL_EXPORT void JBL_API GetSystemInformation();

#endif
