//
// Created by emyrmak on 7/23/2019.
//

#pragma once
#include "IContainer.h"
#include "Course.h"

class Courses: public IContainer {
public:

    Courses() = default;
    ~Courses();
    void addRecord(std::vector<std::string>& data) override;
    void writeToFile(std::string pathToStore) override;
private:
    std::vector<Course> records;
    static const int idIndex;
    static const int nameIndex;
    static const int teacherIdIndex;
};