// David Wu
// SID: 900632036
// This program is my own work.
// Created by David on 11/16/23.
//

#include "Rhombus.h"
#include "Quadrilateral.h"
#include <cmath>

Rhombus::Rhombus(double diagonal1, double diagonal2) : Quadrilateral::Quadrilateral(diagonal1, diagonal2) {};

double Rhombus::area() const { return length * width / 2; }

double Rhombus::perimeter() const { return 4.0 * sqrt((length / 2 * length / 2) + (width / 2 * width / 2)); }