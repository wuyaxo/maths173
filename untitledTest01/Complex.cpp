//
// Created by David on 11/27/23.
//

#include "Complex.h"
#include <iostream>

using namespace std;

Complex::Complex() {
    a = 0.0;
    b = 0.0;
}

Complex::Complex(double i, double j) : a(i), b(j) {

}

Complex::Complex(const Complex &c) {
    a = c.a;
    b = c.b;
}


Complex::~Complex() = default;

Complex &Complex::operator=(const Complex &c) {
    a = c.a;
    b = c.b;
    return *this;
}

Complex &Complex::operator++() {
    a++;
    b++;
    return *this;
}

Complex &Complex::operator++(int) {
    return ++*this;
}

Complex &Complex::operator+=(const Complex &c) {
    a += c.a;
    b += c.b;
    return *this;
}

Complex &Complex::operator-=(const Complex &c) {
    a -= c.a;
    b -= c.b;
    return *this;
}

Complex operator+(const Complex &c1, const Complex &c2) {
    Complex r(c1);
    r += c2;
    return r;

}

Complex operator-(const Complex &c1, const Complex &c2) {
    Complex r(c1);
    r -= c2;
    return r;

}

void Complex::display() const {
    cout << a << "+" << b << "i" << "\n";
}