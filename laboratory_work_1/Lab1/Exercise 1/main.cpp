#include "stdafx.h"

int main() {
    setlocale(LC_CTYPE, "Russian");

    int day, month, year, dayBirthday, monthBirthday, yearBirthday;

    cout << "������� ���� � ������� �� �� ����: " << endl;

    inputDate(day, month, year);

    cout << (isLeapYear(year) ? "���������� ���" : "������������ ���") << endl;
    cout << "���������� ����� ��� � ����: " << dayOfYear(day, month, year) << endl;
    cout << "������� ���� ������ �������� � ������� �� �� ����: " << endl;

    inputDate(dayBirthday, monthBirthday, yearBirthday);

    cout << "���� �� ���������� ��� ��������: " << daysUntilBirthday(day, month, year, dayBirthday, monthBirthday) << endl;

    return 0;
}