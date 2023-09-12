// Task.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "../../std_lib_facilities.h"

int main()
{
    //setlocale(LC_ALL, "Russian");

	//double a, b;
	//while (cin >> a >> b) {
	//	if (a == b) {
	//		cout << "Числа равны" << '\n';
	//	}
	//	else if (abs(a-b) < 1.0/100.0){
	//		cout << "Числа почти равны" << '\n';
	//	}
	//	else {
	//		cout << "Наименьшее значение равно: " << ((a < b) ? a : b) << endl;
	//		cout << "Наибольшее значение равно: " << ((a > b) ? a : b) << "\n\n";
	//	}
	//}

	double min, max, input, sum = 0, amount = 0; // base unit is 'm'
	vector<int> inputs;
	string unit; // cm m in ft;    1 m == 100 cm, 1 in == 2.54 cm, 1 ft == 12 in
	bool flag_first = true;
	while (cin >> input >> unit) {
				// Перевод единиц измерения в метры
		if (unit == "cm") {
			input /= 100; // Перевод в сантиметров в метры
		} else if (unit == "m") {
			// ----
		} else if (unit == "in") {
			input *= 2.54; // Перевод дюймов в сантиметры
			input /= 100; // Перевод в сантиметров в метры
		} else if (unit == "ft") {
			input *= 12; // Перевод футов в дюймы
			input *= 2.54; // Перевод дюймов в сантиметры
			input /= 100; // Перевод в сантиметров в метры
		} else {
			cout << "Неправильная единица измерения" << '\n';
			continue;
		}

		++amount;
		sum += input;
		inputs.push_back(input);

		if (flag_first == true) {
			min = input;
			max = input;
		}
		if (input < min || flag_first == true) {
			min = input;
			cout << "Наименьшее среди введенных" << '\n';
		}
		if (input > max || flag_first == true) {
			max = input;
			cout << "Наибольшее среди введенных" << '\n';
		}
		flag_first = false;
	}

	cout << "Наименьшее среди введенных: " << min << '\n';
	cout << "Наибольшее среди введенных: " << max << '\n';
	cout << "Количество введенных значений: " << amount << '\n';
	cout << "Сумма введенных значений: " << sum << '\n';
	sort(inputs);
	for (int x : inputs) {
		cout << x << ' ';
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
