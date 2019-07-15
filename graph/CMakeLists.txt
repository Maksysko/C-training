cmake_minimum_required(VERSION 3.14)
project(graph)

set(CMAKE_CXX_STANDARD 17)

add_executable(graph main.cpp Graph/Graph.cpp Graph/Graph.h Vertices/Vertices.cpp Vertices/Vertices.h)

target_include_directories(graph PUBLIC  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>/Vertices  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>/Graph)