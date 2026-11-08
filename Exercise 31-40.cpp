#include <iostream>
#include <iomanip>
#include <cmath>
#include <numbers>
using namespace std;
int main()
{
    int c1, c2;
    cout << "1.31 Write two integers: ";
    cin >> c1 >> c2;
    cout << "arithmetic mean: " << (c1 + c2) / 2.0 << "\n";
    cout << "geometric mean: " << sqrt(c1 * c2) << "\n";

    float volume, mass;
    cout << "1.32 Write volume and mass: ";
    cin >> volume >> mass;
    cout << "density: " << mass / volume << "\n";

    float population, area;
    cout << "1.33 Write population and area: ";
    cin >> population >> area;
    cout << "density: " << population / area << "\n";

    float A, B;
    cout << "1.34 Write a and b (a != 0) for ax+b=0: ";
    cin >> A >> B;
    cout << "x = " << -B / A << "\n";

    float leg1, leg2;
    cout << "1.35 Write two legs: ";
    cin >> leg1 >> leg2;
    cout << "hypotenuse: " << sqrt(pow(leg1, 2) + pow(leg2, 2)) << "\n";

    float R1, R2;
    cout << "1.36 Write outer and inner radius: ";
    cin >> R1 >> R2;
    cout << "ring area: " << 3.14 * (pow(R1, 2) - pow(R2, 2)) << "\n";

    cout << "1.37 Write two legs: ";
    cin >> leg1 >> leg2;
    cout << "perimeter: " << leg1 + leg2 + sqrt(pow(leg1, 2) + pow(leg2, 2)) << "\n";

    float base1, base2, height;
    cout << "1.38 Write two bases and height: ";
    cin >> base1 >> base2 >> height;
    float side = sqrt(pow(height, 2) + pow((base1 - base2) / 2, 2));
    cout << "perimeter: " << base1 + base2 + 2 * side << "\n";

    int x, y;
    cout << "1.39 Write x and y: ";
    cin >> x >> y;
    z = (x + (2 + y) / (x * x)) / (y + 1 / sqrt(x * x + 10));
    float q = 2.8 * sin(x) + fabs(y);
    cout << "z = " << z << " q = " << q << "\n";

    int a, b;
    cout << "1.40 Write a and b: ";
    cin >> a >> b;
    x = (2 / (a * a + 25) + b) / (sqrt(b) + (a + b) / 2);
    y = (fabs(a) + 2 * sin(b)) / (5.5 * a);
    cout << "x = " << x << " y = " << y << "\n";


}
