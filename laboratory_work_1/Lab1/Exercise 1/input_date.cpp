#include "stdafx.h"

void inputDate(int& day, int& month, int& year) {
    do {
        cin >> day >> month >> year;
        if (!isValidDate(day, month, year)) {
            cout << "���� ������� �������, ��������� �������" << endl;
        }
    } while (!isValidDate(day, month, year));
}