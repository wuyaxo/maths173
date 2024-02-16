// David Wu
// SID: 900632036
// This project is my own work.
// Created by David on 10/2/23.
//
#include <iostream>
#include <string>

bool is_leap_year(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}


std::string get_day_of_week(int day) {
    const std::string DAYS[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday",
                                 "Friday", "Saturday"};
    const int WEEKDAY = 6; //Saturday
    return DAYS[(day + WEEKDAY) % 7];
}


bool is_end_of_month(int year_index, int month_index, int day) {
    const int special_months[5] = {1, 3, 5, 8, 10};
    bool is_special_month = false;
    for (int current_month: special_months) {
        if (current_month == month_index) {
            is_special_month = true;
            break;
        }
    }
    if (is_leap_year(year_index) && month_index == 1 && day == 29) {
        return true;
    }
    if (!is_leap_year(year_index) && month_index == 1 && day == 28) {
        return true;
    }
    if (is_special_month && day == 30) {
        return true;
    }
    if (day == 31) {
        return true;
    }
    return false;
}

std::string get_month_name(int month_index) {
    const std::string MONTHS[12] = {"January", "February", "March", "April",
                                    "May", "June", "July", "August",
                                    "September", "October", "November", "December"};
    return MONTHS[month_index];
}

void print_consecutive_dates(int cnt) {
    int _day = 0;
    int _month = 0;
    int _year = 2000; //start from year 2000

    for (int i = 0; i < cnt; ++i) {
        if (is_end_of_month(_year, _month, _day)) {
            ++_month;
            _day = 1;
            if (_month == 12) {
                ++_year;
                _month = 0;
            }
        } else {
            ++_day;
        }
        std::cout << get_day_of_week(i) << ", " << get_month_name(_month) << ", " << _day << ", "
                  << _year << "\n";
    }
}

int main() {
    print_consecutive_dates(366 + 31 + 28);
}