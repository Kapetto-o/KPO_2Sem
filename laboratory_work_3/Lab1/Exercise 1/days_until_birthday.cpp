#include "stdafx.h"

int daysUntilBirthday(int day, int month, int year, int dayBirthday, int monthBirthday) {
    int currentDayOfYear = dayOfYear(day, month, year);
    int birthdayDayOfYear = dayOfYear(dayBirthday, monthBirthday, year);
    if (currentDayOfYear <= birthdayDayOfYear) {
        return birthdayDayOfYear - currentDayOfYear;
    }
    else {
        int daysInYear = isLeapYear(year) ? 366 : 365;
        return daysInYear - currentDayOfYear + birthdayDayOfYear;
    }
}