cmake_minimum_required(VERSION 3.16)

project(h6b LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt6 REQUIRED COMPONENTS Core)

add_executable(h6b
    main.cpp
    exampleclass.cpp
    exampleclass.h
)

target_link_libraries(h6b PRIVATE Qt6::Core)
