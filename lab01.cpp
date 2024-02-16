// David Wu
// SID: 900632036
// This project is my own work.
// Created by David on 9/6/23.
#include <iostream>
#include <cmath> //For PI

int main() {
    double radius, area;
    std::cout << "Enter the radius of a circle. ";
    std::cin >> radius;
    area = acos(-1) * radius * radius;
    std::cout << "The area of a circle with radius " << radius << " is " << area << ".\n";
    return 0;
}