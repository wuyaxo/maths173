//
// Created by David on 12/9/23.
//
#include <iostream>

class Totaler {
public:
    Totaler() : value(0.0) {};

    Totaler(double d) {
        if (value == 0.0)
            value += d;
    };

    void operator()(double d) {
        value += d;
    }

    friend std::ostream &operator<<(std::ostream &os, const Totaler &t) {
        os << t.value;
        return os;
    };

private:
    double value;
};