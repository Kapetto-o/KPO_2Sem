#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
			// Определить количество целых чисел в vector равных заданному
	int target1 = 3;
	int num_items1 = count(v.begin(), v.end(), target1);
	cout << "Число: " << target1 << " количество: " << num_items1 << '\n';
			// Лямбда-выражение для подсчёта элементов кратных 3
	int num_items3 = count_if(v.begin(), v.end(), [](int i) {return i % 3 == 0; });
	cout << "количество элементов, кратных 3: " << num_items3 << '\n';
	cout << endl << " Лямбда, захват переменных" << endl;
			// Лямбда-выражение, захват переменных
	for (auto i : v) [i]() {if (i % 3 == 0) cout << i << " "; }();
	
	cout << endl << " Лямбда с параметрами" << endl;
	// Вывод значений кратных 3. Значения передаются как параметр у обычной функции
	for (auto i : v) [](auto i) {if (i % 3 == 0) cout << i << " "; }(i);

	cout << endl << " Лямбда без параметров" << endl;
	// Вывод значений кратных 3
	for (auto i : v) [i] { if (i % 3 == 0) cout << i << " "; }();
}