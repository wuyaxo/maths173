// David Wu
// SID: 900632036
// This project is my own work.
// Created by David on 9/11/23.
//

#include <iostream>

//declaration
double square(double x);

// test square calculation
int main() {
    std::cout << "The square of 4.5 is " << square(4.5) << std::endl;
}

//definition
double square(double x) {
    return x * x;
}