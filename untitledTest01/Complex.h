//
// Created by David on 11/27/23.
//
#pragma Once
#ifndef UNTITLEDTEST01_COMPLEX_H

class Complex {
private:
    double a{}, b{};
public:
    Complex();

    Complex(double, double);

    Complex(const Complex &);

    ~Complex();

    Complex &operator=(const Complex &);

    Complex &operator++();

    Complex &operator++(int);

    Complex &operator+=(const Complex &);

    Complex &operator-=(const Complex &);

    void display() const;

};

Complex operator+(const Complex &, const Complex &);

Complex operator-(const Complex &, const Complex &);

#define UNTITLEDTEST01_COMPLEX_H

#endif //UNTITLEDTEST01_COMPLEX_H
