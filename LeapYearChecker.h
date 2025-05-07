#ifndef LEAP_YEAR_CHECKER_H
#define LEAP_YEAR_CHECKER_H

class LeapYearChecker {
private:
    int year;

public:
    LeapYearChecker(int y);
    bool isLeapYear() const;
    void displayResult() const;
};

#endif
