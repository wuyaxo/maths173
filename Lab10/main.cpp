//
// Created by David on 10/9/23.
//
#include "us_count.cpp"
#include <iostream>

int main() {
    std::cout << us_count() << std::endl; //  0.00
    std::cout << us_count(3) << std::endl; // get 0.75
    std::cout << us_count(3, 2, 3) << std::endl; // get 1.10
    std::cout << us_count(3, 2, 3, 7) << std::endl; // get 1.17
}
