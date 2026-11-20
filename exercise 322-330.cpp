#include <iostream>
#include <iomanip>
#include <cmath>
#include <numbers>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int n_88 = 5;
    int sum_88 = 0;
    int start_88 = n_88 * (n_88 - 1) + 1;
    for (int i = 0; i < n_88; i++) {
        sum_88 = sum_88 + (start_88 + 2 * i);
    }
    cout << "5.88: " << n_88 << "^3 = " << sum_88 << '\n'; // exercise 322 5.88

    int n_89 = 5;
    long long fact_89 = 1;
    long long sum_89 = 0;
    for (int i = 1; i <= n_89; i++) {
        fact_89 = fact_89 * i;
        sum_89 = sum_89 + fact_89;
    }
    cout << "5.89: Сумма факториалов = " << sum_89 << '\n'; // exercise 323 5.89

    int n_90 = 5;
    long long fact_90 = 1;
    double sum_90 = 1.0;
    for (int i = 1; i <= n_90; i++) {
        fact_90 = fact_90 * i;
        sum_90 = sum_90 + (1.0 / fact_90);
    }
    cout << "5.90: Сумма = " << sum_90 << '\n'; // exercise 324 5.90

    int n_91 = 5;
    double x_91 = 2.0;
    long long fact_91 = 1;
    double term_91 = 1.0;
    double sum_91 = 1.0;
    for (int i = 1; i <= n_91; i++) {
        fact_91 = fact_91 * i;
        term_91 = term_91 * x_91;
        sum_91 = sum_91 + (term_91 / fact_91);
    }
    cout << "5.91: Сумма = " << sum_91 << '\n'; // exercise 325 5.91

    double sum_92 = 0.0;
    for (int i = 1; i <= 50; i++) {
        sum_92 = sum_92 + sqrt(i);
    }
    cout << "5.92: Сумма корней = " << sum_92 << '\n'; // exercise 326 5.92

    int n_93 = 5;
    double sum_93a = 0.0;
    double sum_sin_93 = 0.0;
    for (int i = 1; i <= n_93; i++) {
        sum_sin_93 = sum_sin_93 + sin(i);
        sum_93a = sum_93a + (1.0 / sum_sin_93);
    }
    cout << "5.93 a): Сумма = " << sum_93a << '\n';

    double val_93b = 0.0;
    for (int i = 0; i < n_93; i++) {
        val_93b = sqrt(2.0 + val_93b);
    }
    cout << "5.93 б): Значение = " << val_93b << '\n';

    double sum_93v = 0.0;
    double sum_sin_93v = 0.0;
    double sum_cos_93v = 0.0;
    for (int i = 1; i <= n_93; i++) {
        sum_sin_93v = sum_sin_93v + sin(i);
        sum_cos_93v = sum_cos_93v + cos(i);
        sum_93v = sum_93v + (sum_cos_93v / sum_sin_93v);
    }
    cout << "5.93 в): Сумма = " << sum_93v << '\n';

    double val_93g = 0.0;
    for (int i = n_93; i >= 1; i--) {
        val_93g = sqrt(3.0 * i + val_93g);
    }
    cout << "5.93 г): Значение = " << val_93g << '\n'; // exercise 327 5.93

    long long num_94 = 123456;
    int sum_94 = 0;
    long long temp_94 = num_94;
    for (int i = 0; i < 6; i++) {
        sum_94 = sum_94 + (temp_94 % 10);
        temp_94 = temp_94 / 10;
    }
    cout << "5.94: Сумма цифр = " << sum_94 << '\n'; // exercise 328 5.94

    long long num_95 = 987654321;
    int n_95 = 4;
    int sum_95 = 0;
    long long temp_95 = num_95;
    for (int i = 0; i < n_95; i++) {
        sum_95 = sum_95 + (temp_95 % 10);
        temp_95 = temp_95 / 10;
    }
    cout << "5.95: Сумма последних цифр = " << sum_95 << '\n'; // exercise 329 5.95

    double L_96 = 4.5, dist_96 = 3.0;
    for (double x = 3.0; x <= L_96; x += 0.2) {
        double angle_rad = acos(x / L_96);
        double angle_deg = angle_rad * 180.0 / numbers::pi;
        cout << "5.96: Расстояние " << x << " м, угол = " << angle_deg << " град.\n";
    } // exercise 330 5.96

    return 0;
}
