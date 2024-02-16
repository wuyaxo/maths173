//
// Created by David on 9/18/23.
//
#include <iostream>

bool is_lowercase(char c);

int main() {
    char ch;
    std::cout << "Please enter a character:";
    std::cin >> ch;
    if (is_lowercase(ch)) {
        std::cout << ch << " is a lowercase character" << std::endl;
    } else {
        std::cout << ch << " is not a lowercase character" << std::endl;
    }

}

bool is_lowercase(char c) {
    if (c >= 'a' && c <= 'z') {
        return true;
    } else {
        return false;
    }
}