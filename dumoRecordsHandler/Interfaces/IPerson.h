//
// Created by emyrmak on 7/23/2019.
//

#pragma once

#include <string>

class IPerson
{
public:
    virtual std::string getName() const = 0;
    virtual ~IPerson() = default;
};
