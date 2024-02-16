//
// Created by David on 11/1/23.
//
#pragma Once
#ifndef RATIONAL_RATIONAL_H
#define RATIONAL_RATIONAL_H
struct Rational {
    int num, den;
};
Rational add(const Rational &x, const Rational &y);
Rational minus(const Rational &x, const Rational &y);
Rational multiply(const Rational &x, const Rational &y);
Rational divide(const Rational &x, const Rational &y);
#endif //RATIONAL_RATIONAL_H
