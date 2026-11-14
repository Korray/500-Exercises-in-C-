#include <iostream>
#include <iomanip>
#include <cmath>
#include <numbers>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int number;
    cout << "Введите 2-х значное число: ";
    cin >> number;
    cout << "число десятков " << number / 10 << "\n";
    cout << "число единиц " << number % 10 << "\n";
    cout << "число сумма его цифр " << number / 10 + number % 10 << "\n";
    cout << "произведение его цифр " << number % 10 * number / 10 << "\n"; // exercise 71 2.10

    cout << "Write number: ";
    cin >> number;
    cout << "число при перестановке " << to_string(number % 10) + to_string(number / 10) << "\n"; // exercise 72 2.11

    cout << "Введите 3-х значное число: ";
    cin >> number;
    cout << "число десятков " << number / 10 << "\n";
    cout << "число единиц " << number % 10 << "\n";
    cout << "число сумма его цифр " << number / 10 + number % 10 << "\n";
    cout << "произведение его цифр " << number % 10 * number / 10 << "\n"; // exercise 73 2.12

    cout << "Введите 3-х значное число: ";
    cin >> number;
    cout << "число при перестановке  справо налево " << to_string(number % 10) + to_string(number / 10 % 10) + to_string(number / 100) << "\n"; // exercise 74 2.13

    cout << "Введите 3-х значное число: ";
    cin >> number;
    cout << "Зачеркнули последнию цифру слева и добавили в конец " << to_string(number / 10 % 10) + to_string(number % 10) + to_string(number / 100) << "\n"; // exercise 75 2.14

    cout << "Введите 3-х значное число: ";
    cin >> number;
    cout << "Зачеркнули последнию цифру справа и добавили в конец " << to_string(number % 10) + to_string(number / 10 % 10) + to_string(number / 100) << "\n"; // exercise 76 2.15

    cout << "Введите 3-х значное число: ";
    cin >> number;
    cout << "Зачеркнули последнию цифру справа и добавили в конец " << to_string(number / 10 % 10) + to_string(number / 100) + to_string(number % 10) << "\n"; // exercise 77 2.16

    cout << "Введите 3-х значное число: ";
    cin >> number;
    cout << "Зачеркнули последнию цифру справа и добавили в конец " << to_string(number / 100) + to_string(number % 10) + to_string(number / 10 % 10) << "\n"; // exercise 78 2.17

    cout << "Введите 3-х значное число: ";
    cin >> number;
    cout << "число при перестановке  справо налево " << to_string(number % 10) + to_string(number / 10 % 10) + to_string(number / 100) << "\n";
    cout << "Зачеркнули последнию цифру слева и добавили в конец " << to_string(number / 10 % 10) + to_string(number % 10) + to_string(number / 100) << "\n";
    cout << "Зачеркнули последнию цифру справа и добавили в конец " << to_string(number % 10) + to_string(number / 10 % 10) + to_string(number / 100) << "\n";
    cout << "Зачеркнули последнию цифру справа и добавили в конец " << to_string(number / 10 % 10) + to_string(number / 100) + to_string(number % 10) << "\n";
    cout << "Зачеркнули последнию цифру справа и добавили в конец " << to_string(number / 100) + to_string(number % 10) + to_string(number / 10 % 10) << "\n"; // exercise 79 2.18

    cout << "Введите 4-х значное число: ";
    cin >> number;
    cout << "суммае его цифр " << number / 1000 + number / 100 % 10 +  number / 10 % 10 + number % 10 << "\n";
    cout << "произведение его цифр " << (number / 1000) * (number / 100 % 10) * (number / 10 % 10) * (number % 10) << "\n"; // exercise 80 2.19

}
