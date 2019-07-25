//
// Created by emyrmak on 7/23/2019.
//

#pragma once
#include <sstream>
#include <string>

class IRecord
{
public:
    virtual int getId() const = 0;
    virtual std::string getFormatted() const = 0;
    virtual ~IRecord() = default;
};
