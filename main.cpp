//
//  main.cpp
//  Homework#5
//
//  Created by Patricia Figueroa on 2/19/16.


#include <iostream>
#include <fstream> // for file stream , creates files, writes data on them,and reads data from the files
#include <string> //for the string class wordType declared in dictionary.h
#include "dictionary.h"
using namespace std;

int main() {
    
    FILE *fp = freopen("dictionary.txt", "r", stdin);
    
    // fills in the word list from file
    list<dictionary> listofWords;
    wordType word;
    while (cin >> word) {
        // creates new object for dictionary
        dictionary* newDictionaryObj = new dictionary();
        newDictionaryObj -> setWord(word);
        
        // this will add to list
        listofWords.push_back(*newDictionaryObj);
    }
    fclose(fp);
    
    // sort the list
    listofWords.sort();
    
    // search word from the found words file
    ifstream infile;
    infile.open("findwords.txt", ifstream :: in);
    //infile.open (ifstream::in);
    while (infile >> word) {
        int forwardCount = searchForward(listofWords, word);
        int backwardCount = searchBackward(listofWords, word);
        
        // if not found in the previous search
        // it will be added to end of the list and the list will sort again
       if (forwardCount == -1 || backwardCount == -1) {
            cout << "sorry, the word was not found but it will be added to the list" << endl;
            
            // this creates new dictionary object
            dictionary* newDictionaryObj = new dictionary();
            newDictionaryObj -> setWord(word);
            
            listofWords.push_back(*newDictionaryObj);
            listofWords.sort();
        } else {
            cout << "please enter a word : " << word << endl;
            cout << "Forward step: " << forwardCount << endl;
            cout << "Backward step: " << backwardCount << endl;
            cout << endl;
        }
    }
    infile.close();
    
    fp = freopen("revsorted.txt", "w", stdout);
    revPrintList(cout, listofWords);
    fclose(fp);
    return 0;
}
