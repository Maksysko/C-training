//
// Created by emyrmak on 7/3/2019.
//
#include <iostream>
#include "CharacterCounter.h"

CharacterCounter::CharacterCounter() {
    vowelsCount = 0;
    consonantsCount = 0;
    digitsCount = 0;
    othersCount = 0;

}

void CharacterCounter::stepVowelsCount() {
    vowelsCount++;
}

void CharacterCounter::stepConsonantsCount() {
    consonantsCount++;
}

void CharacterCounter::stepDigitsCount() {
    digitsCount++;
}

void CharacterCounter::stepOthersCount() {
    othersCount++;
}

bool CharacterCounter::isVowel(char character) {
    return VOWELS.find(character) != string::npos;
}

void CharacterCounter::checkCharacter(string word) {
    char firstCharacter = tolower(word[0]);
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

void CharacterCounter::getCounts() {
    cout << "Vowels Count: " << vowelsCount << endl;
    cout << "Consonants Count: " << consonantsCount << endl;
    cout << "Digits Count: " << digitsCount << endl;
    cout << "Others Symbol Count: " << othersCount << endl;
}




