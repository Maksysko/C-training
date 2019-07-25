//
// Created by emyrmak on 7/24/2019.
//
#pragma once

#include "IRecord.h"
#include "Student.h"
#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>


class IContainer {
public:
    IContainer() = default;
    ~IContainer() = default;
public:
    virtual void writeToFile(std::string pathToStore) = 0;
    virtual void addRecord(std::vector<std::string>& data) = 0;



};

template<typename T>
auto comparator = [](const T & left, const T & right) -> bool {
    return left.getId() < right.getId();
};