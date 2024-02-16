//
// Created by David on 11/6/23.
//

#include "Rational.h"
#include <ostream>
#include "gcd.h"

void Rational::reduce() {
    int g = gcd(num, den);
    num /= g;
    den /= g;
}

Rational::Rational(int n, int d) {
    num = n, den = d;
}

Rational& Rational::operator+=(const Rational &a) {
    int x = num, y = den, w = a.num, z = a.den;
    num = x * z + y * w;
    den = y * z;
    reduce();
    return *this;
}

Rational& Rational::operator-=(const Rational& a) {
    int x = num, y = den, w = a.num, z = a.den;
    num = x * z - y * w;
    den = y * z;
    reduce();
    return *this;
}

Rational& Rational::operator*=(const Rational& a) {
    int x = num, y = den, w = a.num, z = a.den;
    num = x * w;
    den = y * z;
    reduce();
    return *this;
}

Rational& Rational::operator/=(const Rational& a) {
    int x = num, y = den, w = a.num, z = a.den;
    num = x * z;
    den = y * w;
    reduce();
    return *this;
}


Rational operator+(const Rational& r, const Rational& s) {
    Rational result = r;
    result += s;
    return result;
}

Rational operator-(const Rational& r, const Rational& s) {
    Rational result = r;
    result -= s;
    return result;
}

Rational operator*(const Rational& r, const Rational& s) {
    Rational result = r;
    result *= s;
    return result;
}

Rational operator/(const Rational& r, const Rational& s) {
    Rational result = r;
    result /= s;
    return result;
}

std::ostream& operator<<(std::ostream& out, const Rational& a) {
    out << a.num << "/" << a.den;
    return out;
}