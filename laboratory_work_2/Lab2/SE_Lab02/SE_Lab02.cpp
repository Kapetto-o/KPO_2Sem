#include <iostream>
using namespace std;

void myFunction();

int main()
{
	setlocale(LC_ALL, "Russian");
	int X, Y, Z, n = 9;
	double S;
	X = 9 + n;
	Y = 10 + n;
	Z = 11 + n;
	S = 1.0 + n;

	bool variableTrue = true, variableFalse = false; // True: 1; False: 0

	char secondSurnameEng = 'e', secondSurnameRus = 'е'; // Eng: 65; Rus: c5
	wchar_t firstSurnameEng = 'L', firstSurnameRus = 'Л'; // Eng: 4c; Rus: 41B

	short plusX = X, minusX = -X; // Шестнадцатиричное значение X и -X ручным методом: 12 и -12
	short highestShort = 0x7FFF, smallestShort = 0x8000; // max: 32767, min: -32768
	unsigned short  highestUShort = 0xFFFF, smallestUShort = 0x0; // max: 65 535, min: 0

	int plusY = Y, minusY = -Y; // Шестнадцатиричное значение Y и -Y ручным методом: 13 и -13
	int highestInt = 0x7FFFFFFF, smallestInt = 0x8000000; // max: 2 147 483 647, min: -2 147 483 648
	unsigned int highestUInt = 0x1194D7FF, smallestUInt = 0x0; // max: 4 294 967 295, min: 0

	long plusZ = Z, minusZ = -Z; // Шестнадцатиричное значение Z и -Z ручным методом: 14 и -14
	long highestLong = 0x7FFFFFFFFFFFFFFF, smallestLong = 0x8000000000000000; // max: 9 223 372 036 854 775 807, min: -9 223 372 036 854 775 80;
	unsigned long highestULong = 0xFFFFFFFF, smallestULong = 0x0; // max: 18 446 744 073 709 551 615, min:0

	float PlusS = S, MinusS = -S; // A.000

	// int result1 = 1 / 0; // Результат: 1.#INF
	// int result2 = -1 / 0; // Результат: -1.#INF
	// int result3 = 0 / 0; // Результат: -1.#IND

	char myChar = 'L';
	wchar_t myWChar = L'e';
	short myShort = 3;
	int myInt = 4;
	float myFloat = 4.3;
	double myDouble = 4.66;

	char* charPointer = &myChar;
	wchar_t* wideCharPointer = &myWChar;
	short* shortPointer = &myShort;
	int* intPointer = &myInt;
	float* floatPointer = &myFloat;
	double* doublePointer = &myDouble;

	void (*message)();

	message = myFunction;
	message();
}

void myFunction() {

	cout << "Функция!" << endl;

}