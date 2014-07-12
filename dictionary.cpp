/*-------------dictionary.cpp-------------------------------------------------//
*
*              Charles the Infinite Monkey Poet (chimp)
*
* The purpose of this file is to parse the output of the typwriter into 
* appropriate words based on another file, "dictionary.dat." I have yet to
* determine the optimum format for this file.
*
* I am working on it!
*
*-----------------------------------------------------------------------------*/

#include "dictionary.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

void read_dict(int window, vector<string> possibilities){
    int i = 0;
    ifstream dictionary;
    dictionary.open("dictionary.dat");
    while(i != dictionary.eof()){
        std::string words;
        getline(dictionary,words);
        if (words.size() <= window){
            possibilities.push_back(words);}}
    dictionary.close();
}
            
void scan_possibilities(vector<string> possibilities, string chimp_word){
    int i = 0;
    for(i; i<possibilities.size(); i++){
        if (possibilities[i] == chimp_word){
            cout << chimp_word << endl;}
    }
} 

void window_check(int window){
    window = 0;
    int i = 0;
    string word;
    ifstream dictionary;
    dictionary.open("dictionary.dat");
    cout << "sifting through dictionary" <<  endl;
    while(getline(dictionary, word, '\n')){
        if(word.size() > window){window = word.size();};
    }
dictionary.close();
cout << window << endl;}
