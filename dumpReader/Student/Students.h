//
// Created by emyrmak on 7/24/2019.
//
#pragma once
#include "Student.h"
#include "IContainer.h"

class Students: public IContainer {
public:

    Students() = default;
    ~Students();

    void addRecord(std::vector<std::string>& data) override;
    void writeToFile(std::string pathToStore) override;
private:
    std::vector<Student> records;
    static const int idIndex;
    static const int nameIndex;
};

