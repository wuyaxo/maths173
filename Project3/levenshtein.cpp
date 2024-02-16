//
// David Wu
// SID: 900632036
//This program is my own work.
// Created by David on 10/23/23.
//

#include "levenshtein.h"
#include <iostream>


int min(int *nums, const int size) {
    int m = nums[0];
    for (int i = 0; i < size; ++i) {
        if (nums[i] < m) {
            m = nums[i];
        }
    }
    return m;
}

int levenshtein(const std::string &a, const std::string &b) {
//    std::cout << "a:" << a << ",b:" << b << std::endl;
    // (1) a. size(), if b. size() is 0,
    if (b.size() == 0) {
        return a.size();
        // (2) b. size(), if a. size() is 0,
    } else if (a.size() == 0) {
        return b.size();
        // 3) lev(a′, b′) if a[0] equals b[0], where a′ and b′ are the strings
        //   a and b with their first characters removed, respectively,
    } else if (a[0] == b[0]) {
        return levenshtein(a.substr(1, a.size() - 1), b.substr(1, a.size() - 1));
        //4) 1 + the smallest of lev(a′, b), lev(a, b′) and lev(a′, b′)
    } else {
        int lev_array[3];
        //lev(a′, b)
        lev_array[0] = levenshtein(a.substr(1, a.size() - 1), b);
        //ev(a, b′)
        lev_array[1] = levenshtein(a, b.substr(1, b.size() - 1));
        //ev(a′, b′)
        lev_array[2] = levenshtein(a.substr(1, a.size() - 1), b.substr(1, b.size() - 1));
        return 1 + min(lev_array, 3);
    }
}

//int main() {
////    std::cout << "Begin\n";
//    std::cout << levenshtein("Bewl", "Bbqa") << std::endl;
////    std::cout << "End";
//}