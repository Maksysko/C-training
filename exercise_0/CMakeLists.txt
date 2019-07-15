cmake_minimum_required(VERSION 3.14)
project(exercise_0)

set(CMAKE_CXX_STANDARD 14)


add_executable(exercise_0
        characterCounter/CharacterCounter.cpp
        characterCounter/CharacterCounter.h
        fileMode/FileMode.cpp
        fileMode/FileMode.h
        terminalMode/TerminalMode.cpp
        terminalMode/TerminalMode.h
        main.cpp)

target_include_directories(exercise_0 PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>/characterCounter
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>/fileMode
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>/terminalMode)