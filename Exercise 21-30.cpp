using namespace std;
#include <iostream>
#include <iomanip>
#include <cmath>
#include <numbers>

int main()
{
    float a, b;
    a = 5.8;
    b = -7.9;
    b = a;
    a = b;
    cout << a << "\n" << b << "\n"; // exercise 21 1.21

    float y, x;
    cout << "Write x: ";
    cin >> x;
    y = 7 * pow(x, 2) - 3 * x + 6;
    cout << "y = " << y << "\n";
    cout << "Write y: ";
    cin >> y;
    x = 12 * pow(a, 2) + 7 * a - 16;
    cout << "x = " << x << "\n"; // exercise 22 1.22

    cout << "Write a: ";
    cin >> a;
    y = (pow(a, 2) + 10) / sqrt(pow(a, 2) + 1); // exercise 23 1.23
    cout << "y = " << y << "\n";

    cout << "Write a: ";
    cin >> a;
    x = sqrt( (2 * a + sin(fabs(3 * a) ) / 3.56));
    cout << "x = " << x << "\n";
    cout << "Write x: ";
    cin >> x;
    y = sin( (3.2 + sqrt(1 + x) ) / fabs(5 * x) );
    cout << "y = " << y << "\n"; // exercise 24 1.24


    cout << "side of a square ";
    cin >> a;
    int P;
    P = a * 4;
    cout << "P of a square " << P << "\n"; // exercise 25 1.25

    int R, D;
    cout << "Write R: ";
    cin >> R;
    D = R * 2;
    cout << "diameter of a circle: " << D << "\n"; //exerecise 26 1.26

    R = 6350;
    int AC, h;
    cout << "Write h: ";
    cin >> h;
    AC = sqrt(h * (2 * R + h));
    cout << "answer " << AC << "\n"; //exerecise 27 1.27

    cout << "Write : ";
    cin >> a;
    int S, V;
    V = a * a * a;
    S = pow(a, 2) * 4;
    cout << "Volume of a cube: " << V << " Lateral surface area: " << S << "\n"; // exercise 28 1.28

    int C;
    cout << "Write R: ";
    cin >> R;
    C = 2 * 3.14 * R;
    S = 3.14 * pow(R, 2);
    cout << "Circumference of a circle: " << C << " Area of ​​a circle: " << S << "\n"; // exercise 29 1.29

    float z;
    cout << "Write x: ";
    cin >> x;
    cout << "Write y: ";
    cin >> y;
    z = pow(x, 3) - 2.5 * x * y + 1.78 * pow(x, 2) - 2.5 * y + 1;
    cout << "Write a: ";
    cin >> a;
    cout << "Write b: ";
    cin >> b;
    x = 3.56 * a * pow(b, 3) - 5, 8 * pow(b, 2) + 3.8 * a - 1.5;
    cout << "Z = " << z << " X = " << x; // exercise 30 1.30

}
