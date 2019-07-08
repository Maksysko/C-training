//
// Created by emyrmak on 7/3/2019.
//
#pragma once
#include <string>
#include "../characterCounter/CharacterCounter.h"

class FileMode {
private:
    CharacterCounter characterCounter;
    std::string inputText;
public:
    int run(const std::string& path);
};
