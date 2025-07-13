#include <iostream>
#include "jbl.h"

void Startup(){
    std::cout << "Hello World from the library running in " << (sizeof(size_t) == 4 ? "32 bit" : "64 bit") << std::endl;
}

void GetSystemInformation(){
    std::cout << "OS: ";
#if defined(JBL_WINDOWS)
    std::cout << "Windows" << std::endl;
#elif defined(JBL_LINUX)
    std::cout << "Linux" << std::endl;
#endif

    int architecture = sizeof(size_t) == 4 ? 32 : 64;

    std::cout << "Architecture: " << architecture << " bit" << std::endl;

#if defined(GCC_VERSION)
    std::cout << "GCC Version: " << GCC_VERSION << std::endl;
#endif

    std::cout << "C++ Macro: " << __cplusplus << std::endl;

    std::cout << "C++ Standard: " << (__cplusplus == 199711L ? "C++98" :
                                        __cplusplus == 201103L ? "C++11" : 
                                        __cplusplus == 201402L ? "C++14" : 
                                        __cplusplus == 201703L ? "C++17" : 
                                        __cplusplus == 202002L ? "C++20" : 
                                        "Unknown") << std::endl;

}
