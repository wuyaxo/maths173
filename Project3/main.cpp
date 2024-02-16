// David Wu
// SID: 900632036
// This program is my own work.
// Created by David on 10/23/23.
//
#include <iostream>
#include <string>
#include "load_dictionary.h"
#include "spellcheck.h"


int main() {
    auto words = load_dictionary("../dictionary.txt");
    char response = 'y';
    do {
        std::cout << "Enter a word to check. ";
        std::string word;
        std::cin >> word;
        std::cout << "How many suggestions would you like? ";
        int n;
        std::cin >> n;
        std::cout << "Here are your spelling suggestions:\n";
        auto corrections = suggested_corrections(word, words, n);
        for (std::string w: corrections) {
            std::cout << w << "\n";
        }
        std::cout << "Try again? (y/n) ";
        std::cin >> response;
    } while (response == 'y' or response == 'Y');
}