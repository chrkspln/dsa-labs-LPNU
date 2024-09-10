cmake_minimum_required(VERSION 3.28)
set(CMAKE_CXX_STANDARD 17)

set(PROJECT_NAME
    DSALabs
)
set(PROJECT_SOURCE
    main.cpp
)
project(${PROJECT_NAME})
add_executable(${PROJECT_NAME} ${PROJECT_SOURCE})
add_subdirectory(lab1)
add_subdirectory(lab2)