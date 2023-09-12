// Exercise5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "../../std_lib_facilities.h"

int main()
{
    //setlocale(LC_ALL, "Russian");

    cout << "Введите первый операнд, символ операции (+, -, *, /, ^) и второй операнд" << '\n';
    double a, b;
    char operation;

    while (cin >> a >> operation >> b) {
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
