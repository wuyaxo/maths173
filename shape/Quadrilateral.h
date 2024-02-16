// David Wu
// SID: 900632036
// This program is my own work.
// Created by David on 11/16/23.
//
#pragma Once
#ifndef SHAPE_QUADRILATERAL_H
#define SHAPE_QUADRILATERAL_H

class Quadrilateral {
public:
    Quadrilateral(double l, double w);

    double area() const;

    double perimeter() const;

protected:
    double length;
    double width;
};

#endif //SHAPE_QUADRILATERAL_H
