cmake_minimum_required(VERSION 3.28)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

set(PROJECT_NAME
    DSALabs
)
project(${PROJECT_NAME})

add_subdirectory(lab1)
add_subdirectory(lab2)
add_subdirectory(lab3)
add_subdirectory(lab4)
add_subdirectory(lab5)

add_subdirectory(lab1_cpp)
add_subdirectory(lab2_cpp)