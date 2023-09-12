

#include "../../std_lib_facilities.h"

int main()
{
    std::string name;
    int score;
	vector<std::string> names;
	vector<int> scores;

	std::cout << "Enter your name and score: ";
	while (cin >> name >> score) {
		if (name == "NoName" && score == 0) {
			break;
		}

		// Check if the name is already in the vector
		bool flag_already_in_vector = false;
		for (int i = 0; i < names.size(); i++) {
			if (name == names[i]) {
				flag_already_in_vector = true;
			}
		}
		if (!flag_already_in_vector) {
			names.push_back(name);
			scores.push_back(score);
		} else {
			std::cout << "Name already in vector" << std::endl;
		}
		std::cout << "Enter your name and score: ";
	}

	for (int i = 0; i < names.size(); i++) {
		std::cout << names[i] << " " << scores[i] << std::endl;
	}

	// Find the score of a name
	std::string name_to_find;
	std::cout << "Enter name to find out its score: ";
	std::cin >> name_to_find;
	bool flag_is_name_found = false;
	for (int i = 0; i < names.size(); i++) {
		if (name_to_find == names[i]) {
			std::cout << scores[i] << std::endl;
			flag_is_name_found = true;
			break;
		}
	}
	if (!flag_is_name_found) {
		std::cout << "Name not found" << std::endl;
	}


	int score_to_find;
	std::cout << "Enter score to find out its names: ";
	std::cin >> score_to_find;
	bool flag_is_score_found = false;
	for (int i = 0; i < scores.size(); i++) {
		if (score_to_find == scores[i]) {
			std::cout << names[i] << std::endl;
			flag_is_score_found = true;
		}
	}
	if (!flag_is_score_found) {
		std::cout << "Scores not found" << std::endl;
	}
}
