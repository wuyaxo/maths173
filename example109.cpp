//Recursive function
// Created by David on 9/20/23.
//
#include <iostream>

void countdown(int n);

void countdown(int n) { // NOLINT(*-no-recursion)
    if (n == 0) {
        std::cout << "End:" << n << "\n";
        return;
    } else {
        std::cout << "Count:" << n << "\n";
        countdown(n - 1);
    }
}

int main() {
    std::cout << "Print a countdown for n=";
    int cnt;
    std::cin >> cnt;
    countdown(cnt);
    return 0;
}