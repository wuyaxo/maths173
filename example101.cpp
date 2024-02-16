//
// Created by David on 9/11/23.
//

#include <iostream>

double sum(double a, double b);

int main() {
    std::cout << sum(2.9, 1.7) << std::endl;
    return 0;
}

double sum(double a, double b) {
    return a + b;
}