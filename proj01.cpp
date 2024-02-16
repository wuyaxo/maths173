// David Wu
// SID: 900632036
// This project is my own work.
// Created by David on 9/6/23.
#include <iostream>
#include <iomanip>

// define monthly payment function
double monthly_payment(double amount, int years, double rate);

int main() {
    double loan_amount, loan_rate;
    int loan_years;
    std::cout << "What is the loan amount? ";
    std::cin >> loan_amount;
    std::cout << "What is the length of loan, in years? ";
    std::cin >> loan_years;
    std::cout << "What is the annual interest rate? ";
    std::cin >> loan_rate;
    std::cout << "********************************************\n";
    std::cout << "Your monthly payment is $" << std::fixed << std::setprecision(2)
              << monthly_payment(loan_amount, loan_years, loan_rate)
              << ".\n";
    return 0;
}

// monthly payment function
double monthly_payment(double amount, int years, double rate) {
    // local variable declaration
    double factor, payment;
    // use variable factor to simplify equation
    factor = pow(1 + rate / 100 / 12, 12 * years);
    payment = amount * rate / 100 / 12 * factor / (factor - 1);
    return payment;
}

