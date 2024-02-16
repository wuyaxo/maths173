//Recursive function
// Created by David on 9/20/23.
//
#include <iostream>
using namespace std;

int main() {
    int a = 21;
    int c;

    // a 的值在赋值之前不会自增
    c = a++;
    cout << "Line 1 - Value of a++ is :" << c << endl;

    // 表达式计算之后，a 的值增加 1
    cout << "Line 2 - Value of a is :" << a << endl;

    // a 的值在赋值之前自增
    c = ++a;
    cout << "Line 3 - Value of ++a is  :" << c << endl;
    return 0;
}