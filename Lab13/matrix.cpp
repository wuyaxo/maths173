// David Wu
// SID: 900632036
// This program is my own work.
#include <iostream>


int main() {
    double left[] = {1, 2, 3, 4};
    double right[] = {3, 2, -1, 0};
    double result[4];
    // code to make result = left * right as matrices
    result[0] = left[0] * right[0] + left[1] * right[2];
    result[1] = left[0] * right[1] + left[1] * right[3];
    result[2] = left[2] * right[0] + left[3] * right[2];
    result[3] = left[2] * right[1] + left[3] * right[3];
    // print result
    std::cout << "[";
    for (int i = 0; i < sizeof(result) / sizeof(double); ++i) {
        std::cout << result[i];
        if (i < sizeof(result) / sizeof(double) - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;
}
