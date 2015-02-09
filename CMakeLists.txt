cmake_minimum_required(VERSION 2.8.4)
project(Pendu)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Pendu ${SOURCE_FILES})