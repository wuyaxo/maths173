// David Wu
// SID: 900632036
// This program is my own work.
#include <iostream>

// define struct
struct point {
    double x, y;
};

struct triangle {
    point A, B, C;
};


// define function
double distance(const point &P, const point &Q) {
    double xDiff = P.x - Q.x;
    double yDiff = P.y - Q.y;
    return sqrt(pow(xDiff, 2.0) + pow(yDiff, 2.0));
}

double area(const triangle &T) {
    double a = distance(T.B, T.C);
    double b = distance(T.A, T.C);
    double c = distance(T.B, T.A);
    double s = 0.5 * (a + b + c);
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

double perimeter(const triangle &T) {
    double a = distance(T.B, T.C);
    double b = distance(T.A, T.C);
    double c = distance(T.B, T.A);
    return a + b + c;
}

int main() {
    point pointA = {0, 0};
    point pointB = {3, 0};
    point pointC = {3, 4};

    triangle triangleT = {pointA, pointB, pointC};

    std::cout << "The area of triangle T approximately is " << area(triangleT) << std::endl;
    std::cout << "The perimeter of triangle T is " << perimeter(triangleT) << std::endl;
    return 0;
}
