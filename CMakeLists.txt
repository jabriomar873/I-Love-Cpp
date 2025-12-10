
cmake_minimum_required(VERSION 3.10)
project(I_Love_Cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(Basic)

# Main executable matching project name
add_executable(I_Love_Cpp
        Basic/Enums.cpp
        Basic/Enums.h
)

# First executable for const_vs_static
add_executable(const_vs_static_demo
        Basic/const_vs_static.cpp
        Basic/const_vs_static.h
)

# Second executable for ptr_vs_ref
add_executable(ptr_vs_ref_demo
        Basic/ptr_vs_ref.cpp
        Basic/ptr_vs_ref.h
)