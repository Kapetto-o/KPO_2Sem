#include <iostream>
#include <string>

using namespace std;

typedef unsigned long long account_number;
typedef string owner_name;
typedef string operation_type;
typedef double amount;

typedef unsigned char day;
typedef unsigned char month;
typedef unsigned short year;

struct Date {
    day dd;
    month mm;
    year yyyy;
};

typedef Date date;

struct OperationHistory {
    account_number acc_num;
    owner_name owner;
    operation_type operation;
    amount sum;
    date operation_date;
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

bool operator<(const OperationHistory& h1, const OperationHistory& h2) {
    return h1.operation_date < h2.operation_date;
}

bool operator>(const OperationHistory& h1, const OperationHistory& h2) {
    return h2 < h1;
}

bool operator==(const OperationHistory& h1, const OperationHistory& h2) {
    return !(h1.operation_date < h2.operation_date)&& (h1.operation_date > h2.operation_date);
}


int main()
{
    setlocale(LC_ALL, "rus");

    OperationHistory history1 = { 123456789, "Иванов Иван", "перевод", 2000.50, {7,1,2024} };
    OperationHistory history2 = { 987654321, "Петров Петр", "снятие", 7.99, {7,2,2024} };
    OperationHistory history3 = { 165716575, "Павлов Павел", "снятие", 7.99, {9,3,2024} };
    OperationHistory history4 = { 726728976, "Артёмов Артём", "перевод", 7.99, {9,3,2024} };
    OperationHistory history5 = { 123456789, "Иванов Иван", "перевод", 2000.50, {3,1,2024} };


    cout << "=================================================================================" << endl;
    cout << "\t\t\tТестирование операторов >, <, == " << endl;
    cout << "=================================================================================\n" << endl;

    if (history1 < history2) cout << "ИСТИНА\tПоследнюю операция совершил:\t\tПетровом Петром\n" << endl; // тестируется перезагрузка оператора < (меньше)
    else cout << "ЛОЖЬ\tПоследнюю операцию совершил:\t\tИванов Иван\n" << endl;

    if (history1 > history2) cout << "ИСТИНА\tПоследнияя операция совершена:\t\tИвановым Иваном\n" << endl; // тестируется перезагрузка оператора > (больше)
    else cout << "ЛОЖЬ\tПоследнияя операция совершена:\t\tПетровом Петром\n" << endl;

    if (history3 == history4) cout << "ИСТИНА\tВ один день операции совершили:\t\tПавлов Павел и Артёмов Артём\n" << endl; // тестируется перезагрузка оператора == (равно) - ИСТИНА
    else cout << "ЛОЖЬ\tНет одновременных операций среди:\tПавлова Павла и Артёмова Артёма\n" << endl;

    if (history2 == history4) cout << "ИСТИНА\tВ один день операции совершили:\tПетрова Петра и Артёмов Артём\n" << endl; // тестируется перезагрузка оператора == (равно) - ЛОЖЬ
    else cout << "ЛОЖЬ\tНет одновременных операций среди:\tПетрова Петра и Артёмова Артёма\n" << endl;
}