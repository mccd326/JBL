set(CMAKE_SYSTEM_NAME Windows)
set(CMAKE_SYSTEM_VERSION 5.1) # Windows XP

set(CMAKE_GENERATOR "MinGW MakeFiles")
set(CMAKE_MAKE_PROGRAM "C:/MinGW64/x86/8.1.0/dwarf/bin/mingw32-make.exe" CACHE PATH "MinGW Makefiles generator")
set(CMAKE_C_COMPILER "C:/MinGW64/x86/8.1.0/dwarf/bin/i686-w64-mingw32-gcc.exe")
set(CMAKE_CXX_COMPILER "C:/MinGW64/x86/8.1.0/dwarf/bin/i686-w64-mingw32-g++.exe")
set(CMAKE_RC_COMPILER "C:/MinGW64/x86/8.1.0/dwarf/bin/windres.exe")

add_compile_definitions(_WIN32_WINNT=0x0501)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static -static-libgcc -static-libstdc++")