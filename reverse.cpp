// David Wu
// SID: 900632036
// This project is my own work.
// Created by David on 9/27/23.
//
#include <iostream>
#include <string>

// defined function
std::string reverse(const std::string &str) {
    std::string reverse_string;
    for (int i = 0; i < str.size(); ++i) {
        reverse_string += str[str.size() - i - 1];
    }
    return reverse_string;
}

int main() {
    const std::string TEST_STRING = "abc d";
    std::cout << "The original string is:" << (TEST_STRING) << std::endl;
    std::cout << "The reversed string is:" << reverse(TEST_STRING);
}