#include <iostream>
#include "lib.h"

void Startup(){
    std::cout << "Hello World from the library running in " << (sizeof(size_t) == 4 ? "32 bit" : "64 bit") << std::endl;
}