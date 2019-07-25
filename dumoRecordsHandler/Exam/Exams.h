//
// Created by emyrmak on 7/23/2019.
//
#pragma once

#include "IContainer.h"
#include "Exam.h"


class Exams: public IContainer  {
public:

    Exams() = default;
    ~Exams();

    void addRecord(std::vector<std::string>& data) override;
    void writeToFile(std::string pathToStore) override;
private:

    std::vector<Exam> records;
    static const int idIndex;
    static const int courseIndex;
    static const int studentIndex;
    static const int resultIndex;
};

