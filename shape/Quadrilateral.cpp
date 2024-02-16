// David Wu
// SID: 900632036
// This program is my own work.
// Created by David on 11/16/23.
//

#include "Quadrilateral.h"

Quadrilateral::Quadrilateral(double l, double w) : length(l), width(w) {

}

double Quadrilateral::area() const {
    return length * width;
}

double Quadrilateral::perimeter() const {
    return 2.0 * (length + width);
}