// Exercise5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "../../std_lib_facilities.h"

int main() {
    //setlocale(LC_ALL, "Russian");

    vector<string> nums_str = { "zero", "one", "two", "three", "four",
                            "five", "six", "seven", "eight", "nine" };
    vector<string> nums = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };

    cout << "Введите первый операнд, символ операции (+, -, *, /, ^) и второй операнд" << '\n';
    string a_input, b_input;
    int a, b;
    char operation;

    while (cin >> a_input >> operation >> b_input) {
        // Checking if the input is correct
        // Checking if the a number input is correct
        bool is_a_input_correct_number = false;
        for (int i = 0; i < nums_str.size(); i++) {
            if (a_input == nums_str[i]) {
                is_a_input_correct_number = true;
                a = i;
                break;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (a_input == nums[i]) {
                is_a_input_correct_number = true;
                a = i;
                break;
            }
        }
        if (!is_a_input_correct_number) {
            cout << "Введено некорректное значение." << endl;
            continue;
        }
        bool is_b_input_correct_number = false;
        // Checking if the b number input is correct
        for (int i = 0; i < nums_str.size(); i++) {
            if (b_input == nums_str[i]) {
                is_b_input_correct_number = true;
                b = i;
                break;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (b_input == nums[i]) {
                is_b_input_correct_number = true;
                b = i;
                break;
            }
        }
        if (!is_b_input_correct_number) {
            cout << "Введено некорректное значение." << endl;
            continue;
        }


        int result;
        switch (operation) {
        case '+':
            cout << "Сумма " << a << " и " << b << " равна " << a + b << endl;
            break;
        case '-':
            cout << "Разность " << a << " и " << b << " равна " << a - b << endl;
            break;
        case '*':
            cout << "Произведение " << a << " и " << b << " равно " << a * b << endl;
            break;
        case '/':
            cout << "Частное от делимого " << a << " и делитетя " << b << " равно " << a / b << endl;
            break;
        case '^':
            cout << "Степень при основании " << a << " и показателе степени " << b << " равна " << pow(a, b) << endl;
            break;
        default:
            cout << "Введена недопустимая операция" << endl;
            continue;
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
