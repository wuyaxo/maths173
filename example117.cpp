//
// Created by David on 10/11/23.
//
#include <iostream>
#include <vector>

//double average(const std::vector<int> &nums) {
//    double sum = 0.0;
//    for (int num: nums) {
//        sum += num;
//    }
//    return sum / nums.size();
//}

int main() {
//    std::vector<int> vector1;
//    vector1.push_back(11);
//    vector1.push_back(23);
//    vector1.push_back(1);
//    std::cout << average(vector1);
//    int x = 2;
//    int& y = x;
//    x += 5;
//    y *= 2;
//    y -= x;
//    std::cout << x << "," << y << std::endl;

    int i = 1;
    int sum = 0;
    while (i > 0) {
        int n = i / 10;
        sum += i - n * 10;
        i = i / 10;
    }

    std::cout << sum;
}
