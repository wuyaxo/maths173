// David Wu
// SID: 900632036
// This project is my own work.
// Created by David on 10/4/23.
//
#include <iostream>

int main() {
    std::cout << "Are you (1) a duck, (2) a dog, (3) a cat, (4) a lion, or (5) something else?  "
              << "Enter 1, 2, 3, 4, or 5.\n";
    int option;
    std::cin >> option;
    switch (option) {
        case 1:
            std::cout << "Quack!";
            break;
        case 2:
            std::cout << "Woof!";
            break;
        case 3:
            std::cout << "Meow!";
            break;
        case 4:
            std::cout << "Roar!";
            break;
        default:
            std::cout << "I must me something out of this world!";
            break;
    }
}