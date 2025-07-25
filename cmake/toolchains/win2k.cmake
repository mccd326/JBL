set(CMAKE_SYSTEM_NAME Windows)
set(CMAKE_SYSTEM_VERSION 5.0)

set(CMAKE_GENERATOR "MinGW Makefiles")
set(CMAKE_MAKE_PROGRAM "C:/MinGW/4.7.2/bin/mingw32-make.exe" CACHE PATH "MinGW Makefiles generator")
set(CMAKE_C_COMPILER "C:/MinGW/4.7.2/bin/i686-w64-mingw32-gcc.exe")
set(CMAKE_CXX_COMPILER "C:/MinGW/4.7.2/bin/i686-w64-mingw32-g++.exe")
set(CMAKE_RC_COMPILER "C:/MinGW/4.7.2/bin/windres.exe")
set(CMAKE_LINKER "C:/MinGW/4.7.2/bin/ld.exe")

add_compile_definitions(_WIN32_WINNT=0x0500)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static")