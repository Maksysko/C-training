//
// Created by emyrmak on 7/23/2019.
//

#pragma once

#include "IRecord.h"
#include "Exams.h"
#include "Courses.h"
#include "Students.h"
#include "Teachers.h"

class dumpRecordsHandler {
public:
    dumpRecordsHandler() = default;
    ~dumpRecordsHandler() = default;

public:
    void readDataFromDumpFile(std::string& dumpFilePath);
    void storeRecords();
private:
    static std::vector<std::string> getRecordData(std::istringstream& streamRecord);

    IContainer* getRecordObject(const std::string& recordType);
    void workOutRecord(std::string& record);
private:

    Exams exams;
    Courses courses;
    Students students;
    Teachers teachers;

    static std::string typeExam;
    static std::string typeCourse;
    static std::string typeStudent;
    static std::string typeTeacher;
};
