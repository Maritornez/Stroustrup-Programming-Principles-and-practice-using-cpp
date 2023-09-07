// Exercise11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "../../std_lib_facilities.h"

int main() {
	setlocale(LC_ALL, "Russian");

	int cent1{ 0 }, cent5{ 0 }, cent10{ 0 }, cent25{ 0 }, cent50{ 0 }, dollar1{ 0 };
	while (true) {
		cout << "Ââĺäčňĺ ęîëč÷ĺńňâî îäíîöĺíňîâűő ěîíĺň: ";
		cin >> cent1;
		cout << "Ââĺäčňĺ ęîëč÷ĺńňâî ď˙ňčöĺíňîâűő ěîíĺň: ";
		cin >> cent5;
		cout << "Ââĺäčňĺ ęîëč÷ĺńňâî äĺń˙ňčöĺíňîâűő ěîíĺň: ";
		cin >> cent10;
		cout << "Ââĺäčňĺ ęîëč÷ĺńňâî äâŕäöŕňčď˙ňčöĺíňîâűő ěîíĺň: ";
		cin >> cent25;
		cout << "Ââĺäčňĺ ęîëč÷ĺńňâî ď˙ňčäĺń˙ňčöĺíňîâűő ěîíĺň: ";
		cin >> cent50;
		cout << "Ââĺäčňĺ ęîëč÷ĺńňâî îäíîäîëëŕđîâűő ěîíĺň: ";
		cin >> dollar1;

		// Âűâîä ęîëč÷ĺńňâŕ îäíîöĺíňîâűő ěîíĺň
		if (cent1 > 10 && cent1 < 15) {
			cout << "Ó âŕń " << cent1 << " îäíîöĺíňîâűő ěîíĺň." << endl;
		} else {
			switch (cent1 % 10) {
			case 1:
				cout << "Ó âŕń " << cent1 << " îäíîöĺíňîâŕ˙ ěîíĺňŕ." << endl;
				break;
			case 2:
			case 3:
			case 4:
				cout << "Ó âŕń " << cent1 << " îäíîöĺíňîâűĺ ěîíĺňű." << endl;
				break;
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 0:
				cout << "Ó âŕń " << cent1 << " îäíîöĺíňîâűő ěîíĺň." << endl;
				break;
			default:
				break;
			}
		}

		// Âűâîä ęîëč÷ĺńňâŕ ď˙ňčöĺíňîâűő ěîíĺň
		if (cent5 > 10 && cent5 < 15) {
			cout << "Ó âŕń " << cent5 << " ď˙ňčöĺíňîâűő ěîíĺň." << endl;
		} else {
			switch (cent5 % 10) {
			case 1:
				cout << "Ó âŕń " << cent5 << " ď˙ňčöĺíňîâŕ˙ ěîíĺňŕ." << endl;
				break;
			case 2:
			case 3:
			case 4:
				cout << "Ó âŕń " << cent5 << " ď˙ňčöĺíňîâűĺ ěîíĺňű." << endl;
				break;
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 0:
				cout << "Ó âŕń " << cent5 << " ď˙ňčöĺíňîâűő ěîíĺň." << endl;
				break;
			default:
				break;
			}
		}

		// Âűâîä ęîëč÷ĺńňâŕ äĺń˙ňčöĺíňîâűő ěîíĺň
		if (cent10 > 10 && cent10 < 15) {
			cout << "Ó âŕń " << cent10 << " äĺń˙ňčöĺíňîâűő ěîíĺň." << endl;
		} else {
			switch (cent10 % 10) {
			case 1:
				cout << "Ó âŕń " << cent10 << " äĺń˙ňčöĺíňîâŕ˙ ěîíĺňŕ." << endl;
				break;
			case 2:
			case 3:
			case 4:
				cout << "Ó âŕń " << cent10 << " äĺń˙ňčöĺíňîâűĺ ěîíĺňű." << endl;
				break;
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 0:
				cout << "Ó âŕń " << cent10 << " äĺń˙ňčöĺíňîâűő ěîíĺň." << endl;
				break;
			default:
				break;
			}
		}

		// Âűâîä ęîëč÷ĺńňâŕ äâŕäöŕňčď˙ňčöĺíňîâűő ěîíĺň
		if (cent25 > 10 && cent25 < 15) {
			cout << "Ó âŕń " << cent25 << " äâŕäöŕňčď˙ňčöĺíňîâűő ěîíĺň." << endl;
		} else {
			switch (cent25 % 10) {
			case 1:
				cout << "Ó âŕń " << cent25 << " äâŕäöŕňčď˙ňčöĺíňîâŕ˙ ěîíĺňŕ." << endl;
				break;
			case 2:
			case 3:
			case 4:
				cout << "Ó âŕń " << cent25 << " äâŕäöŕňčď˙ňčöĺíňîâűĺ ěîíĺňű." << endl;
				break;
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 0:
				cout << "Ó âŕń " << cent25 << " äâŕäöŕňčď˙ňčöĺíňîâűő ěîíĺň." << endl;
				break;
			default:
				break;
			}
		}

		// Âűâîä ęîëč÷ĺńňâŕ ď˙ňčäĺń˙ňčöĺíňîâűő ěîíĺň
		if (cent50 > 10 && cent50 < 15) {
			cout << "Ó âŕń " << cent50 << " ď˙ňčäĺń˙ňčöĺíňîâűő ěîíĺň." << endl;
		} else {
			switch (cent50 % 10) {
			case 1:
				cout << "Ó âŕń " << cent50 << " ď˙ňčäĺń˙ňčöĺíňîâŕ˙ ěîíĺňŕ." << endl;
				break;
			case 2:
			case 3:
			case 4:
				cout << "Ó âŕń " << cent50 << " ď˙ňčäĺń˙ňčöĺíňîâűĺ ěîíĺňű." << endl;
				break;
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 0:
				cout << "Ó âŕń " << cent50 << " ď˙ňčäĺń˙ňčöĺíňîâűő ěîíĺň." << endl;
				break;
			default:
				break;
			}
		}

		// Âűâîä ęîëč÷ĺńňâŕ îäíîäîëëîđîâűő ěîíĺň
		if (dollar1 > 10 && dollar1 < 15) {
			cout << "Ó âŕń " << dollar1 << " îäíîäîëëîđîâűő ěîíĺň." << endl;
		} else {
			switch (dollar1 % 10) {
			case 1:
				cout << "Ó âŕń " << dollar1 << " îäíîäîëëîđîâŕ˙ ěîíĺňŕ." << endl;
				break;
			case 2:
			case 3:
			case 4:
				cout << "Ó âŕń " << dollar1 << " îäíîäîëëîđîâűĺ ěîíĺňű." << endl;
				break;
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 0:
				cout << "Ó âŕń " << dollar1 << " îäíîäîëëîđîâűő ěîíĺň." << endl;
				break;
			default:
				break;
			}
		}

		// Âűâîä îáůĺăî ęîëč÷ĺńňâŕ ěîíĺň
		int all_money{ 0 }, all_dollars{ 0 }, all_cents{ 0 };
		all_money = cent1 + 5 * cent5 + 10 * cent10 + 25 * cent25 + 50 * cent50 + 100 * dollar1;
		all_dollars = all_money / 100;
		all_cents = all_money % 100;
		cout << "Îáůŕ˙ ńňîčěîńňü âŕřčő íîíĺň đŕâíŕ "
			<< all_dollars << " äîëëŕđîâ "
			<< all_cents << " öĺíňîâ." << endl;
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
