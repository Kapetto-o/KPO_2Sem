#include "stdafx.h"

string getMonthName(int month) {
    string months[12] = { "������", "�������", "����", "������", "���", "����", "����", "������", "��������", "�������", "������", "�������" };
    return months[month - 1];
}