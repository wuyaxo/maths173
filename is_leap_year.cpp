// David Wu
// SID: 900632036
// This project is my own work.
// Created by David on 10/2/23.
//

#include <iostream>

bool is_leap_year(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}


int main() {
    for (int i = 2023; i < 2105; ++i) {
        std::cout << i;
        if (is_leap_year(i)) {
            std::cout << "(leap year)," << std::endl;
        } else {
            std::cout << "(not a leap year)," << std::endl;
        }
    }
}