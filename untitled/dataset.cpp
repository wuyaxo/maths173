//
// Created by David on 12/9/23.
//
#include "iostream"

class dataset {
public:
    dataset() { data = new double[100]; }

    dataset(const dataset &d) {
        data = new double[100];
        for (int i = 0; i < 100; ++i) {
            data[i] = d.data[i];
        }
    };

    ~dataset() { delete[] data; }

    dataset &operator=(const dataset &);

    void printData() const {
        for (int i = 0; i < 100; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }

    // Function to set a specific value in the data array
    void setValue(int index, double value) {
        if (index >= 0 && index < 100) {
            data[index] = value;
        }
    }

private:
    double *data = nullptr;
};