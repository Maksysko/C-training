//
// Created by emyrmak on 7/23/2019.
//
#pragma once

#include "IRecord.h"

class Exam: public IRecord {
public:
    Exam(int id, int courseId, int studentId, int result);

    int getId() const override;
    std::string getFormatted() const override;
private:
    int id;
    int courseId;
    int studentId;
    int result;
};

