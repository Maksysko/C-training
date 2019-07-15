//
// Created by emyrmak on 7/3/2019.
//
#pragma once
#include "CharacterCounter.h"

class TerminalMode {

    private:
        CharacterCounter characterCounter;
        const std::string exit = "q";
        const std::string info = "#i";
        std::string inputText;
    public:
        int run();
};
