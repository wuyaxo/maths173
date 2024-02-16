//
// Created by David on 9/20/23.
//
#include <iostream>

int sum(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sum(n - 1);
    }
}

int main() {
    std::cout << "sum 1 to 10:" << sum(10) << std::endl;
    std::cout << "sum 1 to 5:" << sum(5) << std::endl;
    return 0;
}