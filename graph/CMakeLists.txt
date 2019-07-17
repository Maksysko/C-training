cmake_minimum_required(VERSION 3.14)
project(graph)

set(CMAKE_CXX_STANDARD 17)

add_executable(graph main.cpp ShortestWay/ShortestWay.cpp Vertices/Vertices.cpp)

target_include_directories(graph PUBLIC  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>/Vertices  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>/ShortestWay)