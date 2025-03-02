#include <iostream>

using namespace std;

typedef unsigned char day;
typedef unsigned char month;
typedef unsigned short year;

struct Date { // определяет последнюю дату совершения операции со счётом
    day dd;
    month mm;
    year yyyy;
};

bool operator<(const Date& d1, const Date& d2) {
    if (d1.yyyy != d2.yyyy)
        return d1.yyyy < d2.yyyy;
    if (d1.mm != d2.mm)
        return d1.mm < d2.mm;
    return d1.dd < d2.dd;
}

bool operator>(const Date& d1, const Date& d2) {
    return d2 < d1;
}

bool operator==(const Date& d1, const Date& d2) {
    return !(d1 < d2) && !(d2 < d1);
}

int main()
{
    setlocale(LC_ALL, "rus");

    Date date1 = { 7,1,1980 };
    Date date2 = { 7,2,1993 };
    Date date3 = { 7,1,1980 };

    if (date1 < date2) cout << "истина" << endl;
    else cout << "ложь" << endl;

    if (date1 > date2) cout << "истина" << endl;
    else cout << "ложь" << endl;

    if (date1 == date2) cout << "истина" << endl;
    else cout << "ложь" << endl;

    if (date1 == date3) cout << "истина" << endl;
    else cout << "ложь" << endl;
}