using namespace std;
#include <iostream>
#include <iomanip>
#include <cmath>
#include <numbers>
// https://djvu.online/file/23gApmpanVh4Y //
int main()
{
    int number;
    double p = 3.14159;

    cout << "p = " << fixed << setprecision(2) << p << '\n'; // exircise 1 1.1
    cout << "e = " << fixed << setprecision(1) << numbers::e << '\n'; // exircise 2 1.2

    cout << "Write number ";
    cin >> number;
    cout << "You entered a number " << number << '\n'; // exircise 3 1.3

    cout << "Write number ";
    cin >> number;
    cout << "Here is the number you entered " << number << '\n'; // exircise 4 1.4

    cout << "1 13 49" << '\n'; // exircise 5 1.5

    cout << "7  15  100" << '\n'; // exircise 6 1.6

    cout << "666  777  999" << '\n'; // exircise 7 1.7

    cout << "666 777 999 1111" << '\n'; // exircise 8 1.8

    cout << "50" << '\n' << "10" << '\n'; // exircise 9 1.9

    cout << "5" << '\n' << "10" << '\n' << "21"; // exircise 10 1.10


}
