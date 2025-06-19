#ifndef JBL_LIB_H
#define JBL_LIB_H

#if defined(__linux__)
#define JBL_LINUX
#elif defined(_WIN32_WINNT)
#define JBL_WINDOWS
#endif



void GetSystemInformation();

#endif