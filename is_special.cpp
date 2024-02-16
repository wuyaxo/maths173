// David Wu
// SID: 900632036
// This project is my own work.
// Created by David on 9/18/23.
//
#include <iostream>

// define functions
bool is_special(char c);

int main() {
    if (is_special('#')) {
        std::cout << "PASSED\n";
    } else {
        std::cout << "FAILED\n";
    }

    if (is_special('a') == false) {
        std::cout << "PASSED\n";
    } else {
        std::cout << "FAILED\n";
    }

    if (is_special('F') == false) {
        std::cout << "PASSED\n";
    } else {
        std::cout << "FAILED\n";
    }
    if (is_special('&')) {
        std::cout << "PASSED\n";
    } else {
        std::cout << "FAILED\n";
    }
}

//functions
bool is_special(char c) {
    bool result = true;
    if (c >= '0' && c <= '9') {
        result = false;
    }
    if (c >= 'A' && c <= 'Z') {
        result = false;
    }
    if (c >= 'a' && c <= 'z') {
        result = false;
    }
    return result;
}