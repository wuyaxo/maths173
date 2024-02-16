// David Wu
// SID: 900632036
// This program is my own work.
// Created by David on 11/16/23.
//

#include "square_matrix.h"
#include <iostream>

square_matrix::square_matrix(int i) : size(i) {
    data = new double[i * i];
}

square_matrix::square_matrix(int i, const std::initializer_list<double> &list) : size(i) {
    data = new double[i * i];
    int num = 0;
    for (auto liter = list.begin(); liter != list.end(); ++liter) {
        data[num] = *liter;
        ++num;
    }
    for (auto item: list) {
        data[num] = item;
    }
}

square_matrix::square_matrix(const square_matrix &matrix) : size(matrix.size) {
    data = new double[size * size];
    for (int i = 0; i < size * size; ++i) {
        data[i] = matrix.data[i];
    }
}


square_matrix::~square_matrix() {
    delete[] data;
}

square_matrix &square_matrix::operator=(const square_matrix &matrix) {

    size = matrix.size;
    data = new double[matrix.size * matrix.size];
    for (int i = 0; i < size * size; ++i) {
        data[i] = matrix.data[i];
    }
    return *this;
}

double &square_matrix::operator()(int i, int j) const {
    return data[i * size + j];
}

square_matrix &square_matrix::operator+=(const square_matrix &matrix) {
    if (size != matrix.size) {
        throw std::invalid_argument("Square matrix sizes are not equal");
    }
    for (int i = 0; i < size * size; ++i) {
        data[i] += matrix.data[i];
    }
    return *this;
};

square_matrix &square_matrix::operator-=(const square_matrix &matrix) {
    if (size != matrix.size) {
        throw std::invalid_argument("Square matrix sizes are not equal");
    }

    for (int i = 0; i < size * size; ++i) {
        data[i] -= matrix.data[i];
    }
    return *this;
};

square_matrix &square_matrix::operator*=(const square_matrix &matrix) {
    if (size != matrix.size) {
        throw std::invalid_argument("Square matrix sizes are not equal");
    }
    double *r_data = new double[matrix.size * matrix.size];

    for (int i = 0; i < size; ++i) {
        for (int m = 0; m < size; ++m) {
            for (int n = 0; n < size; ++n) {
                r_data[i * size + m] += data[i * size + n] * matrix.data[n * size + m];
            }
        }
    }
    delete[] data;
    data = r_data;
    return *this;
};


int square_matrix::num_rows() const { return size; }

int square_matrix::num_cols() const { return size; }


square_matrix operator+(const square_matrix &matrix1, const square_matrix &matrix2) {
    square_matrix result = matrix1;
    result += matrix2;
    return result;
}

square_matrix operator-(const square_matrix &matrix1, const square_matrix &matrix2) {
    square_matrix result = matrix1;
    result -= matrix2;
    return result;
}

square_matrix operator*(const square_matrix &matrix1, const square_matrix &matrix2) {
    square_matrix result = matrix1;
    result *= matrix2;
    return result;
}


void square_matrix::display() {
    std::cout << "-------------" << std::endl;
    for (int i = 0; i < size * size; ++i) {
        if ((i + 1) % size == 0) {
            std::cout << data[i] << "\n";
        } else {
            std::cout << data[i] << ",";
        }
    }
}