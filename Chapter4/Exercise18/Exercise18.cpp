// Solve quadratic equation ax^2 + bx + c = 0

#include "../../std_lib_facilities.h"

vector<double> solve_quadratic(int a, int b, int c);

int main() {
	//setlocale(LC_ALL, "Russian");

	int a, b, c;

	std::cout << "Введите параметры квадратного уравнения (a, b, c): ";
	while (std::cin >> a >> b >> c) {
		vector<double> result = solve_quadratic(a, b, c);
		if (result.empty()) {
			std::cout << "Решений нет." << '\n';
		} else {
			for (auto x : result) {
				std::cout << x << ' ';
			}
		}
		std::cout << '\n';
		std::cout << "Введите параметры квадратного уравнения (a, b, c): ";
	}
}

vector<double> solve_quadratic(int a, int b, int c) {
	int d = b * b - 4 * a * c;
	vector<double> result;
	if (d < 0) {
		return result;
	} else if (d == 0) {
		result.push_back(-b / (2 * a));
		return result;
	} else {
		result.push_back((-b + sqrt(d)) / (2 * a));
		result.push_back((-b - sqrt(d)) / (2 * a));
		sort(result);
		return result;
	}
}