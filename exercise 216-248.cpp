#include <iostream>
#include <iomanip>
#include <cmath>
#include <numbers>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    for (int i = 1; i <= 10; i++) {
        cout << 20 << " ";
    }
    cout << '\n'; // exercise 217 5.1

    int num_2 = 5, count_2 = 3;
    for (int i = 1; i <= count_2; i++) {
        cout << num_2 << " ";
    }
    cout << '\n'; // exercise 218 5.2

    for (int i = 20; i <= 35; i++) {
        cout << i << '\n';
    } // exercise 219 5.3

    int b_3b = 12;
    for (int i = 10; i <= b_3b; i++) {
        cout << i * i << '\n';
    } // exercise 220 5.3

    int a_3v = 10;
    for (int i = a_3v; i <= 50; i++) {
        cout << i * i * i << '\n';
    } // exercise 221 5.3

    int a_3g = 5, b_3g = 8;
    for (int i = a_3g; i <= b_3g; i++) {
        cout << i << '\n';
    } // exercise 222 5.3

    for (int i = 10; i <= 25; i++) {
        cout << fixed << setprecision(1) << i << " " << (i + 0.4) << '\n';
    } // exercise 223 5.4

    for (int i = 25; i <= 35; i++) {
        cout << fixed << setprecision(1) << i << " " << (i + 0.5) << " " << (i - 0.2) << '\n';
    } // exercise 224 5.4

    for (int i = 21; i >= 10; i--) {
        cout << fixed << setprecision(1) << i << " " << (i - 1.8) << '\n';
    } // exercise 225 5.5

    for (int i = 45; i >= 25; i--) {
        cout << fixed << setprecision(1) << i << " " << (i - 0.5) << " " << (i - 0.8) << '\n';
    } // exercise 226 5.5

    for (int i = 21; i <= 35; i++) {
        cout << fixed << setprecision(1) << i << " " << (i - 0.6) << '\n';
    } // exercise 227 5.6

    for (int i = 16; i <= 24; i++) {
        cout << fixed << setprecision(1) << i << " " << (i - 0.5) << " " << (i + 0.8) << '\n';
    } // exercise 228 5.6

    double price_7 = 20.4;
    for (int i = 2; i <= 20; i++) {
        cout << i << " шт. = " << (i * price_7) << " руб.\n";
    } // exercise 229 5.7

    for (int i = 1; i <= 10; i++) {
        cout << i << " фунт = " << (i * 0.453) << " кг\n";
    } // exercise 230 5.8

    for (int i = 10; i <= 22; i++) {
        cout << i << " дюйм = " << (i * 2.54) << " см\n";
    } // exercise 231 5.9

    double rate_10 = 90.0;
    for (int i = 1; i <= 20; i++) {
        cout << i << " доллар = " << (i * rate_10) << " руб.\n";
    } // exercise 232 5.10

    double R_11 = 6350.0;
    for (int h = 1; h <= 10; h++) {
        double dist_11 = sqrt(2 * R_11 * h + h * h);
        cout << "Высота " << h << " км: " << dist_11 << " км\n";
    } // exercise 233 5.11

    double p0 = 1.29, z = 1.25e-4;
    for (int h = 0; h <= 1000; h += 100) {
        cout << "h = " << h << " м, p = " << (p0 * exp(-z * h)) << '\n';
    } // exercise 234 5.12

    for (int i = 1; i <= 9; i++) {
        cout << i << " x 7 = " << (i * 7) << '\n';
    } // exercise 235 5.13

    for (int i = 1; i <= 9; i++) {
        cout << "9 x " << i << " = " << (i * 9) << '\n';
    } // exercise 236 5.14

    int n_15 = 4;
    for (int i = 1; i <= 9; i++) {
        cout << n_15 << " x " << i << " = " << (i * n_15) << '\n';
    } // exercise 237 5.15

    for (int i = 2; i <= 20; i++) {
        cout << "sin " << i << " = " << sin(i) << '\n';
    } // exercise 238 5.16

    for (int x = 4; x <= 28; x++) {
        double t_17 = x + 2.0;
        double y_17 = 2.0 * t_17 * t_17 + 5.5 * t_17 - 2.0;
        cout << "x = " << x << ", y = " << y_17 << '\n';
    } // exercise 239 5.17

    for (int a = 2; a <= 17; a++) {
        double t_18 = 4.0 * a;
        double z_18 = 3.5 * t_18 * t_18 - 7.0 * t_18 + 16.0;
        cout << "a = " << a << ", z = " << z_18 << '\n';
    } // exercise 240 5.18

    for (double x = 0.1; x <= 1.05; x += 0.1) {
        cout << "sin " << x << " = " << sin(x) << '\n';
    } // exercise 241 5.19

    for (double x = 0.1; x <= 0.95; x += 0.1) {
        cout << "sqrt " << x << " = " << sqrt(x) << '\n';
    } // exercise 242 5.20

    double price_21 = 500.0;
    for (int g = 50; g <= 1000; g += 50) {
        cout << g << " г = " << (price_21 * g / 1000.0) << " руб.\n";
    } // exercise 243 5.21

    double price_22 = 300.0;
    for (int g = 100; g <= 2000; g += 100) {
        cout << g << " г = " << (price_22 * g / 1000.0) << " руб.\n";
    } // exercise 244 5.22

    for (double i = 2.1; i <= 2.85; i += 0.1) {
        cout << fixed << setprecision(1) << i << '\n';
    } // exercise 245 5.23

    for (double i = 3.2; i <= 3.95; i += 0.1) {
        cout << fixed << setprecision(1) << i << '\n';
    } // exercise 246 5.24

    for (double i = 2.2; i <= 4.25; i += 0.2) {
        cout << fixed << setprecision(1) << i << '\n';
    } // exercise 247 5.25

    for (double i = 4.4; i <= 6.45; i += 0.2) {
        cout << fixed << setprecision(1) << i << '\n';
    } // exercise 248 5.26

    return 0;
}
