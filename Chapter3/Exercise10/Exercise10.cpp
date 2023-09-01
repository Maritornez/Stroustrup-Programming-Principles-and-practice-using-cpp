// Exercise10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "../../../std_lib_facilities.h"

int main() {
	setlocale(LC_ALL, "Russian");

	string operation;
	double a, b;
	cout << "Введите операцию и два числа: ";

	while (cin >> operation >> a >> b) {
		int switch_arg = -1;
		if (operation == "+" || operation == "plus") {
			switch_arg = 0;
		}
		if (operation == "-" || operation == "minus") {
			switch_arg = 1;
		}
		if (operation == "*" || operation == "mul" || operation == "multiplication") {
			switch_arg = 2;
		}
		if (operation == "/" || operation == "div" || operation == "division") {
			switch_arg = 3;
		}

		switch (switch_arg) {
		case 0:
			cout << "Результат: " << a + b << endl;
			break;
		case 1:
			cout << "Результат: " << a - b << endl;
			break;
		case 2:
			cout << "Результат: " << a * b << endl;
			break;
		case 3:
			cout << "Результат: " << a / b << endl;
			break;
		default:
			cout << "Неизвестная операция" << endl;
			break;
		}

		cout << "Введите операцию и два числа: ";
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
