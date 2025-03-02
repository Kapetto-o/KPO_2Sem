#include "stdafx.h"

int main() {
    setlocale(LC_CTYPE, "Russian");

    int day;
    int month;
    int year;
    int dayBirthday;
    int monthBirthday;
    int yearBirthday;
    

    cout << "Введите дату в формате ДДММГГГГ: ";

    inputDate(day, month, year);
    cout << "\n\tОписание даты: " << endl;
    cout << "Год: " << "\t\t\t" << (isLeapYear(year) ? "Високосный" : "Невисокосный") << endl;
    cout << "Месяц:" << "\t\t\t" << getMonthName(month) << endl;
    cout << "Номер дня в году:" << "\t" << dayOfYear(day, month, year) << endl;
    celebrateHoliday(day, month);
    cout << "\nВведите дату своего рождения: ";

    inputDate(dayBirthday, monthBirthday, yearBirthday);

    cout << "Дней до ближайшего дня рождения: " << daysUntilBirthday(day, month, year, dayBirthday, monthBirthday) << endl;

    return 0;
}