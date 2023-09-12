// Chapter4.4.1.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "../../std_lib_facilities.h"

int main()
{
    //setlocale(LC_ALL, "Russian");
    
    // Перевод гривен, рублей или юаней в доллары
    // Курс 
    // 100 р в долларе
    constexpr double ruble_per_dollar = 100;
    // 4 юаня в долларе
    constexpr double uan_per_dollar = 4;
    // 250 гривен в долларе
    constexpr double grivn_per_dollar = 200;
    double amount = 1;
    char unit = ' '; // пробел - не единица измерения
    cout << "Пожалуйста, введите сумму денег и валюту (r - рубль, u - юань или g - гривна): \n"; 
    cin >> amount >> unit;
    if (unit == 'r')
        cout << amount << " рублей == " << amount / ruble_per_dollar << " долларов" << endl;
    else if (unit == 'u')
        cout << amount << " юаней == " << amount / uan_per_dollar << " долларов" << endl;
    else if (unit == 'g')
        cout << amount << " гривен == " << amount / grivn_per_dollar << " долларов" << endl;
    else
        cout << "Извините, я не знаю, что такое " << unit <<  "\n";
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
