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
    
    double a_122 = 3.0, b_122 = 4.0, c_122 = 5.0;
    A = (a_122 + b_122 > c_122) and (a_122 + c_122 > b_122) and (b_122 + c_122 > a_122);
    cout << "4.122: ";
    if (A) cout << "Треугольник существует\n";
    else cout << "Треугольник не существует\n"; // exercise 199 4.122

    double a_123 = 3.0, b_123 = 4.0, c_123 = 5.0;
    A = (a_123 + b_123 > c_123) and (a_123 + c_123 > b_123) and (b_123 + c_123 > a_123);
    B = (a_123 * a_123 + b_123 * b_123 == c_123 * c_123) or (a_123 * a_123 + c_123 * c_123 == b_123 * b_123) or (b_123 * b_123 + c_123 * c_123 == a_123 * a_123);
    cout << "4.123: ";
    if (A and B) cout << "Треугольник прямоугольный\n";
    else cout << "Треугольник не прямоугольный (или не существует)\n"; // exercise 200 4.123

    double a_124 = 4.0, b_124 = 5.0, c_124 = 6.0;
    A = (a_124 + b_124 > c_124) and (a_124 + c_124 > b_124) and (b_124 + c_124 > a_124);
    double max_sq = max(a_124 * a_124, max(b_124 * b_124, c_124 * c_124));
    double sum_other_sq = (a_124 * a_124 + b_124 * b_124 + c_124 * c_124) - max_sq;
    cout << "4.124: ";
    if (A) {
        if (max_sq == sum_other_sq) cout << "Прямоугольный. ";
        else if (max_sq < sum_other_sq) cout << "Остроугольный. ";
        else cout << "Тупоугольный. ";
        if (a_124 == b_124 and b_124 == c_124) cout << "Равносторонний.\n";
        else if (a_124 == b_124 or b_124 == c_124 or a_124 == c_124) cout << "Равнобедренный.\n";
        else cout << "Разносторонний.\n";
    } else {
        cout << "Треугольник не существует\n";
    } // exercise 201 4.124

    int n_125 = 22;
    int last_digit = n_125 % 10, last_two = n_125 % 100;
    cout << "4.125: Мне " << n_125 << " ";
    if (last_two >= 11 and last_two <= 14) cout << "лет\n";
    else if (last_digit == 1) cout << "год\n";
    else if (last_digit >= 2 and last_digit <= 4) cout << "года\n";
    else cout << "лет\n"; // exercise 202 4.125

    int k_126 = 12;
    int k_last = k_126 % 10, k_last2 = k_126 % 100;
    cout << "4.126: Мы нашли " << k_126 << " ";
    if (k_last2 >= 11 and k_last2 <= 14) cout << "грибов\n";
    else if (k_last == 1) cout << "гриб\n";
    else if (k_last >= 2 and k_last <= 4) cout << "гриба\n";
    else cout << "грибов\n"; // exercise 203 4.126

    int n_127 = 321;
    int rub_127 = n_127 / 100, kop_127 = n_127 % 100;
    cout << "4.127: " << rub_127 << " рубл";
    int r_last = rub_127 % 10, r_last2 = rub_127 % 100;
    if (r_last2 >= 11 and r_last2 <= 14) cout << "ей ";
    else if (r_last == 1) cout << "ь ";
    else if (r_last >= 2 and r_last <= 4) cout << "я ";
    else cout << "ей ";
    cout << kop_127 << " копе";
    int k_last127 = kop_127 % 10, k_last2_127 = kop_127 % 100;
    if (k_last2_127 >= 11 and k_last2_127 <= 14) cout << "ек\n";
    else if (k_last127 == 1) cout << "йка\n";
    else if (k_last127 >= 2 and k_last127 <= 4) cout << "йки\n";
    else cout << "ек\n"; // exercise 204 4.127

    int n_128 = 121;
    int years_128 = n_128 / 12, months_128 = n_128 % 12;
    cout << "4.128: " << years_128 << " год";
    int y_last = years_128 % 10, y_last2 = years_128 % 100;
    if (y_last2 >= 11 and y_last2 <= 14) cout << "ов ";
    else if (y_last == 1) cout << " ";
    else if (y_last >= 2 and y_last <= 4) cout << "а ";
    else cout << "ов ";
    cout << months_128 << " меся";
    int m_last = months_128 % 10, m_last2 = months_128 % 100;
    if (m_last2 >= 11 and m_last2 <= 14) cout << "цев\n";
    else if (m_last == 1) cout << "ц\n";
    else if (m_last >= 2 and m_last <= 4) cout << "ца\n";
    else cout << "цев\n"; // exercise 205 4.128

    int g1_129 = 2000, m1_129 = 5, d1_129 = 15;
    int g2_129 = 2023, m2_129 = 6, d2_129 = 20;
    int age_129 = g2_129 - g1_129;
    A = (m2_129 > m1_129) or (m2_129 == m1_129 and d2_129 >= d1_129);
    if (!A) age_129 = age_129 - 1;
    cout << "4.129: Возраст = " << age_129 << '\n'; // exercise 206 4.129

    int g1_130 = 1990, m1_130 = 1, d1_130 = 1;
    int g2_130 = 1995, m2_130 = 5, d2_130 = 1;
    A = (g1_130 < g2_130) or (g1_130 == g2_130 and m1_130 < m2_130) or (g1_130 == g2_130 and m1_130 == m2_130 and d1_130 < d2_130);
    cout << "4.130: ";
    if (A) cout << "Первый старше\n"; else cout << "Второй старше\n"; // exercise 207 4.130

    int g1_131 = 2000, m1_131 = 2;
    int g2_131 = 2023, m2_131 = 5;
    int age_years = g2_131 - g1_131;
    int age_months = m2_131 - m1_131;
    if (age_months < 0) { age_years = age_years - 1; age_months = age_months + 12; }
    cout << "4.131: " << age_years << " лет, " << age_months << " месяцев\n"; // exercise 208 4.131

    int a_132 = 10, b_132 = 5, c_132 = 10, d_132 = 15;
    int n_132 = 10, m_132 = 10;
    int arr_time = a_132 * 60 + b_132;
    int dep_time = c_132 * 60 + d_132;
    int pass_time = n_132 * 60 + m_132;
    A = (pass_time >= arr_time) and (pass_time <= dep_time);
    cout << "4.132: ";
    if (A) cout << "Пассажир застанет поезд\n"; else cout << "Пассажир не застанет поезд\n"; // exercise 209 4.132

    int m_133 = 3, n_133 = 1;
    cout << "4.133 a): ";
    if (n_133 == 1) {
        if (m_133 == 1) { m_133 = 12; n_133 = 31; }
        else {
            m_133 = m_133 - 1;
            switch (m_133) {
                case 1: case 3: case 5: case 7: case 8: case 10: case 12: n_133 = 31; break;
                case 4: case 6: case 9: case 11: n_133 = 30; break;
                case 2: n_133 = 28; break;
            }
        }
    } else {
        n_133 = n_133 - 1;
    }
    cout << n_133 << "." << m_133 << '\n';
    
    int m_133b = 3, n_133b = 31;
    cout << "4.133 б): ";
    int days_in_m = 31;
    switch (m_133b) {
        case 4: case 6: case 9: case 11: days_in_m = 30; break;
        case 2: days_in_m = 28; break;
    }
    if (n_133b == days_in_m) {
        n_133b = 1;
        if (m_133b == 12) m_133b = 1; else m_133b = m_133b + 1;
    } else {
        n_133b = n_133b + 1;
    }
    cout << n_133b << "." << m_133b << '\n'; // exercise 210 4.133

    int g_134 = 2024, m_134 = 2, n_134 = 29;
    bool leap_134 = (g_134 % 4 == 0 and g_134 % 100 != 0) or (g_134 % 400 == 0);
    cout << "4.134 a): ";
    int prev_m = m_134, prev_n = n_134;
    if (prev_n == 1) {
        if (prev_m == 1) { prev_m = 12; prev_n = 31; }
        else {
            prev_m = prev_m - 1;
            switch (prev_m) {
                case 1: case 3: case 5: case 7: case 8: case 10: case 12: prev_n = 31; break;
                case 4: case 6: case 9: case 11: prev_n = 30; break;
                case 2: prev_n = leap_134 ? 29 : 28; break;
            }
        }
    } else {
        prev_n = prev_n - 1;
    }
    cout << prev_n << "." << prev_m << "." << g_134 << '\n';
    
    cout << "4.134 б): ";
    int next_m = m_134, next_n = n_134;
    int days_in_134 = 31;
    switch (next_m) {
        case 4: case 6: case 9: case 11: days_in_134 = 30; break;
        case 2: days_in_134 = leap_134 ? 29 : 28; break;
    }
    if (next_n == days_in_134) {
        next_n = 1;
        if (next_m == 12) { next_m = 1; g_134 = g_134 + 1; } else next_m = next_m + 1;
    } else {
        next_n = next_n + 1;
    }
    cout << next_n << "." << next_m << "." << g_134 << '\n'; // exercise 211 4.134

    double t_135 = 2.5;
    int cycle_135 = t_135;
    int time_in_cycle = cycle_135 % 9;
    cout << "4.135: ";
    if (time_in_cycle < 3) cout << "Зеленый\n";
    else if (time_in_cycle < 4) cout << "Желтый\n";
    else cout << "Красный\n"; // exercise 212 4.135

    int k_136 = 100;
    int day_136 = k_136 % 7;
    cout << "4.136 a): ";
    if (day_136 == 6 or day_136 == 0) cout << "Выходной\n"; else cout << "Рабочий день\n";
    
    int d_136 = 5;
    int day_136b = (k_136 + d_136 - 2) % 7;
    cout << "4.136 б): ";
    if (day_136b == 5 or day_136b == 6) cout << "Выходной\n"; else cout << "Рабочий день\n"; // exercise 213 4.136

    int k_137 = 25;
    cout << "4.137: ";
    if (k_137 <= 18) {
        int num = 10 + (k_137 - 1) / 2;
        if (k_137 % 2 != 0) cout << num / 10 << '\n';
        else cout << num % 10 << '\n';
    } else {
        int rem = k_137 - 18;
        int num = 100 + (rem - 1) / 3;
        int digit_pos = (rem - 1) % 3;
        if (digit_pos == 0) cout << num / 100 << '\n';
        else if (digit_pos == 1) cout << (num / 10) % 10 << '\n';
        else cout << num % 10 << '\n';
    } // exercise 214 4.137

    int n_138 = 15;
    cout << "4.138: ";
    if (n_138 == 1) cout << "0\n";
    else if (n_138 <= 3) cout << n_138 - 1 << '\n';
    else if (n_138 <= 13) {
        int num = 10 + (n_138 - 4) / 2;
        if ((n_138 - 4) % 2 == 0) cout << num / 10 << '\n';
        else cout << num % 10 << '\n';
    } else {
        int num = 20 + (n_138 - 14) / 2;
        if ((n_138 - 14) % 2 == 0) cout << num / 10 << '\n';
        else cout << num % 10 << '\n';
    } // exercise 215 4.138

    int k_139 = 20;
    cout << "4.139: ";
    if (k_139 <= 100) {
        int num = 50 + (k_139 - 1) / 2;
        if ((k_139 - 1) % 2 == 0) cout << num / 10 << '\n';
        else cout << num % 10 << '\n';
    } else {
        int rem = k_139 - 100;
        int num = 100 + (rem - 1) / 3;
        int pos = (rem - 1) % 3;
        if (pos == 0) cout << num / 100 << '\n';
        else if (pos == 1) cout << (num / 10) % 10 << '\n';
        else cout << num % 10 << '\n';
    } // exercise 216 4.139

    return 0;
}
