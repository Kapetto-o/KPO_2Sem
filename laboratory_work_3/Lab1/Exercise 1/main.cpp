#include "stdafx.h"

int main() {
    setlocale(LC_CTYPE, "Russian");

    int day;
    int month;
    int year;
    int dayBirthday;
    int monthBirthday;
    int yearBirthday;
    

    cout << "������� ���� � ������� ��������: ";

    inputDate(day, month, year);
    cout << "\n\t�������� ����: " << endl;
    cout << "���: " << "\t\t\t" << (isLeapYear(year) ? "����������" : "������������") << endl;
    cout << "�����:" << "\t\t\t" << getMonthName(month) << endl;
    cout << "����� ��� � ����:" << "\t" << dayOfYear(day, month, year) << endl;
    celebrateHoliday(day, month);
    cout << "\n������� ���� ������ ��������: ";

    inputDate(dayBirthday, monthBirthday, yearBirthday);

    cout << "���� �� ���������� ��� ��������: " << daysUntilBirthday(day, month, year, dayBirthday, monthBirthday) << endl;

    return 0;
}