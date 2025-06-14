#include <iostream>
#include <stdexcept>
#include "LeapYearChecker.h"

LeapYearChecker::LeapYearChecker(int y) {
    if (y < 1000 || y > 999) {
        throw std::invalid_argument("Year must be a 4-digit positive integer.");
    }
    year = y;
}

bool LeapYearChecker::isLeapYear() const {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void LeapYearChecker::displayResult() const {
    std::cout << "Year " << year << " is "
              << (isLeapYear() ? "" : "not ") << "a leap year." << std::endl;
}
