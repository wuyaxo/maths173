// A program to determine if you can drive
// Created by David on 9/13/23.
//
#include <iostream>

int main() {
    //input prompt
    std::cout << "How old are you? :";

    // define const
    const int CONST_ZERO = 0;
    const int CONST_LEGAL_AGE_LIMIT = 16;

    // define variable
    int age;

    // interact with users
    std::cin >> age;

    //program logic
    if (age < CONST_ZERO) {
        std::cout << "Illegal input!" << std::endl;
        return -1;
    } else if (age >= CONST_LEGAL_AGE_LIMIT) {
        std::cout << "You are eligible to get a driving license." << std::endl;
    } else {
        std::cout << "You are NOT eligible to get a driving license." << std::endl;
    }
    return 0;
}