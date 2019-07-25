//
// Created by emyrmak on 7/3/2019.
//

#include <iostream>
#include <string>
#include "TerminalMode.h"



int TerminalMode::run() {
    try {
        std::cout << "Type a text and press Enter." << std::endl;
        std::cout << "Type q to exit." << std::endl;
        std::cout << "Type #i to print results" << std::endl;
        while (std::cin >> inputText && inputText != exit) {
            if (inputText == info) {
                std::cout << characterCounter;
                continue;
            }
            characterCounter.checkCharacter(inputText);
        }
        std::cout << characterCounter;
        return 0;
    } catch (const std::exception& ex){
        std::cerr << ex.what() << std::endl;
        return 1;
    }
}
