cmake_minimum_required(VERSION 3.28)
set(CMAKE_CXX_STANDARD 17)

set(LAB_PROJECT_NAME
    Lab1
)
set(LAB_PROJECT_SOURCE
    basic_types_and_iostream.cpp
)
project(${LAB_PROJECT_NAME})
add_executable(${LAB_PROJECT_NAME} ${LAB_PROJECT_SOURCE})