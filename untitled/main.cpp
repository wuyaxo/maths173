#include <iostream>
#include <iomanip>
//#include "Totaler.cpp"
//#include "Complex.h"
#include "dataset.cpp"

int int_sqrt(int n) {
    int i = 0;
    while (i * i <= n) {
        ++i;
    }
    return i - 1;
}

int max3(const int a, const int b, const int c) {
    if (a > b) {
        return a > c ? a : c;
    } else {
        return b > c ? b : c;
    }
}

int gcd3(int a, int b, int c) {
    if (a == b && a == c) {
        return a;
    }
    if (a >= b && b >= c) {
        return gcd3(a - c, b, c);
    } else if (a >= b && a >= c && c >= b) {
        return gcd3(a - b, b, c);
    } else if (b >= a && a >= c) {
        return gcd3(a, b - c, c);
    } else if (b >= a && b >= c && c >= a) {
        return gcd3(a, b - a, c);
    } else if (c >= b && b >= a) {
        return gcd3(a, b, c - a);
    }
    return gcd3(a, b, c - b);
}

class TimeOfDay {
public:
    TimeOfDay(int h, int m, int ap) : hour(h), minute(m), ampm(ap) {}

    void print() const {
        std::cout << std::setfill('0') << std::setw(2) << hour
                  << ":" << std::setw(2) << minute;
        if (ampm == 0) std::cout << "AM";
        else std::cout << "PM";
    }

    void advance() {
        TimeOfDay newT(hour, minute, ampm);
        if (minute == 59) {
            ++newT.hour;
            newT.minute = 0;
        }
        if (newT.hour == 12 && newT.hour != hour) {
            newT.ampm = !ampm;
        }
        newT.print();
    }

    friend void advance(TimeOfDay &, int);

private:
    int hour, minute, ampm;
};

void advance(TimeOfDay &tod, int n) {
    TimeOfDay newT(tod);
    newT.minute += n;
    if (newT.minute >= 60) {
        newT.hour += newT.minute / 60;
        newT.minute = newT.minute % 60;
    }

    if (newT.hour >= 12 && newT.hour != tod.hour) {
        newT.hour = newT.hour % 12;
        newT.ampm = !tod.ampm;
    }
    newT.print();
}

int main() {
    int i = 1;
    i = i++;
    std::cout << "i=" << i << "\n";
//    std::cout << int_sqrt(10) << std::endl; // 3
//    std::cout << int_sqrt(80) << std::endl; // 8
//    std::cout << int_sqrt(0) << std::endl;  // 0
//    std::cout << int_sqrt(1) << std::endl;  // 1
//        std::cout << max3(5, 2, 8) << std::endl;  // 8
//        std::cout << max3(-1, 10, 3) << std::endl; // 10
//        std::cout << max3(7, 7, 7) << std::endl;   // 7
//    std::cout << gcd3(10, 25, 30) << std::endl; // 5
//    TimeOfDay t1 = TimeOfDay(11, 59, 0);
//    advance(t1, 61);
//    Totaler my_total; // my_total stores 0
//    my_total(3.5); // add 3.5 -- now it stores 3.5
//    my_total(-1.5); // add -1.5 -- now it stores 2.0
//    my_total(10.1); // add 10.1 -- now it stores 12.1
//    std::cout << my_total;

    dataset original;

    // Set some values in the original dataset
    original.setValue(0, 1.5);
    original.setValue(50, 3.7);

    // Display the original dataset
    std::cout << "Original dataset:" << std::endl;
    original.printData();

    // Create a copy using the copy constructor
    dataset copy = original;

    // Modify the copy
    copy.setValue(0, 9.8);

    // Display the original and the modified copy
    std::cout << "Original dataset:" << std::endl;
    original.printData();
    std::cout << "Modified copy:" << std::endl;
    copy.printData();
}
