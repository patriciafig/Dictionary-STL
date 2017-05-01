//
//  dictionary.h
//  Homework#5
//
//  Created by Patricia Figueroa on 2/19/16.
//  Status: Compiles and all requirements met

#ifndef dictionary_h
#define dictionary_h
#include <string>
#include <list>
#include <iostream>

using namespace std;
typedef string wordType;

class dictionary
{
public:
    //typedef string wordType;
    dictionary();
    wordType getWord();
    void setWord(wordType _word);
    friend bool operator <(const dictionary& first, const dictionary& second);
private:
    wordType word;
};

/*******************************/
int searchForward(list<dictionary> &wordList,wordType &findString);

int searchBackward(list<dictionary> &wordList,wordType &findString);

void revPrintList(ostream& output, list<dictionary> &wordList);

bool comp(dictionary& first, dictionary& second);


#endif /* dictionary_h */
