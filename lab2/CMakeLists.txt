cmake_minimum_required(VERSION 3.28)
set(CMAKE_CXX_STANDARD 17)

set(LAB2_PROJECT_NAME
    Lab2
)
set(LAB2_PROJECT_SOURCE
    choice_operators.c
)
project(${LAB2_PROJECT_NAME})
add_executable(${LAB2_PROJECT_NAME} ${LAB2_PROJECT_SOURCE})