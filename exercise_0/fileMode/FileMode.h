//
// Created by emyrmak on 7/3/2019.
//

#ifndef CHARACTERCOUNTERAPP_FILEMODE_H
#define CHARACTERCOUNTERAPP_FILEMODE_H
#include "../characterCounter/CharacterCounter.h"

class FileMode {
private:
    CharacterCounter characterCounter;
    string inputText;
public:
    int run(const string &path);
};


#endif //CHARACTERCOUNTERAPP_FILEMODE_H
