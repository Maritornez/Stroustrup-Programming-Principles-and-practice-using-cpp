// Exercise11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "../../std_lib_facilities.h"

int main()
{
	//setlocale(LC_ALL, "Russian");

    vector<int> primes;
	cout << "Введите число, до которого будут выводиться простые числа: ";
	int max;
	while (cin >> max) {

		// Find simple numbers
		for (int i = 2; i < max; i++) {
			for (int j = 1; j < i; j++) {
				if (i % j == 0 && i != j && j != 1) {
					break;
				}
				if (i - j == 1) {
					primes.push_back(i);
					break;
				}
			}
		}

		for (auto x : primes) {
			cout << x << ' ';
		}
		cout << endl;
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
