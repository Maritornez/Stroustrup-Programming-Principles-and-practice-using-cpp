// Exercise11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "../../std_lib_facilities.h"

int main() {
	setlocale(LC_ALL, "Russian");

	int cent1{ 0 }, cent5{ 0 }, cent10{ 0 }, cent25{ 0 }, cent50{ 0 }, dollar1{ 0 };
	while (true) {
		cout << "Введите количество одноцентовых монет: ";
		cin >> cent1;
		cout << "Введите количество пятицентовых монет: ";
		cin >> cent5;
		cout << "Введите количество десятицентовых монет: ";
		cin >> cent10;
		cout << "Введите количество двадцатипятицентовых монет: ";
		cin >> cent25;
		cout << "Введите количество пятидесятицентовых монет: ";
		cin >> cent50;
		cout << "Введите количество однодолларовых монет: ";
		cin >> dollar1;

		// Вывод количества одноцентовых монет
		if (cent1 > 10 && cent1 < 15) {
			cout << "У вас " << cent1 << " одноцентовых монет." << endl;
		} else {
			switch (cent1 % 10) {
			case 1:
				cout << "У вас " << cent1 << " одноцентовая монета." << endl;
				break;
			case 2:
			case 3:
			case 4:
				cout << "У вас " << cent1 << " одноцентовые монеты." << endl;
				break;
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 0:
				cout << "У вас " << cent1 << " одноцентовых монет." << endl;
				break;
			default:
				break;
			}
		}

		// Вывод количества пятицентовых монет
		if (cent5 > 10 && cent5 < 15) {
			cout << "У вас " << cent5 << " пятицентовых монет." << endl;
		} else {
			switch (cent5 % 10) {
			case 1:
				cout << "У вас " << cent5 << " пятицентовая монета." << endl;
				break;
			case 2:
			case 3:
			case 4:
				cout << "У вас " << cent5 << " пятицентовые монеты." << endl;
				break;
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 0:
				cout << "У вас " << cent5 << " пятицентовых монет." << endl;
				break;
			default:
				break;
			}
		}

		// Вывод количества десятицентовых монет
		if (cent10 > 10 && cent10 < 15) {
			cout << "У вас " << cent10 << " десятицентовых монет." << endl;
		} else {
			switch (cent10 % 10) {
			case 1:
				cout << "У вас " << cent10 << " десятицентовая монета." << endl;
				break;
			case 2:
			case 3:
			case 4:
				cout << "У вас " << cent10 << " десятицентовые монеты." << endl;
				break;
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 0:
				cout << "У вас " << cent10 << " десятицентовых монет." << endl;
				break;
			default:
				break;
			}
		}

		// Вывод количества двадцатипятицентовых монет
		if (cent25 > 10 && cent25 < 15) {
			cout << "У вас " << cent25 << " двадцатипятицентовых монет." << endl;
		} else {
			switch (cent25 % 10) {
			case 1:
				cout << "У вас " << cent25 << " двадцатипятицентовая монета." << endl;
				break;
			case 2:
			case 3:
			case 4:
				cout << "У вас " << cent25 << " двадцатипятицентовые монеты." << endl;
				break;
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 0:
				cout << "У вас " << cent25 << " двадцатипятицентовых монет." << endl;
				break;
			default:
				break;
			}
		}

		// Вывод количества пятидесятицентовых монет
		if (cent50 > 10 && cent50 < 15) {
			cout << "У вас " << cent50 << " пятидесятицентовых монет." << endl;
		} else {
			switch (cent50 % 10) {
			case 1:
				cout << "У вас " << cent50 << " пятидесятицентовая монета." << endl;
				break;
			case 2:
			case 3:
			case 4:
				cout << "У вас " << cent50 << " пятидесятицентовые монеты." << endl;
				break;
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 0:
				cout << "У вас " << cent50 << " пятидесятицентовых монет." << endl;
				break;
			default:
				break;
			}
		}

		// Вывод количества однодоллоровых монет
		if (dollar1 > 10 && dollar1 < 15) {
			cout << "У вас " << dollar1 << " однодоллоровых монет." << endl;
		} else {
			switch (dollar1 % 10) {
			case 1:
				cout << "У вас " << dollar1 << " однодоллоровая монета." << endl;
				break;
			case 2:
			case 3:
			case 4:
				cout << "У вас " << dollar1 << " однодоллоровые монеты." << endl;
				break;
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 0:
				cout << "У вас " << dollar1 << " однодоллоровых монет." << endl;
				break;
			default:
				break;
			}
		}

		// Вывод общего количества монет
		int all_money{ 0 }, all_dollars{ 0 }, all_cents{ 0 };
		all_money = cent1 + 5 * cent5 + 10 * cent10 + 25 * cent25 + 50 * cent50 + 100 * dollar1;
		all_dollars = all_money / 100;
		all_cents = all_money % 100;
		cout << "Общая стоимость ваших нонет равна "
			<< all_dollars << " долларов "
			<< all_cents << " центов." << endl;
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
