#include <iostream>
#include <iomanip>
#include <cmath>
#include <numbers>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int n_69 = 6;
    double v1_69 = 0.0, v2_69 = 0.0, v3_69 = 1.5, v_69 = 0.0;
    for (int i = 4; i <= n_69; i++) {
        v_69 = (i - 1.0) / (i * i + 1.0) * v3_69 - v2_69 + v1_69;
        v1_69 = v2_69;
        v2_69 = v3_69;
        v3_69 = v_69;
    }
    cout << "5.69: v_" << n_69 << " = " << v3_69 << '\n'; // exercise 303 5.69

    int ameba_70 = 1;
    for (int t = 3; t <= 24; t += 3) {
        ameba_70 = ameba_70 * 2;
        cout << "5.70: Через " << t << " ч. клеток = " << ameba_70 << '\n';
    } // exercise 304 5.70

    double sum_71 = 1000.0;
    for (int m = 1; m <= 12; m++) {
        double profit = sum_71 * 0.02;
        sum_71 = sum_71 + profit;
        cout << "5.71 a): Месяц " << m << " прирост = " << profit << '\n';
        if (m >= 3 and m <= 12) cout << "5.71 б): Сумма через " << m << " мес. = " << sum_71 << '\n';
    } // exercise 305 5.71

    double dist_72 = 10.0, total_dist_72 = 10.0;
    for (int d = 2; d <= 10; d++) {
        dist_72 = dist_72 * 1.10;
        total_dist_72 = total_dist_72 + dist_72;
        cout << "5.72 a): День " << d << " пробег = " << dist_72 << '\n';
        if (d == 7) cout << "5.72 б): Суммарный путь за 7 дней = " << total_dist_72 << '\n';
    } // exercise 306 5.72

    double area_73 = 100.0, yield_73 = 20.0;
    for (int y = 2; y <= 8; y++) {
        area_73 = area_73 * 1.05;
        yield_73 = yield_73 * 1.02;
        cout << "5.73 a): Год " << y << " урожайность = " << yield_73 << '\n';
        if (y >= 4 and y <= 7) cout << "5.73 б): Год " << y << " площадь = " << area_73 << '\n';
        if (y == 6) cout << "5.73 в): Урожай за 6 лет = " << (area_73 * yield_73) << '\n';
    } // exercise 307 5.73

    double r_74 = 0.05, d_74 = 0.10;
    double total_vol_74 = 0.0;
    for (int i = 0; i < 12; i++) {
        double inner_r = (d_74 / 2.0) - r_74;
        double vol = (4.0 / 3.0) * numbers::pi * (inner_r * inner_r * inner_r);
        total_vol_74 = total_vol_74 + vol;
        d_74 = d_74 + 2 * r_74;
    }
    cout << "5.74: Суммарный объем = " << total_vol_74 * 1000.0 << " литров\n"; // exercise 308 5.74

    long long sum_75 = 0;
    long long term_75 = 1;
    for (int i = 1; i <= 10; i++) {
        term_75 = term_75 * 2;
        if (i >= 2) sum_75 = sum_75 + term_75;
    }
    cout << "5.75: Сумма = " << sum_75 << '\n'; // exercise 309 5.75

    double a_76 = 1.5;
    int n_76 = 5;
    double term_76 = 1.0;
    for (int i = 1; i <= n_76; i++) {
        term_76 = term_76 * a_76;
        cout << "5.76: a^" << i << " = " << term_76 << '\n';
    } // exercise 310 5.76

    long long sum_77 = 0;
    for (int i = 1; i <= 10; i++) {
        long long sq = i * i;
        if (i % 2 != 0) sum_77 = sum_77 - sq;
        else sum_77 = sum_77 + sq;
    }
    cout << "5.77: Сумма = " << sum_77 << '\n'; // exercise 311 5.77

    double area_78 = 0.0;
    int n_78 = 1000;
    double h_78 = numbers::pi / n_78;
    for (int i = 0; i < n_78; i++) {
        double x = i * h_78;
        area_78 = area_78 + sin(x) * h_78;
    }
    cout << "5.78: Площадь = " << area_78 << '\n'; // exercise 312 5.78

    double area_79 = 0.0;
    int n_79 = 1000;
    double h_79 = 1.0 / n_79;
    for (int i = 0; i < n_79; i++) {
        double x = i * h_79;
        double y = 0.3 * (x - 1.0) * (x - 1.0) + 4.0;
        area_79 = area_79 + y * h_79;
    }
    cout << "5.79: Площадь = " << area_79 << '\n'; // exercise 313 5.79

    double area_80 = 0.0;
    int n_80 = 1000;
    double h_80 = 2.0 / n_80;
    for (int i = 0; i < n_80; i++) {
        double x = i * h_80;
        double y = 0.5 * (x + 1.0) * (x + 1.0) + 2.0;
        if (y <= 2.0) area_80 = area_80 + y * h_80;
    }
    cout << "5.80: Площадь = " << area_80 << '\n'; // exercise 314 5.80

    int x_81 = 5, y_81 = 4;
    int prod_81a = 0;
    for (int i = 0; i < y_81; i++) { prod_81a = prod_81a + x_81; }
    int prod_81b = 0;
    for (int i = 0; i < x_81; i++) { prod_81b = prod_81b + y_81; }
    cout << "5.81: Способ 1 = " << prod_81a << ", Способ 2 = " << prod_81b << '\n'; // exercise 315 5.81

    int n_82 = 5;
    long long fact_82 = 1;
    for (int i = 1; i <= n_82; i++) { fact_82 = fact_82 * i; }
    cout << "5.82: Факториал = " << fact_82 << '\n'; // exercise 316 5.82

    double a_83 = 2.0;
    int n_83 = 4;
    double pow_83 = 1.0;
    for (int i = 0; i < n_83; i++) { pow_83 = pow_83 * a_83; }
    cout << "5.83: Степень = " << pow_83 << '\n'; // exercise 317 5.83

    long long term_84 = 20 * 20;
    for (int i = 19; i >= 1; i--) {
        term_84 = (term_84 - i * i) * (term_84 - i * i);
    }
    cout << "5.84: Значение = " << term_84 << '\n'; // exercise 318 5.84

    int num_85 = 12345;
    int rev_85 = 0;
    for (int i = 0; i < 5; i++) {
        rev_85 = rev_85 * 10 + (num_85 % 10);
        num_85 = num_85 / 10;
    }
    cout << "5.85: Перевернутое = " << rev_85 << '\n'; // exercise 319 5.85

    int n_86 = 4;
    int sum_86 = 0;
    int odd_86 = 1;
    for (int i = 1; i <= n_86; i++) {
        sum_86 = sum_86 + odd_86;
        odd_86 = odd_86 + 2;
    }
    cout << "5.86: " << n_86 << "^2 = " << sum_86 << '\n'; // exercise 320 5.86

    long long total_87 = 0;
    for (int i = 1; i <= 10; i++) {
        int sum_87 = 0;
        int odd_87 = 1;
        for (int j = 1; j <= i; j++) {
            sum_87 = sum_87 + odd_87;
            odd_87 = odd_87 + 2;
        }
        total_87 = total_87 + sum_87;
    }
    cout << "5.87: Сумма квадратов = " << total_87 << '\n'; // exercise 321 5.87

    return 0;
}
