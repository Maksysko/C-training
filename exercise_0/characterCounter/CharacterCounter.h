//
// Created by emyrmak on 7/3/2019.
//

#ifndef CHARACTERCOUNTERAPP_CHARACTERCOUNTER_H
#define CHARACTERCOUNTERAPP_CHARACTERCOUNTER_H

#include <string>

using namespace std;


class CharacterCounter {

    private:
        string const VOWELS = "aeiouy";
        int vowelsCount;
        int consonantsCount;
        int digitsCount;
        int othersCount;

        void stepVowelsCount();
        void stepConsonantsCount();
        void stepDigitsCount();
        void stepOthersCount();

        bool isVowel(char character);
    public:
        CharacterCounter();

        void checkCharacter(string word);
        void getCounts();

};


#endif //CHARACTERCOUNTERAPP_CHARACTERCOUNTER_H
