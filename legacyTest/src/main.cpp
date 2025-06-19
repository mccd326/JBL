#include <iostream>
#include <lib.h>

int main(){
    std::cout << "Hello World!" << std::endl;
    size_t someSize = 0;
    std::string architecture;
    if(sizeof(size_t) == 4){
        architecture = "32 bit";
    }
    else{
        architecture = "64 bit";
    }
    std::cout << "We are currently running on : " << architecture << std::endl;
#if defined(JBL_WINDOWs)
    std::cout << "Defined Windows Version " << _WIN32_WINNT << std::endl;
#elif defined(JBL_LINUX)
    std::cout << "Defined OS: Linux" << std::endl;
#endif

    GetSystemInformation();
}