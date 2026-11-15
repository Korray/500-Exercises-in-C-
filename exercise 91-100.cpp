#include <iostream>
#include <iomanip>
#include <cmath>
#include <numbers>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    bool A, B, C, D, X, Y, Z;
    X = false; Y = false; Z = false;
    cout << ((!X or !Y) or (!Z)) << '\n';
    cout << ((!X or X) and (Y and Z)) << '\n';
    cout << (((X or_eq Y) and (!Z)) and Z) << '\n'; // exercise 91 3.8

    X = true; Y = false; Z = false;
    cout << ((!X or !Y) or (!Z)) << '\n';
    cout << ((!X or X) and (Y and Z)) << '\n';
    cout << (((X or_eq Y) and (!Z)) and Z) << '\n'; // exercise 92 3.9

    A = false; B = false; C = true;
    cout << (((!A) or (!B)) and (!C)) << '\n';
    cout << (((!A) or (!B)) and (A or B) and (A or B)) << '\n';
    cout << ((A and B) or (A and C) or (!C)) << '\n'; // exercise 92 3.10

    int x, y;
    x = 1; y = -1;
    cout << ((x * x + y * y) <= 4) << '\n'; 
    x = 1; y = 2;
    cout << ((x >= 0) or (y * y != 4)) << '\n';
    x = 1; y = 2;
    cout << ((x >= 0) and (y * y != 4)) << '\n'; 
    x = 2; y = 1;
    cout << ((x * y != 0) and (y > x)) << '\n'; 
    x = 2; y = 1;
    cout << ((x * y != 0) or (y < x)) << '\n'; 
    x = 2; y = 1;
    cout << ((!(x * y < 0)) and (y > x)) << '\n'; 
    x = 1; y = 2;
    cout << ((!(x * y < 0)) or (y > x)) << '\n'; // exercise  93 3.11 

  
    x = 1; y = -1;
    cout << ((x * x - y * y) <= 0) << '\n'; 
    x = 2; y = -2;
    cout << ((x >= 2) or (y * y != 4)) << '\n'; 
    x = 2; y = 2;
    cout << ((x >= 0) and (y * y > 4)) << '\n'; 
    x = 1; y = 2;
    cout << ((x * y != 4) and (y > x)) << '\n'; 
    x = 2; y = 1;
    cout << ((x * y != 0) or (y < x)) << '\n'; 
    x = 1; y = 2;
    cout << ((!(x * y < 1)) and (y > x)) << '\n'; 
    x = 2; y = 1;
    cout << ((!(x * y < 0)) or (y > x)) << '\n'; // exercise  94 3.12 

   
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            A = i; B = j;
            cout << "A=" << A << " B=" << B << " | ";
            cout << (!(A and B)) << " ";
            cout << (!A or B) << " ";
            cout << (A or !B) << '\n'; // exercise 95 3.13 
        }
    }

    
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            X = i; Y = j;
            cout << "X=" << X << " Y=" << Y << " | ";
            cout << (!(X or Y)) << " ";
            cout << (!X and Y) << " ";
            cout << (X and !Y) << '\n'; // exercise 96 3.14
        }
    }

    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            A = i; B = j;
            cout << "A=" << A << " B=" << B << " | ";
            cout << (!A or !B) << " ";
            cout << (A and (A or !B)) << " ";
            cout << ((!A or B) and B) << '\n'; // exercise  97 3.16
        }
    }
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            X = i; Y = j;
            cout << "X=" << X << " Y=" << Y << " | ";
            cout << (!(X and !Y) or X) << " ";
            cout << (Y and !X or !Y) << " ";
            cout << (!Y and !X or Y) << '\n'; // exercise 98 3.18 
        }
    }
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            A = i; B = j;
            cout << "A=" << A << " B=" << B << " | ";
            cout << (!(!A and !B) and A) << " ";
            cout << (!(!A or !B) or A) << " ";
            cout << (!(!A or !B) and B) << '\n'; // exercise 99 3.19 
        }
    }
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            for (int k = 0; k <= 1; k++) {
                A = i; B = j; C = k;
                cout << "A=" << A << " B=" << B << " C=" << C << " | ";
                cout << (!(A or (!B and C))) << " ";
                cout << (A and !(B and !C)) << " ";
                cout << (!(!A or (B and C))) << '\n'; // exercise 100 3.21 
            }
        }
    }

}
