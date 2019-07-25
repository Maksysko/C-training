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

std::ostream &operator<<(std::ostream &out, const CharacterCounter &obj) {
    return out << "Vowels Count: " << obj.vowelsCount << std::endl
               << "Consonants Count: " << obj.consonantsCount << std::endl
               << "Digits Count: " << obj.digitsCount << std::endl
               << "Others Symbol Count: " << obj.othersCount <<std::endl;
}

//void CharacterCounter: {
//    std::cout << "Vowels Count: " << vowelsCount << std::endl;
//    std::cout << "Consonants Count: " << consonantsCount << std::endl;
//    std::cout << "Digits Count: " << digitsCount << std::endl;
//    std::cout << "Others Symbol Count: " << othersCount <<std::endl;
//}




