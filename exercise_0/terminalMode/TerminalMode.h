//
// Created by emyrmak on 7/3/2019.
//

#ifndef CHARACTERCOUNTERAPP_TERMINALMODE_H
#define CHARACTERCOUNTERAPP_TERMINALMODE_H
#include "../characterCounter/CharacterCounter.h"


class TerminalMode {

    private:
        CharacterCounter characterCounter;
        string const exit = "q";
        string inputText;
    public:
        void run();

};


#endif //CHARACTERCOUNTERAPP_TERMINALMODE_H
