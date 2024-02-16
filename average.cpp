// David Wu
// SID: 900632036
// This project is my own work.
// Created by David on 9/25/23.
//

#include <iostream>
#include <vector>


double average(vector<double> nums) {
    double total = 0.0;
    for (int i = 0; i < nums.size(); ++i) {
        total = total + nums[i];
    }
    return total / nums.size();
}

int main() {
    std::vector<double> data = {3.14, 0.98, 4.84, 3.73};
    for (int i = 0; i < data.size(); ++i) {
        std::cout << "element[" << i << "]         " << data[i] << "\n";
    }
    std::cout << "The average is " << average(data) << std::endl;
}