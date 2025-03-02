#include "stdafx.h"

int main() {
    setlocale(LC_CTYPE, "Russian");

    int day, month, year, dayBirthday, monthBirthday, yearBirthday;

    cout << "Введите дату в формате ДД ММ ГГГГ: " << endl;

    inputDate(day, month, year);

    cout << (isLeapYear(year) ? "Високосный год" : "Невисокосный год") << endl;
    cout << "Порядковый номер дня в году: " << dayOfYear(day, month, year) << endl;
    cout << "Введите дату своего рождения в формате ДД ММ ГГГГ: " << endl;

    inputDate(dayBirthday, monthBirthday, yearBirthday);

    cout << "Дней до ближайшего дня рождения: " << daysUntilBirthday(day, month, year, dayBirthday, monthBirthday) << endl;

    return 0;
}