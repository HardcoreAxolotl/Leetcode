cmake_minimum_required(VERSION 3.16)

project(leetcode LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(leetcode main.cpp
    library.hpp library.cpp)

include(GNUInstallDirs)
install(TARGETS leetcode
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
