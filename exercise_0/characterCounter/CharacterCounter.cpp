//
// Created by emyrmak on 7/3/2019.
//
#include <iostream>
#include "CharacterCounter.h"

void CharacterCounter::stepVowelsCount() {
    ++vowelsCount;
}

void CharacterCounter::stepConsonantsCount() {
    ++consonantsCount;
}

void CharacterCounter::stepDigitsCount() {
    ++digitsCount;
}

void CharacterCounter::stepOthersCount() {
    ++othersCount;
}

bool CharacterCounter::isVowel(const char& character) const {
    return VOWELS.find(character) != std::string::npos;
}

void CharacterCounter::checkCharacter(std::string& word) {
    const auto firstCharacter = tolower(word[0]);
    if (isalpha(firstCharacter)){
        if (isVowel(firstCharacter)){
            stepVowelsCount();
        } else {
            stepConsonantsCount();
        }
    } else {
        if (isdigit(firstCharacter)){
            stepDigitsCount();
        } else {
            stepOthersCount();
        }
    }
}

void CharacterCounter::printCounts() const {
    std::cout << "Vowels Count: " << vowelsCount << std::endl;
    std::cout << "Consonants Count: " << consonantsCount << std::endl;
    std::cout << "Digits Count: " << digitsCount << std::endl;
    std::cout << "Others Symbol Count: " << othersCount <<std::endl;
}




