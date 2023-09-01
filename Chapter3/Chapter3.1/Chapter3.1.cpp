﻿// Chapter3.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "../../../std_lib_facilities.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Please enter float value (Пожалуйста, введите число с плавающей точкой): ";
    int n;
    cin >> n;
    cout << "n = " << n
        << "\nn + 1 = " << n+1
        << "\nтри раза по n = " << 3*n
        << "\nдва раза по n = " << n+n
        << "\nn в квадрате = " << n*n
        << "\nполовина n = " << n/2
        << "\nкорень квадратный из n = " << sqrt(double(n))
        << '\n'; // Переход на новую строку

    char c = '4';
    cout << "char c = " << c << "\n";
    int a = (int)c;
    cout << "int a = " << a << "\n";

    char c2 = (char)33;
    cout << "char c2 = " << c2 << "\n";
    int a2 = (int)c2;
    cout << "int a2 = " << a2 << "\n";

    auto b = 1.5e-300l;
    cout << b << "\n";

    auto d = 0b00000101;
    cout << d << "\n";

    cout << "sizeof(int) = " << sizeof(int) << '\n';


}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.