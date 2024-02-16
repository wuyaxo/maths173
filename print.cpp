//
// Created by David on 8/30/23.
//
#include <iostream>
#include <cmath>

int plus_one(int x) {
    return x + 1;
}

double sum(double x, double y);

int main() {
//    int num;
//    std:: cout << "input num: ";
//    std::cin >> num;
    std::cout << sum(2.5, 1.7) << std::endl;
    return 0;
}

double sum(double x, double y) {
    double total = x + y;
    return total;
}