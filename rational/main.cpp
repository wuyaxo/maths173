#include <iostream>
#include "Rational.h"

void print(const Rational &r) {
    std::cout << r.num << "/" << r.den;
}

int main() {
    Rational a{1, 3}, b{2, 3};
    std::cout << "a+b=";
    Rational r1 = add(a, b);
    print(r1);
    std::cout << std::endl;

    std::cout << "a-b=";
    Rational r2 = minus(a, b);
    print(r2);
    std::cout << std::endl;

    std::cout << "a*b=";
    Rational r3 = add(a, b);
    print(r3);
    std::cout << std::endl;

    std::cout << "a/b=";
    Rational r4 = add(a, b);
    print(r4);
    std::cout << std::endl;
    return 0;
}
