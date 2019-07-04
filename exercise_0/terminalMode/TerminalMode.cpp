//
// Created by emyrmak on 7/3/2019.
//

#include <iostream>
#include "TerminalMode.h"


void TerminalMode::run() {
    CharacterCounter characterCounter;
    while (cin >> inputText && inputText != exit){
        characterCounter.checkCharacter(inputText);

    }
    characterCounter.getCounts();
}
