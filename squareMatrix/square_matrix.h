// David Wu
// SID: 900632036
// This program is my own work.
// Created by David on 11/16/23.
//
#pragma Once

#include <initializer_list>

#ifndef SQUAREMATRIX_SQUARE_MATRIX_H
#define SQUAREMATRIX_SQUARE_MATRIX_H

class square_matrix {
public:
    square_matrix(int);

    square_matrix(int, const std::initializer_list<double> &);

    square_matrix(const square_matrix &);

    ~square_matrix();

    square_matrix &operator=(const square_matrix &);

    double &operator()(int i, int j) const;

    square_matrix &operator+=(const square_matrix &);

    square_matrix &operator-=(const square_matrix &);

    square_matrix &operator*=(const square_matrix &);

    int num_rows() const;

    int num_cols() const;

    void display();

private:
    int size;
    double *data = nullptr;
};


square_matrix operator+(const square_matrix &, const square_matrix &);

square_matrix operator-(const square_matrix &, const square_matrix &);

square_matrix operator*(const square_matrix &, const square_matrix &);

#endif //SQUAREMATRIX_SQUARE_MATRIX_H
