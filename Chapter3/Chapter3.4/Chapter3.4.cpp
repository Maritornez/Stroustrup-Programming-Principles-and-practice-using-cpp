// Chapter3.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "../../std_lib_facilities.h"

int main() {
	double d{ 0 };
	while (cin >> d) {
		int i = d; // Попытка в тиснуть double в int
		char c = i; // Попытка втиснуть int в char
		int i2 = c; // Получаем целое значение типа char
		cout << "d = " << d // Исходное значение типа double
			<< " i = " << i // Преобразованное в значение int
			<< " i2 = " << i2 // Целочисленное зна чение char
			<< " char(" << c << ") \n"; // Символ
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
