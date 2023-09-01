// Exercise6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "../../../std_lib_facilities.h"

int main() {
    setlocale(LC_ALL, "Russian");

    string a, b, c;
    cout << "¬ведите три строки: ";
    while (cin >> a >> b >> c) {
        if (a < b) {
            if (b < c) {
                // a < b < c
                cout << a << ' ' << b << ' ' << c << endl;
            } else {
                // a < b
                // c <= b
                if (a < c) {
                    // a < c <= b
                    cout << a << ' ' << c << ' ' << b << endl;
                } else {
                    // c <= a < b
                    cout << c << ' ' << a << ' ' << b << endl;
                }
            }
        } else {
            // b <= a
            if (b < c) {
                // b <= a
                // b < c
                if (a < c) {
                    // b <= a < c
                    cout << b << ' ' << a << ' ' << c << endl;
                } else {
                    // b < c <= a
                    cout << b << ' ' << c << ' ' << a << endl;
                }
            } else {
                // c <= b <= a
                cout << c << ' ' << b << ' ' << a << endl;
            }
        }

        cout << "¬ведите три числа: ";
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
