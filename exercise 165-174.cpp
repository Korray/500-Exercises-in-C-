#include <iostream>
#include <iomanip>
#include <cmath>
#include <numbers>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    bool A, B, C, D;
    
    double x_85 = -2.0, y_85;
    A = (x_85 < -1); B = (x_85 > -1); C = (x_85 == -1);
    if (A) y_85 = -1.0;
    if (B) y_85 = x_85;
    if (C) y_85 = 1.0;
    cout << "4.85: y = " << y_85 << '\n'; // exercise 165 4.85

    double a_86 = 0.0, z_86;
    A = (a_86 > 0); B = (a_86 == 0); C = (a_86 < 0);
    if (A) z_86 = 1.0;
    if (B) z_86 = 0.0;
    if (C) z_86 = -1.0;
    cout << "4.86: z = " << z_86 << '\n'; // exercise 166 4.86

    double x_87 = 0.5, f_87;
    A = (x_87 <= 0); B = (x_87 > 0) and (x_87 <= 1); C = (x_87 > 1);
    if (A) f_87 = 0.0;
    if (B) f_87 = x_87;
    if (C) f_87 = x_87 * x_87;
    cout << "4.87: f = " << f_87 << '\n'; // exercise 167 4.87

    double y_88 = 3.0, f_88;
    A = (y_88 > 2); B = (y_88 > 0) and (y_88 <= 2); C = (y_88 <= 0);
    if (A) f_88 = 2.0;
    if (B) f_88 = 0.0;
    if (C) f_88 = -3.0 * y_88;
    cout << "4.88: f = " << f_88 << '\n'; // exercise 168 4.88

    double x_89 = 2.0, k_89, f_89;
    A = (sin(x_89) < 0); B = (sin(x_89) >= 0);
    if (A) k_89 = x_89 * x_89;
    if (B) k_89 = abs(x_89);
    C = (k_89 < x_89); D = (k_89 >= x_89);
    if (C) f_89 = k_89 * x_89;
    if (D) f_89 = k_89 + x_89;
    cout << "4.89: f = " << f_89 << '\n'; // exercise 169 4.89

    double x_90 = 2.0, k_90, f_90;
    A = (sin(x_90) >= 0); B = (sin(x_90) < 0);
    if (A) k_90 = x_90 * x_90;
    if (B) k_90 = abs(x_90);
    C = (x_90 < k_90); D = (x_90 >= k_90);
    if (C) f_90 = abs(x_90);
    if (D) f_90 = k_90 * x_90;
    cout << "4.90: f = " << f_90 << '\n'; // exercise 170 4.90

    double x_91a = -0.5, y_91a;
    A = (x_91a < -1); B = (x_91a >= -1) and (x_91a <= 0); C = (x_91a > 0);
    if (A) y_91a = 0.0;
    if (B) y_91a = x_91a + 1.0;
    if (C) y_91a = 1.0;
    cout << "4.91 a): y = " << y_91a << '\n'; // exercise 171 4.91

    double x_91b = 0.5, y_91b;
    A = (x_91b < -1); B = (x_91b >= -1) and (x_91b <= 1); C = (x_91b > 1);
    if (A) y_91b = 1.0;
    if (B) y_91b = -x_91b;
    if (C) y_91b = -1.0;
    cout << "4.91 б): y = " << y_91b << '\n'; // exercise 172 4.91

    double x_91v = 0.0, y_91v;
    A = (x_91v < -1); B = (x_91v >= -1) and (x_91v <= 0); C = (x_91v > 0) and (x_91v <= 1); D = (x_91v > 1);
    if (A) y_91v = 1.0;
    if (B) y_91v = x_91v + 1.0;
    if (C) y_91v = 1.0 - x_91v;
    if (D) y_91v = 1.0;
    cout << "4.91 в): y = " << y_91v << '\n'; // exercise 173 4.91

    double x_92 = 3.0, y_92 = 2.0;
    A = (x_92 < 1); B = (x_92 >= 1) and (x_92 <= 5); C = (x_92 > 5);
    cout << "4.92: ";
    if (A) cout << "Область I\n";
    if (B) cout << "Область II\n";
    if (C) cout << "Область III\n"; // exercise 174 4.92

    return 0;
}
