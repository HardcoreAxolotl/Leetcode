cmake_minimum_required(VERSION 4.0)

project(leetcode LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(leetcode src/main.cpp)

include(GNUInstallDirs)
install(TARGETS leetcode
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

target_include_directories(leetcode PRIVATE
    inc
)
