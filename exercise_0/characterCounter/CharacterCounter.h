//
// Created by emyrmak on 7/3/2019.
//
#pragma once
#include <string>
#include <iostream>
class CharacterCounter {

public:
    CharacterCounter() = default;
    void checkCharacter(std::string& word);
    friend std::ostream& operator << (std::ostream& out, const CharacterCounter& obj);

private:
    const std::string VOWELS = "aeiouy";
    int vowelsCount{};
    int consonantsCount{};
    int digitsCount{};
    int othersCount{};

    void stepVowelsCount();
    void stepConsonantsCount();
    void stepDigitsCount();
    void stepOthersCount();

    bool isVowel(const char& character) const;
};

