// David Wu
// SID: 900632036
// This project is my own work.
// Created by David on 9/13/23.
//
#include <iostream>

int main() {
    void judge_height(double height);
    //input prompt
    std::cout << "Please enter your height(inches):";
    // define variable
    double height;
    // interact with users
    std::cin >> height;
    judge_height(height);
}

void judge_height(double height) {
    // define const
    const double CONST_STAND_HEIGHT = 60.0;
    if (height >= CONST_STAND_HEIGHT) {
        std::cout << "You are very tall" << std::endl;
    }
}