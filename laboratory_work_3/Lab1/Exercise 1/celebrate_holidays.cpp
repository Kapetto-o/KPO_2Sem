#include "stdafx.h";

void celebrateHoliday(int day, int month) {
    string holidays[31][12];
    holidays[0][0] = "� ����� �����!";
    holidays[1][0] = "� ����� �����!";
    holidays[6][0] = "� ����������!";
    holidays[14][1] = "���� ������ ������-������������������";
    holidays[22][1] = "���� ���������� ���������";
    holidays[14][1] = "� ���� �����������!";
    holidays[7][2] = "���� ������";
    holidays[1][3] = "���� �������� ������� �������� � ������";
    holidays[25][3] = "���� ������������� ��������";
    holidays[8][4] = "� ���� ������!";
    holidays[0][4] = "� ���������� �����!";
    holidays[14][4] = "� ���� �����!";
    holidays[2][6] = "���� ������������� ���������� ��������!";
    holidays[4][5] = "���� ������ ���������� �����";
    holidays[21][5] = "���� ����������� ������ ����� ������� ������������� ����� � �������� ������������ ������";
    holidays[16][8] = "���� ��������� ��������";
    holidays[0][8] = "���� ������";
    holidays[0][9] = "���� ������� �����";
    holidays[13][9] = "���� ������";
    holidays[20][9] = "���� ����";
    holidays[6][10] = "���� ����������� ���������";
    holidays[1][10] = "���� ������";
    holidays[29][10] = "���� �������� ������������!";
    holidays[2][11] = "���� ���������";
    holidays[9][11] = "���� ���� ��������";
    holidays[16][11] = "���� ������������ ����";
    holidays[24][11] = "� ����������!";

    if (!holidays[day - 1][month - 1].empty()) {
        cout << "\n\t" << holidays[day - 1][month - 1] << endl;
    }
}