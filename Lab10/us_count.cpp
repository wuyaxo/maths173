//
// Created by David on 10/9/23.
//

#include "us_count.h"

double us_count(int q = 0, int d = 0, int n = 0, int p = 0) {
    return q * 0.25 + d * 0.1 + n * 0.05 + p * 0.01;
}