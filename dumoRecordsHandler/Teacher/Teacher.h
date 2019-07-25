//
// Created by emyrmak on 7/23/2019.
//
#pragma once

#include "IRecord.h"
#include "IPerson.h"

class Teacher: public IRecord, public IPerson {
public:
    Teacher(int id, std::string name);

    int getId() const override;
    std::string getFormatted() const override;
    std::string getName() const override;
private:
    int id;
    std::string name;
};