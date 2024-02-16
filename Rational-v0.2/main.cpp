#include "Rational.h"
#include <iostream>


int main() {
    Rational x(1, 2), y(1, 4), a(1, 2), b(1, 4);
    x += y;
    std::cout << "x+=y=" << x << ' ' << y << std::endl; // 3/4 1/4
    x = a, y = b;
    x -= y;
    std::cout << "x-=y=" << x << std::endl; //1/4
    x = a, y = b;
    x *= y;
    std::cout << "x*=y=" << x << std::endl; // 1/8
    x = a, y = b;
    x /= y;
    std::cout << "x/=y=" << x << std::endl; // 2/1

    //
    x = a, y = b;
    std::cout << "x + y = " << x + y << std::endl; // 1/1
    x = a, y = b;
    std::cout << "x - y = " << x - y << std::endl; // 1/4
    x = a, y = b;
    std::cout << "x * y = " << x * y << std::endl; // 1/8
    x = a, y = b;
    std::cout << "x / y = " << x / y << std::endl; // 2/1
    x = a, y = b;
    std::cout << "x + y + a + b= " << x +  y + a +b << std::endl; //
}

