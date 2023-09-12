// Chapter4.6.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "../../std_lib_facilities.h"

int main()
{
    //setlocale(LC_ALL, "Russian");
	
	vector<string> disliked = { "Broccoli", "Peas"}; // Нежелательные слова

	// Ввод слов
    vector<string> words;
	for (string temp; cin>>temp;) {
		words.push_back(temp);
	}

	sort(words);

	for (int i = 0; i < words.size(); i++) {
		if (i == 0 || words[i - 1] != words[i]) {// Это новое слово?
			bool there_is_disliked = false;
			for (int j = 0; j < disliked.size(); j++) { // Проверка наличия нежелательных слов
				if (words[i] == disliked[j]) {          //
					there_is_disliked = true;
					break;
				}
			}
			if (!there_is_disliked) {
				cout << words[i] << endl;
			}
		}
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
