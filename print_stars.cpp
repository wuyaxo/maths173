// David Wu
// SID: 900632036
// This project is my own work.
// Created by David on 9/20/23.
//
#include <iostream>

//define a recursive function
void print_stars(int n) {
    // exclude negative numbers
    if (n <= 0) {
        return;
    } else {
        std::cout << "*";
        print_stars(--n);
    }
}

int main() {
    //test
    std::cout << "Print a row of n asterisks n=";
    int cnt;
    std::cin >> cnt;
    print_stars(cnt);
    return 0;
}