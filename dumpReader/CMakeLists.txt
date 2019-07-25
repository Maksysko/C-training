cmake_minimum_required(VERSION 3.14)
project(dumpRecordsHandler)

set(CMAKE_CXX_STANDARD 17)

add_executable(dumpRecordsHandler
        main.cpp
        Interfaces/IPerson.h
        Interfaces/IRecord.h
        Interfaces/IContainer.h
        Course/Course.cpp
        Course/Courses.cpp
        Teacher/Teacher.cpp
        Teacher/Teachers.cpp
        Exam/Exam.cpp
        Exam/Exams.cpp
        Student/Student.cpp
        Student/Students.cpp
        dumpRecordsHandler/dumpRecordsHandler.cpp)

target_include_directories(dumpRecordsHandler PUBLIC
        Course
        Interfaces
        Exam
        Student
        Teacher
        dumpRecordsHandler)