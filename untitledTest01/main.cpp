#include <iostream>
//#include "Complex.h"
#include <fstream>
#include <sstream>


int main() {
//    Complex a(1, 2);
//    a.display();
//    Complex b(a);
//    ++b;
//    b.display();
//    Complex c;
//    c = b - a;
//    c.display();
    std::ifstream infile("file.txt");
    if (!infile.is_open()) {
        return 100;
    }
    std::string line, segment;
    while (std::getline(infile, line)) {
        std::istringstream instring(line);
        while (instring >> segment) {
            std::cout << segment << "\n";
        }
    }
    infile.close();
    return 0;
}
