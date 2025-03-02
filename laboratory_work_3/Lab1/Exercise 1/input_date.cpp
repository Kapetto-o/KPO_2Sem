#include "stdafx.h"

void inputDate(int& day, int& month, int& year) {
    string date;
    do {
        cin >> date;
        day = stoi(date.substr(0, 2));
        month = stoi(date.substr(2, 2));
        year = stoi(date.substr(5, 4));
        if (!isValidDate(day, month, year)) {
            cout << "Дата введена неверно, повторите попытку" << endl;
        }
    } while (!isValidDate(day, month, year));
}