cmake_minimum_required(VERSION 3.3)
project(testClas)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp students.cpp students.h)
add_executable(testClas ${SOURCE_FILES})