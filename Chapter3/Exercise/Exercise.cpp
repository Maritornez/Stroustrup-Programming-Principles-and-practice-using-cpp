// Exercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "../../../std_lib_facilities.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Введите имя адресата (и нажмите 'enter'):\n";
	string first_name; // first_name - переменная типа string
	cin >> first_name; // Считываем символы в first_name
	
	cout << "Введите возраст адресата:\n";
	int age;
	cin >> age;
	if (age <= 0 || age > 120) {
		simple_error("Да ты шутишь!");
	}

	cout << "Введите имя еще одного приятеля:\n";
	string friend_name;
	cin >> friend_name;

	cout << "Введите пол приятеля (m, если мужчина или f, если женщина):\n";
	char friend_sex = (char)0;
	cin >> friend_sex;

	cout << "Дорогой " << first_name << "!\n"
		<< "Как дела? У меня все хорошо. Я скучаю по тебе.\n"
		<< "Как погода? Как настроение? Надеюсь, что все благополучно.\n"
		<< "Давно ли ты встречал " << friend_name << "?\n";
	if (friend_sex == 'm') {
		cout << "Если ты увидишь " << friend_name << ", пожалуйста, попроси его позвонить мне.\n";
	}
	if (friend_sex == 'f') {
		cout << "Если ты увидишь " << friend_name << ", пожалуйста, попроси ее позвонить мне.\n";
	}
	cout << "Я слышал, ты только что отметил день рождения и тебе исполнилось " << age << " лет.\n";
	if (age < 12) {
		cout << "На следующий год тебе исполнится " << age+1 << " лет.\n";
	}
	if (age == 17) {
		cout << "В следующем году ты сможешь голосовать!\n";
	}
	if (age > 70) {
		cout << "Надеюсь, ты не скучаешь на пенсии.\n";
	}
	if (age == 100) {
		cout << "Ты дожил до сотни лет!\n";
	}
	cout << "Искренне твой\n\n"
		<< "Георгий Потонов.\n";
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
