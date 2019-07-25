//
// Created by emyrmak on 7/3/2019.
//

#include "FileMode.h"
#include <iostream>
#include <fstream>

int FileMode::run(const std::string &path) {
    std::cout << "Reading from file: " << path << std::endl;
    std::ifstream  file(path);
    if (!file) {
        std::cerr << "File not found" << std::endl;
        return 1;
    }
    while(file >> inputText) {
        characterCounter.checkCharacter(inputText);
    }
    std::cout << characterCounter;
    return 0;
}
