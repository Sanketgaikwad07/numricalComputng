#include <iostream>
#include "LeapYearChecker.h"

int main() {
    int inputYear;
    std::cout << "Enter a 4-digit year: ";
    std::cin >> inputYear;

    try {
        LeapYearChecker checker(inputYear);
        checker.displayResult();
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
