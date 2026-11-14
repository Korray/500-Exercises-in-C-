#include <iostream>
#include <iomanip>
#include <cmath>
#include <numbers>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int number, counter;
    bool A, B, C, D, X, Y, Z;
    cout << "Введите 4-х значное число: ";
    cin >> number;
    cout << "число при перестановке  справо налево " << to_string(number % 10) + to_string(number / 10 % 10) + to_string(number / 100 % 10) + to_string(number / 1000) << "\n"; // exercise 81 2.20

    cout << "Введите натуральное число(n > 9): ";
    cin >> number;
    cout << "число единиц: " << number % 10 << " число десятков: " <<  number / 10  % 10 << "\n"; // exercise 82 2.21

    cout << "Введите натуральное число(n > 99): ";
    cin >> number;
    cout << "число сотен: " << number / 100 << " число десятков: " << number / 10 % 10 << "\n"; // exercise 83 2.22

    cout << "Введите натуральное число(n > 999): ";
    cin >> number;
    cout << "число сотен: " << number / 100 % 10 << " число тысяч: " << number / 1000 << "\n"; // exercise 84 2.23

  
    A = true; B = false; C = false;
    cout << (A or B) << '\n';
    cout << (A and B) << '\n';
    cout << (C or B) << '\n'; // exercise 85 3.1

    X = false; Y = true; Z = false;
    cout << (X or Z) << '\n';
    cout << (X and Y) << '\n';
    cout << (X or Z) << '\n'; // exercise 86 3.2


    A = true; B = false; C = false;
    cout << (!A and B) << '\n';
    cout << (A or !B) << '\n';
    cout << ((A and B) or C) << '\n'; // exercise 87 3.3

    X = true; Y = true; Z = false;
    cout << !(X and Y) << '\n';
    cout << (X or !Y) << '\n';
    cout << ((X) or (Y and Z))<< '\n'; // exercise 88 3.4

    A = true; B = false; C = false;
    cout << ((A or B) and (!C)) << '\n';
    cout << ((!A) and (!B)) << '\n';
    cout << ((A and !B) or (C)) << '\n';
    cout << ((A or B) and (!C)) << '\n'; 
    cout << (!A and !B) << '\n';         
    cout << (!(A and C) or B) << '\n'; // exercise 89 3.5

    X = false; Y = false; Z = true;
    cout << ((X or Y) and (!Z)) << '\n';
    cout << (!X and !Y) << '\n';
    cout << (!(X and Z) or (Y)) << '\n';
    cout << ((X) and (!Y or Z)) << '\n';
    cout << ((X) and (!Y or Z)) << '\n'; 
    cout << ((X) or (!(Y or Z))) << '\n'; // exercise 90 3.6
}
