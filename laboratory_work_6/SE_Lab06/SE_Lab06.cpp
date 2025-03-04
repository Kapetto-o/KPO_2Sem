#include "C:\Users\Kapetto\Desktop\Univer\Laboratory\KPO\Laboratory_work_6\SE_Lab06L\Dictionary.h"
#include <Windows.h>
#include <cstring>
#include "stdafx.h"
#pragma comment(lib, "C:\\Users\\Kapetto\\Desktop\\Univer\\Laboratory\\KPO\\Laboratory_work_6\\Debug\\SE_Lab06L.lib")

#if defined(TEST_CREATE_01) + defined(TEST_CREATE_02) + defined(TEST_ADDENTRY_03) + defined(TEST_ADDENTRY_04) + defined(TEST_GETENTRY_05) + defined(TEST_DELENTRY_06) + defined(TEST_UPDENTRY_07) + defined(TEST_UPDENTRY_08) + defined(TEST_DICTIONARY) > 1
#error "Only 1 macros can be defined at a time"
#endif

int main(int argc, wchar_t* argv[])
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // ����������� �������

#ifdef TEST_DICTIONARY
    try
    {
        Dictionary::Instance d1 = Dictionary::Create("�������������", 7);
        Dictionary::Entry e1 = { 1, "�������" }, e2 = { 2, "�������" }, e3 = { 3, "�������" }, e4 = { 4, "���������" }, e5 = { 5, "�����" }, e7 = { 7, "�������" }, e8 = { 8, "����������" }, e9 = { 9, "��������" }, e10 = { 10, "���������" };
        Dictionary::AddEntry(d1, e1);
        Dictionary::AddEntry(d1, e2);
        Dictionary::AddEntry(d1, e3);
        Dictionary::AddEntry(d1, e4);
        Dictionary::AddEntry(d1, e7);
        Dictionary::AddEntry(d1, e8);
        Dictionary::AddEntry(d1, e9);
        Dictionary::Entry ex2 = Dictionary::GetEntry(d1, 4);
        Dictionary::DelEntry(d1, 2);
        Dictionary::AddEntry(d1, e10);
        Dictionary::Entry newentry1 = { 6, "�����" };
        Dictionary::UpdEntry(d1, 3, newentry1);
        cout << "--------- ������������� --------- " << endl;
        Dictionary::Print(d1);
        Dictionary::Instance d2 = Dictionary::Create("��������", 7);
        Dictionary::Entry s1 = { 1, "������" }, s2 = { 2, "������" }, s3 = { 3, "�������" }, s4 = { 4, "�����" }, s5 = { 5, "������" }, s6 = { 6, "�����" }, s7 = { 7, "���������" };
        Dictionary::AddEntry(d2, s1);
        Dictionary::AddEntry(d2, s2);
        Dictionary::AddEntry(d2, s3);
        Dictionary::AddEntry(d2, s4);
        Dictionary::AddEntry(d2, s5);
        Dictionary::AddEntry(d2, s6);
        Dictionary::AddEntry(d2, s7);
        Dictionary::Entry newentry3 = { 3,"��������" };
        Dictionary::UpdEntry(d2, 3, newentry3);
        cout << "--------- �������� ---------" << endl;
        Dictionary::Print(d2);
        Delete(d1);
        Delete(d2);
    }
    catch (const char* e)
    {
        cout << e << endl;
    }
#endif 

#ifdef TEST_CREATE_01
    try
    {
        Dictionary::Create("hbkberjgeoigjkjbeijegpierjb", 5);
    }
    catch (const char* e)
    {
        cout << e << endl;
    }
#endif

#ifdef TEST_CREATE_02
    try
    {
        Dictionary::Create("wgeiuwb", 101);
    }
    catch (const char* e)
    {
        cout << e << endl;
    }
#endif

#ifdef TEST_ADDENTRY_03  
    try
    {
        Dictionary::Instance TEST = Dictionary::Create("TEST", 2);
        Dictionary::Entry e1 = { 1, "hwbefjw" }, e2 = { 2, "grjwjngwg" }, e3 = { 3, "wuhguwbeg" };
        Dictionary::AddEntry(TEST, e1);
        Dictionary::AddEntry(TEST, e2);
        Dictionary::AddEntry(TEST, e3);
    }
    catch (const char* e)
    {
        cout << e << endl;
    }
#endif

#ifdef TEST_ADDENTRY_04
    try
    {
        Dictionary::Instance TEST = Dictionary::Create("TEST", 3);
        Dictionary::Entry e1 = { 1, "hwbefjw" }, e2 = { 2, "grjwjngwg" }, e3 = { 2, "wuhguwbeg" };
        Dictionary::AddEntry(TEST, e1);
        Dictionary::AddEntry(TEST, e2);
        Dictionary::AddEntry(TEST, e3);
    }
    catch (const char* e)
    {
        cout << e << endl;
    }
#endif

#ifdef TEST_GETENTRY_05
    try
    {
        Dictionary::Instance TEST = Dictionary::Create("TEST", 3);
        Dictionary::Entry e1 = { 1, "hwbefjw" }, e2 = { 2, "grjwjngwg" }, e3 = { 3, "wuhguwbeg" };
        Dictionary::AddEntry(TEST, e1);
        Dictionary::AddEntry(TEST, e2);
        Dictionary::AddEntry(TEST, e3);
        Dictionary::GetEntry(TEST, 4);
    }
    catch (const char* e)
    {
        cout << e << endl;
    }
#endif

#ifdef TEST_DELENTRY_06  
    try
    {
        Dictionary::Instance TEST = Dictionary::Create("TEST", 3);
        Dictionary::Entry e1 = { 1, "hwbefjw" }, e2 = { 2, "grjwjngwg" }, e3 = { 3, "wuhguwbeg" };
        Dictionary::AddEntry(TEST, e1);
        Dictionary::AddEntry(TEST, e2);
        Dictionary::AddEntry(TEST, e3);
        Dictionary::DelEntry(TEST, 4);
    }
    catch (const char* e)
    {
        cout << e << endl;
    }
#endif

#ifdef TEST_UPDENTRY_07
    try
    {
        Dictionary::Instance TEST = Dictionary::Create("TEST", 3);
        Dictionary::Entry e1 = { 1, "hwbefjw" }, e2 = { 2, "grjwjngwg" }, e3 = { 3, "wuhguwbeg" };
        Dictionary::AddEntry(TEST, e1);
        Dictionary::AddEntry(TEST, e2);
        Dictionary::AddEntry(TEST, e3);
        Dictionary::UpdEntry(TEST, 4, e2);
    }
    catch (const char* e)
    {
        cout << e << endl;
    }
#endif 

#ifdef TEST_UPDENTRY_08
    try
    {
        Dictionary::Instance TEST = Dictionary::Create("TEST", 3);
        Dictionary::Entry e1 = { 1, "hwbefjw" }, e2 = { 2, "grjwjngwg" }, e3 = { 3, "wuhguwbeg" };
        Dictionary::AddEntry(TEST, e1);
        Dictionary::AddEntry(TEST, e2);
        Dictionary::AddEntry(TEST, e3);
        Dictionary::Entry ed2 = { 3, "woihgiowegiweg" };
        Dictionary::UpdEntry(TEST, 2, ed2);
    }
    catch (const char* e)
    {
        cout << e << endl;
    }
#endif

    system("pause");

    return 0;
}