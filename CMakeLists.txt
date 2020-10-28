cmake_minimum_required(VERSION 3.17)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_library(Strof Strof.cpp Strof.h)
link_libraries(Strof)
add_executable(oop2 main.cpp dialog.cpp dialog.h getnum.h getnum.h)
