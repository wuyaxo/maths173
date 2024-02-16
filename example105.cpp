//
// Created by David on 9/18/23.
//
#include <iostream>

bool is_digit(char c);

int main() {
    char ch;
    std::cout << "Please enter a character:";
    std::cin >> ch;
    if (is_digit(ch)) {
        std::cout << ch << " is a digit." << std::endl;
    } else {
        std::cout << ch << " is NOT a digit." << std::endl;
    }
}

bool is_digit(char c) {
    bool result = false;
    if (c >= '0' && c <= '9') {
        result = true;
    }
    return result;
}