#pragma once
#include <iostream>
#include <string>
using namespace std;

bool isValidDate(int day, int month, int year);
void inputDate(int& day, int& month, int& year);
bool isLeapYear(int year);
int dayOfYear(int day, int month, int year);
int daysUntilBirthday(int day, int month, int year, int dayBirthday, int monthBirthday);
string getMonthName(int month);
void celebrateHoliday(int day, int month);