#include "stdafx.h"

int dayOfYear(int day, int month, int year) {
    int daysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (isLeapYear(year)) {
        daysInMonth[1] = 29;
    }
    int dayOfYear = 0;
    for (int i = 0; i < month - 1; i++) {
        dayOfYear += daysInMonth[i];
    }
    dayOfYear += day;
    return dayOfYear;
}