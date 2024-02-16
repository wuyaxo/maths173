//
// Created by David on 10/4/23.
//
#include <iostream>

double myseq(int n) {
    if (n == 1) {
        return 1.0;
    } else if (n == 2) {
        return 2.5;
    } else {
        return myseq(n - 1) * 2 - myseq(n - 2);
    }
}

int main() {
    int n;
    std::cin >> n;
    std::cout << "answer is :" << myseq(n);
}