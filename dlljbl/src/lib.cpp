#include <iostream>
#include "lib.h"

void Startup(){
    std::cout << "Hello World from the library running in " << (sizeof(size_t) == 4 ? "32 bit" : "64 bit") << std::endl;
}

void GetSystemInformation(){
    std::cout << "OS: ";
    #ifdef JBL_WINDOWS
    std::cout << "Windows" << std:.endl;
    #elif defined(JBL_LINUX)
    std::cout << "Linux" << std::endl;
    #endif

    int architecture = sizeof(size_t) == 4 ? 32 : 64;

    std::cout << "Architecture: " << architecture << " bit" << std::endl;

}