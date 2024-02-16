// David Wu
// SID: 900632036
// This program is my own work.
// Created by David on 10/23/23.
//

#include "spellcheck.h"
#include "levenshtein.h"
#include <vector>
#include <utility>
#include <algorithm>
#include <iostream>

std::vector<std::string> suggested_corrections(const std::string &word,
                                               std::vector<std::string> &dictionary_words,
                                               int n) {
    // compute lev distant all words in dictionary and return them with vector<pairs<int, string>>
    std::vector<std::string> result_vector;
    std::vector<std::pair<int, std::string> > sort_vector;

    for (auto it: dictionary_words) {
        int n = levenshtein(word, it);
//        std::cout << n << "," << it << "\n";
        std::pair<int, std::string> p(n, it);
        if (it.size() > 0) {
            sort_vector.push_back(p);
        }
    }

    //sort results and return vector
    std::sort(sort_vector.begin(), sort_vector.end());
    for (int i = 0; i < n - 1; ++i) {
        result_vector.push_back(sort_vector[i].second);
//        std::cout << "show sort:" << n << "," << sort_vector[i].second << "\n";
    }
    return result_vector;

}