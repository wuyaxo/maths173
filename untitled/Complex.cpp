// Online C++ compiler to run C++ program online
#include <iostream>
#include "Complex.h"

Complex::Complex() {
    std::cout << "default constructor\n";
};

Complex::Complex(double i, double j) : a(i), b(j) {
    std::cout << "constructor with parameters\n";
};

Complex::~Complex() {
    std::cout << "destructor\n";
};

Complex::Complex(const Complex &c) : a(c.a), b(c.b) {
    std::cout << "copy constructor\n";
}

Complex &Complex::operator=(const Complex &c) {
    a = c.a;
    b = c.b;
    std::cout << "copy assignment\n";
    return *this;
}

Complex &Complex::operator+=(const Complex &c) {
    a += c.a;
    b += c.b;
    return *this;
};

Complex &Complex::operator++() {
    a++;
    b++;
    return *this;
};

void Complex::display() {
    if (b >= 0) {
        std::cout << a << "+" << b << "i" << std::endl;
    } else {
        std::cout << a << b << "i" << std::endl;;
    }
}

