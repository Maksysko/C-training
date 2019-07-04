//
// Created by emyrmak on 7/3/2019.
//

#include "FileMode.h"
#include <iostream>
#include <fstream>

int FileMode::run(const string &path) {
    ifstream  file;
    file.open(path);
    if (file) {
        while(file >> inputText) {
            characterCounter.checkCharacter(inputText);
        }
        characterCounter.getCounts();
        file.close();
        return 0;
    }
    cerr << "File not found" << endl;
    return 1;
}
