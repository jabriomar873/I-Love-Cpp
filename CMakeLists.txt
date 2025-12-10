
cmake_minimum_required(VERSION 3.10)
project(I_Love_Cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(Basic)

# Main executable matching project name
add_executable(I_Love_Cpp
        Basic/Template.cpp
        Basic/Template.h
)
# the whole executable files
add_executable(const_vs_static_demo
        Basic/const_vs_static.cpp
        Basic/const_vs_static.h
        Basic/Template.cpp
        Basic/Template.
        Basic/ptr_vs_ref.cpp
        Basic/ptr_vs_ref.h
)
