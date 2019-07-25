//
// Created by emyrmak on 7/24/2019.
//
#pragma once

#include "Teacher.h"
#include "IContainer.h"

class Teachers: public IContainer {
public:
    Teachers() = default;
    ~Teachers();

    void addRecord(std::vector<std::string>& data) override;
    void writeToFile(std::string pathToStore) override;
private:
    std::vector<Teacher> records;
    static const int idIndex;
    static const int nameIndex;
};

