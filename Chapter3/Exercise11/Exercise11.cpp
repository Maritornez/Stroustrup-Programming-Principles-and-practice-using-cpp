// Exercise11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "../../../std_lib_facilities.h"

int main() {
	setlocale(LC_ALL, "Russian");

	int cent1{ 0 }, cent5{ 0 }, cent10{ 0 }, cent25{ 0 }, cent50{ 0 }, dollar1{ 0 };
	while (true) {
		cout << "������� ���������� ������������ �����: ";
		cin >> cent1;
		cout << "������� ���������� ������������ �����: ";
		cin >> cent5;
		cout << "������� ���������� �������������� �����: ";
		cin >> cent10;
		cout << "������� ���������� �������������������� �����: ";
		cin >> cent25;
		cout << "������� ���������� ������������������ �����: ";
		cin >> cent50;
		cout << "������� ���������� �������������� �����: ";
		cin >> dollar1;

		// ����� ���������� ������������ �����
		if (cent1 > 10 && cent1 < 15) {
			cout << "� ��� " << cent1 << " ������������ �����." << endl;
		} else {
			switch (cent1 % 10) {
			case 1:
				cout << "� ��� " << cent1 << " ������������ ������." << endl;
				break;
			case 2:
			case 3:
			case 4:
				cout << "� ��� " << cent1 << " ������������ ������." << endl;
				break;
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 0:
				cout << "� ��� " << cent1 << " ������������ �����." << endl;
				break;
			default:
				break;
			}
		}

		// ����� ���������� ������������ �����
		if (cent5 > 10 && cent5 < 15) {
			cout << "� ��� " << cent5 << " ������������ �����." << endl;
		} else {
			switch (cent5 % 10) {
			case 1:
				cout << "� ��� " << cent5 << " ������������ ������." << endl;
				break;
			case 2:
			case 3:
			case 4:
				cout << "� ��� " << cent5 << " ������������ ������." << endl;
				break;
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 0:
				cout << "� ��� " << cent5 << " ������������ �����." << endl;
				break;
			default:
				break;
			}
		}

		// ����� ���������� �������������� �����
		if (cent10 > 10 && cent10 < 15) {
			cout << "� ��� " << cent10 << " �������������� �����." << endl;
		} else {
			switch (cent10 % 10) {
			case 1:
				cout << "� ��� " << cent10 << " �������������� ������." << endl;
				break;
			case 2:
			case 3:
			case 4:
				cout << "� ��� " << cent10 << " �������������� ������." << endl;
				break;
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 0:
				cout << "� ��� " << cent10 << " �������������� �����." << endl;
				break;
			default:
				break;
			}
		}

		// ����� ���������� �������������������� �����
		if (cent25 > 10 && cent25 < 15) {
			cout << "� ��� " << cent25 << " �������������������� �����." << endl;
		} else {
			switch (cent25 % 10) {
			case 1:
				cout << "� ��� " << cent25 << " �������������������� ������." << endl;
				break;
			case 2:
			case 3:
			case 4:
				cout << "� ��� " << cent25 << " �������������������� ������." << endl;
				break;
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 0:
				cout << "� ��� " << cent25 << " �������������������� �����." << endl;
				break;
			default:
				break;
			}
		}

		// ����� ���������� ������������������ �����
		if (cent50 > 10 && cent50 < 15) {
			cout << "� ��� " << cent50 << " ������������������ �����." << endl;
		} else {
			switch (cent50 % 10) {
			case 1:
				cout << "� ��� " << cent50 << " ������������������ ������." << endl;
				break;
			case 2:
			case 3:
			case 4:
				cout << "� ��� " << cent50 << " ������������������ ������." << endl;
				break;
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 0:
				cout << "� ��� " << cent50 << " ������������������ �����." << endl;
				break;
			default:
				break;
			}
		}

		// ����� ���������� �������������� �����
		if (dollar1 > 10 && dollar1 < 15) {
			cout << "� ��� " << dollar1 << " �������������� �����." << endl;
		} else {
			switch (dollar1 % 10) {
			case 1:
				cout << "� ��� " << dollar1 << " �������������� ������." << endl;
				break;
			case 2:
			case 3:
			case 4:
				cout << "� ��� " << dollar1 << " �������������� ������." << endl;
				break;
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 0:
				cout << "� ��� " << dollar1 << " �������������� �����." << endl;
				break;
			default:
				break;
			}
		}

		// ����� ������ ���������� �����
		int all_money{ 0 }, all_dollars{ 0 }, all_cents{ 0 };
		all_money = cent1 + 5 * cent5 + 10 * cent10 + 25 * cent25 + 50 * cent50 + 100 * dollar1;
		all_dollars = all_money / 100;
		all_cents = all_money % 100;
		cout << "����� ��������� ����� ����� ����� "
			<< all_dollars << " �������� "
			<< all_cents << " ������." << endl;
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
