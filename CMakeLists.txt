cmake_minimum_required(VERSION 3.15)
project(sorting_algorithms)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pedantic-errors")

add_executable(sorting_algorithms main.cpp sorting_algorithms.hpp sorting_algorithms.cpp)