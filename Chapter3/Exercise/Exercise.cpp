// Exercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "../../../std_lib_facilities.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "������� ��� �������� (� ������� 'enter'):\n";
	string first_name; // first_name - ���������� ���� string
	cin >> first_name; // ��������� ������� � first_name
	
	cout << "������� ������� ��������:\n";
	int age;
	cin >> age;
	if (age <= 0 || age > 120) {
		simple_error("�� �� ������!");
	}

	cout << "������� ��� ��� ������ ��������:\n";
	string friend_name;
	cin >> friend_name;

	cout << "������� ��� �������� (m, ���� ������� ��� f, ���� �������):\n";
	char friend_sex = (char)0;
	cin >> friend_sex;

	cout << "������� " << first_name << "!\n"
		<< "��� ����? � ���� ��� ������. � ������ �� ����.\n"
		<< "��� ������? ��� ����������? �������, ��� ��� ������������.\n"
		<< "����� �� �� �������� " << friend_name << "?\n";
	if (friend_sex == 'm') {
		cout << "���� �� ������� " << friend_name << ", ����������, ������� ��� ��������� ���.\n";
	}
	if (friend_sex == 'f') {
		cout << "���� �� ������� " << friend_name << ", ����������, ������� �� ��������� ���.\n";
	}
	cout << "� ������, �� ������ ��� ������� ���� �������� � ���� ����������� " << age << " ���.\n";
	if (age < 12) {
		cout << "�� ��������� ��� ���� ���������� " << age+1 << " ���.\n";
	}
	if (age == 17) {
		cout << "� ��������� ���� �� ������� ����������!\n";
	}
	if (age > 70) {
		cout << "�������, �� �� �������� �� ������.\n";
	}
	if (age == 100) {
		cout << "�� ����� �� ����� ���!\n";
	}
	cout << "�������� ����\n\n"
		<< "������� �������.\n";
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
