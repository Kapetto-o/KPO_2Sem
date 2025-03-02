#include "stdafx.h"

bool isValidDate(int day, int month, int year) {
    int daysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (isLeapYear(year)) {
        daysInMonth[1] = 29;
    }
    return day > 0 && day <= daysInMonth[month - 1] && month > 0 && month <= 12 && year > 0;
}