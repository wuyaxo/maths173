//Recursive function
// Created by David on 9/20/23.
//
#include <iostream>

void quack(int n) {
    if (n == 0) {
        return;
    } else {
        std::cout << "Quack! " << n - (n - 1) << " times\n";
        quack(n - 1);
    }
}

int main() {
    quack(5);
    return 0;
}