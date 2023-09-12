// Finding simple numbers by Sieve of Eratosthenes algorithm

#include "../../std_lib_facilities.h"

vector<int> sieve_of_Eratosthenes(int max);
vector<int> sieve_of_Eratosthenes_v2(int max);

int main()
{
	//setlocale(LC_ALL, "Russian");

	std::cout << "Введите число, до которого будут выводиться простые числа: ";
	int max;
	while (std::cin >> max) {
		vector<int> prime_nums = sieve_of_Eratosthenes_v2(max);

		// Print all prime numbers less then "max"
		std::cout << "Простые числа до " << max << ": ";
		for (int i = 0; i < prime_nums.size(); i++) {
			std::cout << prime_nums[i];
			if (i != prime_nums.size() - 1) {
				std::cout << ", ";
			} else {
				std::cout << std::endl;
			}
		}

		std::cout << "Введите число, до которого будут выводиться простые числа: ";
	}
}

vector<int> sieve_of_Eratosthenes(int max) {
	vector<int> composite_nums;

	// Add numbers 0 and 1 to "composite_nums" vector because they are not prime
	composite_nums.push_back(0);
	composite_nums.push_back(1);

	// Add all not prime numbers less than "max" to "composite_nums" vector
	for (int i = 2; pow(i, 2) < max; i++) {
		// Check if i is in "composite_nums" vector
		bool flag_is_in_composite_nums = false;
		for (int n = 0; n < composite_nums.size(); n++) {
			if (i == composite_nums[n]) {
				flag_is_in_composite_nums = true;
			}
		}
		if (!flag_is_in_composite_nums) {
			// Add additional composite numbers that are dividends of i
			for (int k = pow(i, 2); k < max; k += i) {
				// Check if k is in composite_nums to avoid duplicates
				bool flag_is_in_composite_nums_k = false;
				for (int h = 0; h < composite_nums.size(); h++) {
					if (i == composite_nums[h]) {
						flag_is_in_composite_nums_k = true;
					}
				}
				if (!flag_is_in_composite_nums_k) {
					composite_nums.push_back(k);
				}
			}
		}
	}
	sort(composite_nums);

	// Add prime numbers less then "max" to "prime_nums" vector
	vector<int> prime_nums;
	for (int i = 0; i < max; i++) {
		bool flag_is_prime = true;
		for (int j = 0; j < composite_nums.size(); j++) {
			if (i == composite_nums[j]) {
				flag_is_prime = false;
			}
		}
		if (flag_is_prime) {
			prime_nums.push_back(i);
		}
	}

	return prime_nums;
}

vector<int> sieve_of_Eratosthenes_v2(int max) {
	vector<int> bool_array(max, 1);

	bool_array[0] = 0;
	bool_array[1] = 0;

	for (int i = 2; pow(i, 2) < max; i++) {
		if (bool_array[i] == 1) {
			for (int j = pow(i, 2); j < max; j+=i) {
				bool_array[j] = 0;
			}
		}
	}

	vector<int> prime_nums;
	for (int i = 2; i < max; i++) {
		if (bool_array[i] == 1) {
			prime_nums.push_back(i);
		}
	}

	return prime_nums;
}