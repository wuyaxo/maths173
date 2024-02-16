#include <iostream>
#include "square_matrix.h"

using namespace std;

int main() {

    square_matrix matrix1(5, {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5});
//    matrix1.display();
    square_matrix matrix2(3, {2, 3, 4, 6, 7, 8, 5, 6, 7});
//    matrix2.display();
//    square_matrix matrix3(5);
//    matrix3 = matrix1;
    square_matrix matrix3(3, {1, 2, 3, 1, 2, 3, 1, 2, 3});
    square_matrix matrix4(3, {3, 3, 3, 4, 4, 4, 5, 5, 5});
//    matrix3 = matrix1 + matrix2;
    square_matrix matrix5 = matrix3 * matrix4;
    matrix5.display();

    // small one to larger one
//    matrix1 = matrix2;
//    matrix1.display();
// small one to larger one
//    matrix2 = matrix1;
//    matrix2.display();

//    std::cout << matrix1.operator()(1, 2);
    return 0;
}
