// David Wu
// SID: 900632036
// This program is my own work.
// Load words from a dictionary file
#include "load_dictionary.h"
#include <fstream>
#include <iostream>

std::vector<std::string> load_dictionary(const std::string &filename) {
    std::ifstream infile(filename);
    if (!infile.is_open()) {
        std::cout << "Can not open file " << filename << ".\n";
        throw std::exception();
    }

    std::string word;
    std::vector<std::string> word_list;
    while (infile >> word) {
        word_list.push_back(word);
    }

    return word_list;
}

//int main() {
//    auto words = load_dictionary("dictionary.txt");
//    for (auto it: words) {
//        std::cout << it << "\n";
//    }
//}
