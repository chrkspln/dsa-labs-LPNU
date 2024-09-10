cmake_minimum_required(VERSION 3.28)
set(CMAKE_CXX_STANDARD 17)

set(LAB1_PROJECT_NAME
    Lab1
)
set(LAB1_PROJECT_SOURCE
    basic_types_and_iostream.c
)
project(${LAB1_PROJECT_NAME})
add_executable(${LAB1_PROJECT_NAME} ${LAB1_PROJECT_SOURCE})