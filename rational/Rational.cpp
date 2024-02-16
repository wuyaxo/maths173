//
// Created by David on 11/1/23.
//

#include "Rational.h"

Rational add(const Rational &x, const Rational &y) {
    return Rational{x.num * y.den + y.num * x.den, x.den * y.den};
}

Rational minus(const Rational &x, const Rational &y) {
    return Rational{x.num * y.den - y.num * x.den, x.den * y.den};
}

Rational multiply(const Rational &x, const Rational &y) {
    return Rational{x.num * y.num, x.den * y.den};
}

Rational divide(const Rational &x, const Rational &y) {
    return Rational{x.num * y.den, x.den * y.num};
}
