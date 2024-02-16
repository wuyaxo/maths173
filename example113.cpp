//
// Created by David on 9/25/23.
//
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

double sum(vector<double> nums) {
    double total = 0.0;
    for (int i = 0; i < nums.size(); ++i) {
        total = total + nums[i];
    }
    return total;
}

int main() {
    double array1[4] = {3.14, 0.98, 4.84, 3.73};
    vector<double> vector1;
    vector1.push_back(array1[0]);
    vector1.push_back(array1[1]);
    vector1.push_back(array1[2]);
    vector1.push_back(array1[3]);
    for (int i = 0; i < vector1.size(); ++i) {
        cout << "element[" << i << "]         " << vector1[i] << "\n";
    }

    cout << "Total is " << sum(vector1);
}