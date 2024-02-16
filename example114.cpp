//
// Created by David on 10/4/23.
//
#include <iostream>

int main() {
    char input;
    std::cin >> input;
    switch (input) {
        case 'y': case 'Y':
            std::cout << "It's yes.\n";
        case 'N': case 'n':
            std::cout << "It's no.\n";
        default:
            std::cout << "None.\n";
    }
}