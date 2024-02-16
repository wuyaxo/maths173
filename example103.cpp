//
// Created by David on 9/13/23.
//
#include <iostream>

int main() {
    char letter_grade(double score);
    //input prompt
    std::cout << "Input your exam score:";

    // define variable
    double score;

    // interact with users
    std::cin >> score;
    std::cout << "Your grade is:" << letter_grade(score) << std::endl;
    return 0;
}

char letter_grade(double score) {
    // define const
    const double CONST_GRADE_A = 90.0;
    const double CONST_GRADE_B = 80.0;
    const double CONST_GRADE_C = 70.0;
    const double CONST_GRADE_D = 60.0;

    if (score >= CONST_GRADE_A) {
        return 'A';
    } else if (score >= CONST_GRADE_B) {
        return 'B';
    } else if (score >= CONST_GRADE_C) {
        return 'C';
    } else if (score >= CONST_GRADE_D) {
        return 'D';
    } else {
        return 'F';
    }
}