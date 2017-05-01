//
//  dictionary.cpp
//  Homework#5
//
//  Created by Patricia Figueroa on 2/19/16.
//

#include "dictionary.h"
using namespace std; // for iostream

dictionary::dictionary()  //call to the class dictionary
{

}

wordType dictionary::getWord() //dictionary.h
{
    return word;
}

void dictionary::setWord(wordType newWord) {
    word = newWord;
}

int searchForward(list<dictionary> &listofWords, wordType &findString) {
    
    // forward iterator
    list<dictionary>::iterator forward_it;
    
    bool stringFound = false;
    int forCount = 0;
    for(forward_it = listofWords.begin(); forward_it != listofWords.end(); ++forward_it) {
        // increments the count for the current previous step taken
        forCount += 1;
        
        // if word found that breaks out of the loop; alternate case
        if (forward_it -> getWord() == findString) {
            stringFound = true;
            break;
        }
    }
    
    if (stringFound) return forCount;
    else return -1;
}

int searchBackward(list<dictionary> &wordList, wordType &findString) {
    
    // reverse iterator 
    list<dictionary>::reverse_iterator reverse_it;
    
    bool stringFound = false;
    int forCount = 0;
    for (reverse_it = wordList.rbegin(); reverse_it != wordList.rend(); ++reverse_it) {
        // increment the count for the current step taken
        forCount += 1;
        
        // if we found the word it will break out of the loop
        if (reverse_it -> getWord() == findString) {
            stringFound = true;
            break;
        }
    }
    
    if (stringFound) return forCount;
    else return -1;
}

void revPrintList(ostream& output, list<dictionary> &wordList) {
    
    // reverse iterator
    list<dictionary>::reverse_iterator reverse_it;
    
    // prints each word
    for (reverse_it = wordList.rbegin(); reverse_it != wordList.rend(); ++reverse_it) {
        output << reverse_it -> getWord() << endl;
    }
}

bool comp(dictionary& first, dictionary& second) {
    return first.getWord() < second.getWord();
}

bool operator <(const dictionary& first, const dictionary& second) {
    return first.word < second.word;
}
