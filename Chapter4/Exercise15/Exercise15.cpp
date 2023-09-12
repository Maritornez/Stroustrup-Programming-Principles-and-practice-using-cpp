// Exercise15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "../../std_lib_facilities.h"

bool is_prime(int n);

int main()
{
	//setlocale(LC_ALL, "Russian");

	int n;
	std::cout << "Введите, сколько нужно вывести простых чисел: ";
	while (cin >> n) {
		int already_found_amount = 0;
		int output = 2; // current prime challenger
		while (already_found_amount < n) {
			if (is_prime(output) && !(n - already_found_amount == 1)) {
				already_found_amount++;
				std::cout << output << ", ";
			} else if (is_prime(output) && n - already_found_amount == 1) {
				already_found_amount++;
				std::cout << output;
			}
			output++;

		}
		std::cout << '\n';
		std::cout << "Введите, сколько нужно вывести простых чисел: ";
	}
}

bool is_prime(int n) {
	// Corner case
	if (n <= 1)
		return false;

	// Check from 2 to n-1
	for (int i = 2; i <= n / 2; i++)
		if (n % i == 0)
			return false;

	return true;
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
