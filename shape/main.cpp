#include "Rectangle.h"
#include "Square.h"
#include "Rhombus.h"
#include <iostream>

int main() {
    Rectangle r(3.0, 4.0);
    std::cout << "area of rectangle is " << r.area()
              << " perimeter is " << r.perimeter()
              << ".\n";

    Square s(2.0);
    std::cout << "area of square is " << s.area()
              << " perimeter is " << s.perimeter()
              << ".\n";

    Rhombus rho(20.0, 48.0);
    std::cout << "area of rhombus is " << rho.area()
              << " perimeter is " << rho.perimeter()
              << ".\n";
}