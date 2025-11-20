cmake_minimum_required(VERSION 4.0)
project(I_Love_Cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(Basic)

add_executable(I_Love_Cpp
        Basic/const_vs_static.cpp
        Basic/const_vs_static.h)
