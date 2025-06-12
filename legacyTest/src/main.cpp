#include <iostream>
#include "lib.h"

int main(){
    std::cout << "Hello World!" << std::endl;
    char MyBuffer[20];
    size_t someSize = 0;
    std::string architecture;
    if(sizeof(size_t) == 4){
        architecture = "32 bit";
    }
    else{
        architecture = "64 bit";
    }
    std::cout << "We are currently running on : " << architecture << std::endl;

    std::cout << "Defined Windows Version " << _WIN32_WINNT << std::endl;

    std::cout << "Custom Windows Version " << MYWINVER << std::endl;

    Startup();
}