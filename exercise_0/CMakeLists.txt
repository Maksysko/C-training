cmake_minimum_required(VERSION 3.14)
project(exercise_0)

set(CMAKE_CXX_STANDARD 14)

include_directories(characterCounter)
include_directories(fileMode)
include_directories(terminalMode)

add_executable(exercise_0
        characterCounter/CharacterCounter.cpp
        characterCounter/CharacterCounter.h
        fileMode/FileMode.cpp
        fileMode/FileMode.h
        terminalMode/TerminalMode.cpp
        terminalMode/TerminalMode.h
        main.cpp)
