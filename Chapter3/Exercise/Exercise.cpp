// Exercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "../../std_lib_facilities.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Ââåäèòå èìÿ àäðåñàòà (è íàæìèòå 'enter'):\n";
	string first_name; // first_name - ïåðåìåííàÿ òèïà string
	cin >> first_name; // Ñ÷èòûâàåì ñèìâîëû â first_name
	
	cout << "Ââåäèòå âîçðàñò àäðåñàòà:\n";
	int age;
	cin >> age;
	if (age <= 0 || age > 120) {
		simple_error("Äà òû øóòèøü!");
	}

	cout << "Ââåäèòå èìÿ åùå îäíîãî ïðèÿòåëÿ:\n";
	string friend_name;
	cin >> friend_name;

	cout << "Ââåäèòå ïîë ïðèÿòåëÿ (m, åñëè ìóæ÷èíà èëè f, åñëè æåíùèíà):\n";
	char friend_sex = (char)0;
	cin >> friend_sex;

	cout << "Äîðîãîé " << first_name << "!\n"
		<< "Êàê äåëà? Ó ìåíÿ âñå õîðîøî. ß ñêó÷àþ ïî òåáå.\n"
		<< "Êàê ïîãîäà? Êàê íàñòðîåíèå? Íàäåþñü, ÷òî âñå áëàãîïîëó÷íî.\n"
		<< "Äàâíî ëè òû âñòðå÷àë " << friend_name << "?\n";
	if (friend_sex == 'm') {
		cout << "Åñëè òû óâèäèøü " << friend_name << ", ïîæàëóéñòà, ïîïðîñè åãî ïîçâîíèòü ìíå.\n";
	}
	if (friend_sex == 'f') {
		cout << "Åñëè òû óâèäèøü " << friend_name << ", ïîæàëóéñòà, ïîïðîñè åå ïîçâîíèòü ìíå.\n";
	}
	cout << "ß ñëûøàë, òû òîëüêî ÷òî îòìåòèë äåíü ðîæäåíèÿ è òåáå èñïîëíèëîñü " << age << " ëåò.\n";
	if (age < 12) {
		cout << "Íà ñëåäóþùèé ãîä òåáå èñïîëíèòñÿ " << age+1 << " ëåò.\n";
	}
	if (age == 17) {
		cout << "Â ñëåäóþùåì ãîäó òû ñìîæåøü ãîëîñîâàòü!\n";
	}
	if (age > 70) {
		cout << "Íàäåþñü, òû íå ñêó÷àåøü íà ïåíñèè.\n";
	}
	if (age == 100) {
		cout << "Òû äîæèë äî ñîòíè ëåò!\n";
	}
	cout << "Èñêðåííå òâîé\n\n"
		<< "Ãåîðãèé Ïîòîíîâ.\n";
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
