#include <iostream>
#include <iomanip>
#include <cmath>
#include <numbers>
using namespace std;

int main()
{
    float e, f, g, h ,a, b, c1, c2, x, y;
    cout << "1.41 Write e, f, g, h: ";
    cin >> e >> f >> g >> h;
    a = cbrt(fabs(e - 3 / f)) + g;
    b = sin(e) + pow(cos(h), 2);
    float c = (33 * g) / (e * f - 3);
    cout << "a = " << a << " b = " << b << " c = " << c << "\n";

    cout << "1.42 Write e, f, g, h: ";
    cin >> e >> f >> g >> h;
    a = (e + f) / 3;
    b = fabs(pow(h, 2) - g);
    c = sqrt(pow(g - h, 2) - 3 * sin(e));
    cout << "a = " << a << " b = " << b << " c = " << c << "\n";

    cout << "1.43 Write two numbers: ";
    cin >> c1 >> c2;
    cout << "arithmetic mean of modules: " << (fabs((float)c1) + fabs((float)c2)) / 2 << "\n";
    cout << "geometric mean of modules: " << sqrt(fabs((float)c1 * c2)) << "\n";
    cout << "1.44 Write sides of a rectangle (a b): ";
    cin >> a >> b;
    P = 2 * (a + b);
    float diag = sqrt(a * a + b * b);
    cout << "Perimeter: " << P << " Diagonal: " << diag << "\n";

    cout << "1.45 Write two numbers (a b): ";
    cin >> a >> b;
    cout << "sum: " << a + b << " diff: " << a - b << " prod: " << a * b << " quot: " << a / b << "\n";

    cout << "1.46 Write sides of parallelepiped (a b c): ";
    cin >> a >> b >> c;
    V = a * b * c;
    S = 2 * (a * b + b * c + a * c);
    cout << "Volume: " << V << " Area: " << S << "\n";

    float x1, y1, x2, y2;
    cout << "1.47 Write coordinates of two points (x1 y1 x2 y2): ";
    cin >> x1 >> y1 >> x2 >> y2;
    cout << "Distance: " << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) << "\n";

    cout << "1.48 Write bases and height of trapezoid (a b h): ";
    cin >> a >> b >> h;
    float side_tr = sqrt(pow(h, 2) + pow((a - b) / 2, 2));
    cout << "Perimeter: " << a + b + 2 * side_tr << "\n";

    float angle_deg;
    cout << "1.49 Write bases and angle (degrees) (a b angle): ";
    cin >> a >> b >> angle_deg;
    float rad = angle_deg * 3.14159 / 180.0;
    cout << "Area: " << ((a + b) / 2) * (fabs(a - b) / 2) * tan(rad) << "\n";

    cout << "1.50 Write coordinates of triangle (x1 y1 x2 y2 x3 y3): ";
    cin >> x1 >> y1 >> x2 >> y2 >> x >> y;
    float s1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    float s2 = sqrt(pow(x - x2, 2) + pow(y - y2, 2));
    float s3 = sqrt(pow(x1 - x, 2) + pow(y1 - y, 2));
    float p_tri = s1 + s2 + s3;
    float s_tri = sqrt(p_tri / 2 * (p_tri / 2 - s1) * (p_tri / 2 - s2) * (p_tri / 2 - s3));
    cout << "Perimeter: " << p_tri << " Area: " << s_tri << "\n";
}
