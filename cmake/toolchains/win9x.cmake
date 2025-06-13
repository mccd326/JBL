set(CMAKE_SYSTEM_NAME Windows)
set(CMAKE_SYSTEM_VERSION 4.0)  # Windows 95/98

set(CMAKE_MAKE_PROGRAM "C:\\Program Files (x86)\\MinGW\\MinGW-3.1.0\\bin\\mingw32-make.exe")
set(CMAKE_C_COMPILER "C:\\Program Files (x86)\\MinGW\\MinGW-3.1.0\\bin\\mingw32-gcc.exe")  # DJGPP for DOS/Win9x
set(CMAKE_CXX_COMPILER "C:\\Program Files (x86)\\MinGW\\MinGW-3.1.0\\bin\\mingw32-g++.exe")
#set(CMAKE_RC_COMPILER "C:\\Program Files (x86)\\MinGW\\MinGW-3.1.0\\bin\\windres.exe")
set(CMAKE_LINKER "C:\\Program Files (x86)\\MinGW\\MinGW-3.1.0\\bin\\ld.exe")

add_definitions(-D_WIN32_WINNT=0x0400)  # Target Windows 95/98
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 98)  # Keep it simple
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_EXE_LINKER_FLAGS "-static -mwindows -Wl, --verbose")