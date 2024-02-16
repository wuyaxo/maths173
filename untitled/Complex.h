//
// Created by David on 12/9/23.
//

#pragma Onece
#ifndef UNTITLED_COMPLEX_H

#define UNTITLED_COMPLEX_H
class Complex{
private:
    double a,b;
public:
    Complex();
    Complex(double, double);
    ~Complex();
    Complex(const Complex&);
    Complex& operator=(const Complex&);
    Complex& operator+=(const Complex&);
    Complex& operator++();
    void display();

};
#endif //UNTITLED_COMPLEX_H
