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
    
    double x_71 = 5.5, y_71 = 3.3;
    double max_71, min_71;
    A = (x_71 > y_71);
    if (A) { max_71 = x_71; min_71 = y_71; }
    if (!A) { max_71 = y_71; min_71 = x_71; }
    cout << "4.71: max = " << max_71 << ", min = " << min_71 << '\n'; // exercise 151 4.71

    double a_72 = 1.1, b_72 = 2.2, c_72 = 3.3;
    double max_72 = a_72, min_72 = a_72;
    if (b_72 > max_72) max_72 = b_72;
    if (c_72 > max_72) max_72 = c_72;
    if (b_72 < min_72) min_72 = b_72;
    if (c_72 < min_72) min_72 = c_72;
    cout << "4.72: max = " << max_72 << ", min = " << min_72 << '\n'; // exercise 152 4.72

    double a_73 = 1.1, b_73 = 2.2, c_73 = 3.3, d_73 = 4.4;
    double max_73 = a_73, min_73 = a_73;
    if (b_73 > max_73) max_73 = b_73;
    if (c_73 > max_73) max_73 = c_73;
    if (d_73 > max_73) max_73 = d_73;
    if (b_73 < min_73) min_73 = b_73;
    if (c_73 < min_73) min_73 = c_73;
    if (d_73 < min_73) min_73 = d_73;
    cout << "4.73: max = " << max_73 << ", min = " << min_73 << '\n'; // exercise 153 4.73

    double num_74 = -5.5;
    double abs_74 = num_74;
    A = (num_74 < 0);
    if (A) abs_74 = -num_74;
    cout << "4.74: Абсолютная величина = " << abs_74 << '\n'; // exercise 154 4.74

    double x_75 = 3.0, y_75 = -4.0;
    double abs_x = x_75, abs_y = y_75;
    if (abs_x < 0) abs_x = -abs_x;
    if (abs_y < 0) abs_y = -abs_y;
    cout << "4.75: Полусумма = " << (abs_x + abs_y) / 2.0 << ", Корень произведения = " << sqrt(abs_x * abs_y) << '\n'; // exercise 155 4.75

    double x_76 = 10.0, y_76 = 5.0;
    double abs_x_76 = x_76; if (abs_x_76 < 0) abs_x_76 = -abs_x_76;
    double abs_y_76 = y_76; if (abs_y_76 < 0) abs_y_76 = -abs_y_76;
    A = (abs_x_76 > abs_y_76);
    if (A) x_76 = x_76 / 2.0;
    cout << "4.76: Первое число = " << x_76 << '\n'; // exercise 156 4.76

    double x_77 = 10.0, y_77 = 4.0;
    A = (sqrt(y_77) < x_77);
    if (A) y_77 = y_77 * 5.0;
    cout << "4.77: Второе число = " << y_77 << '\n'; // exercise 157 4.77

    int x_78 = 1, y_78 = 2, z_78 = 3;
    cout << "4.78: Четные числа: ";
    if (x_78 % 2 == 0) cout << x_78 << " ";
    if (y_78 % 2 == 0) cout << y_78 << " ";
    if (z_78 % 2 == 0) cout << z_78 << " ";
    cout << '\n'; // exercise 158 4.78

    double x_79 = -2.0, y_79 = 3.0, z_79 = 4.0;
    cout << "4.79: Квадраты неотрицательных: ";
    if (x_79 >= 0) cout << (x_79 * x_79) << " ";
    if (y_79 >= 0) cout << (y_79 * y_79) << " ";
    if (z_79 >= 0) cout << (z_79 * z_79) << " ";
    cout << '\n'; // exercise 159 4.79

    double a_80 = 2.0, b_80 = 4.0, c_80 = 0.5;
    cout << "4.80: В интервале (1.6-3.8): ";
    if (a_80 > 1.6 and a_80 < 3.8) cout << a_80 << " ";
    if (b_80 > 1.6 and b_80 < 3.8) cout << b_80 << " ";
    if (c_80 > 1.6 and c_80 < 3.8) cout << c_80 << " ";
    cout << '\n';
    cout << "4.80: В интервале (0.7-5.1): ";
    if (a_80 > 0.7 and a_80 < 5.1) cout << a_80 << " ";
    if (b_80 > 0.7 and b_80 < 5.1) cout << b_80 << " ";
    if (c_80 > 0.7 and c_80 < 5.1) cout << c_80 << " ";
    cout << '\n'; // exercise 160 4.80

    double a_81 = -1.0, b_81 = 2.0, c_81 = -3.0, d_81 = -4.0;
    int count_81 = 0;
    if (a_81 < 0) count_81 = count_81 + 1;
    if (b_81 < 0) count_81 = count_81 + 1;
    if (c_81 < 0) count_81 = count_81 + 1;
    if (d_81 < 0) count_81 = count_81 + 1;
    cout << "4.81: Отрицательных чисел: " << count_81 << '\n'; // exercise 161 4.81

    int a_82 = 1, b_82 = 2, c_82 = 3, d_82 = 4;
    int count_82 = 0;
    if (a_82 % 2 == 0) count_82 = count_82 + 1;
    if (b_82 % 2 == 0) count_82 = count_82 + 1;
    if (c_82 % 2 == 0) count_82 = count_82 + 1;
    if (d_82 % 2 == 0) count_82 = count_82 + 1;
    cout << "4.82: Четных чисел: " << count_82 << '\n'; // exercise 162 4.82

    double a_83 = 6.0, b_83 = 2.0, c_83 = 7.0, d_83 = 1.0;
    double sum_83 = 0.0;
    if (a_83 > 5) sum_83 = sum_83 + a_83;
    if (b_83 > 5) sum_83 = sum_83 + b_83;
    if (c_83 > 5) sum_83 = sum_83 + c_83;
    if (d_83 > 5) sum_83 = sum_83 + d_83;
    cout << "4.83: Сумма чисел > 5: " << sum_83 << '\n'; // exercise 163 4.83

    int a_84 = 3, b_84 = 4, c_84 = 5, d_84 = 6;
    int sum_84 = 0;
    if (a_84 % 3 == 0) sum_84 = sum_84 + a_84;
    if (b_84 % 3 == 0) sum_84 = sum_84 + b_84;
    if (c_84 % 3 == 0) sum_84 = sum_84 + c_84;
    if (d_84 % 3 == 0) sum_84 = sum_84 + d_84;
    cout << "4.84: Сумма чисел, кратных 3: " << sum_84 << '\n'; // exercise 164 4.84

    return 0;
}
