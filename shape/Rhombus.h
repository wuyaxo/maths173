//
// Created by David on 11/16/23.
// David Wu
// SID: 900632036
// This program is my own work.
#pragma Once

#include "Quadrilateral.h"

#ifndef SHAPE_RHOMBUS_H
#define SHAPE_RHOMBUS_H

class Rhombus : public Quadrilateral {
public:
    Rhombus(double diagonal1, double diagonal2);

    double area() const;

    double perimeter() const;
};


#endif //SHAPE_RHOMBUS_H
