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
    
    double x_93 = 2.0, y_93 = 3.0;
    A = (y_93 > 5.0); B = (y_93 > 2.5) and (y_93 <= 5.0); C = (y_93 <= 2.5);
    cout << "4.93: ";
    if (A) cout << "Область I\n";
    if (B) cout << "Область II\n";
    if (C) cout << "Область III\n"; // exercise 175 4.93

    int points_94 = 3;
    cout << "4.94: ";
    if (points_94 == 3) cout << "Выигрыш\n";
    else if (points_94 == 1) cout << "Ничья\n";
    else if (points_94 == 0) cout << "Проигрыш\n"; // exercise 176 4.94

    double weight_95 = 62.5;
    cout << "4.95: ";
    if (weight_95 <= 60.0) cout << "Легкий вес\n";
    else if (weight_95 <= 64.0) cout << "Первый полусредний вес\n";
    else if (weight_95 <= 69.0) cout << "Полусредний вес\n";
    else cout << "Другая категория\n"; // exercise 177 4.95

    double a_96 = 1.0, b_96 = 2.0, c_96 = 1.0;
    double D_96 = b_96 * b_96 - 4 * a_96 * c_96;
    cout << "4.96: ";
    if (D_96 > 0) {
        double r1_96 = (-b_96 + sqrt(D_96)) / (2 * a_96);
        double r2_96 = (-b_96 - sqrt(D_96)) / (2 * a_96);
        cout << "Корни: " << r1_96 << " и " << r2_96 << '\n';
    } else if (D_96 == 0) {
        double r_96 = -b_96 / (2 * a_96);
        cout << "Один корень: " << r_96 << '\n';
    } else {
        cout << "Корней нет\n";
    } // exercise 178 4.96

    int n1_97 = 10, n2_97 = 20, n3_97 = 15;
    cout << "4.97: ";
    if (n1_97 > n2_97 and n1_97 > n3_97) cout << "Первое наибольшее. ";
    if (n2_97 > n1_97 and n2_97 > n3_97) cout << "Второе наибольшее. ";
    if (n3_97 > n1_97 and n3_97 > n2_97) cout << "Третье наибольшее. ";
    if (n1_97 < n2_97 and n1_97 < n3_97) cout << "Первое наименьшее. ";
    if (n2_97 < n1_97 and n2_97 < n3_97) cout << "Второе наименьшее. ";
    if (n3_97 < n1_97 and n3_97 < n2_97) cout << "Третье наименьшее. ";
    if ((n1_97 > n2_97 and n1_97 < n3_97) or (n1_97 < n2_97 and n1_97 > n3_97)) cout << "Первое среднее.";
    if ((n2_97 > n1_97 and n2_97 < n3_97) or (n2_97 < n1_97 and n2_97 > n3_97)) cout << "Второе среднее.";
    if ((n3_97 > n1_97 and n3_97 < n2_97) or (n3_97 < n1_97 and n3_97 > n2_97)) cout << "Третье среднее.";
    cout << '\n'; // exercise 179 4.97

    double x_98 = 1.0, y_98 = 2.0, z_98 = 3.0;
    double max_98 = x_98, min_98 = x_98;
    if (y_98 > max_98) max_98 = y_98;
    if (z_98 > max_98) max_98 = z_98;
    if (y_98 < min_98) min_98 = y_98;
    if (z_98 < min_98) min_98 = z_98;
    cout << "4.98: max = " << max_98 << ", min = " << min_98 << '\n'; // exercise 180 4.98

    double a_99 = 1.0, b_99 = 5.0, c_99 = 3.0;
    double sum_99 = 0.0;
    if (a_99 > b_99) sum_99 = a_99; else sum_99 = b_99;
    if ((a_99 > c_99 and b_99 > c_99) or (a_99 < c_99 and b_99 < c_99)) sum_99 = sum_99 + c_99;
    else if (a_99 > c_99 and c_99 > b_99) sum_99 = a_99 + c_99;
    else sum_99 = b_99 + c_99;
    cout << "4.99: Сумма двух наибольших = " << sum_99 << '\n'; // exercise 181 4.99

    double a_100 = 1.0, b_100 = 5.0, c_100 = 3.0;
    double prod_100 = 0.0;
    if (a_100 < b_100) prod_100 = a_100; else prod_100 = b_100;
    if ((a_100 < c_100 and b_100 < c_100) or (a_100 > c_100 and b_100 > c_100)) prod_100 = prod_100 * c_100;
    else if (a_100 < c_100 and c_100 < b_100) prod_100 = a_100 * c_100;
    else prod_100 = b_100 * c_100;
    cout << "4.100: Произведение двух наименьших = " << prod_100 << '\n'; // exercise 182 4.100

    double a1_101 = 1.0, b1_101 = 3.0, c1_101 = 2.0;
    double a2_101 = 4.0, b2_101 = 6.0, c2_101 = 5.0;
    double mid1_101, mid2_101;
    if ((a1_101 > b1_101 and a1_101 < c1_101) or (a1_101 < b1_101 and a1_101 > c1_101)) mid1_101 = a1_101;
    else if ((b1_101 > a1_101 and b1_101 < c1_101) or (b1_101 < a1_101 and b1_101 > c1_101)) mid1_101 = b1_101;
    else mid1_101 = c1_101;
    if ((a2_101 > b2_101 and a2_101 < c2_101) or (a2_101 < b2_101 and a2_101 > c2_101)) mid2_101 = a2_101;
    else if ((b2_101 > a2_101 and b2_101 < c2_101) or (b2_101 < a2_101 and b2_101 > c2_101)) mid2_101 = b2_101;
    else mid2_101 = c2_101;
    cout << "4.101: Среднее арифметическое = " << (mid1_101 + mid2_101) / 2.0 << '\n'; // exercise 183 4.101

    double x_102 = -2.0, y_102 = 3.0;
    cout << "4.102: ";
    if (x_102 > 0 and y_102 > 0) cout << "I четверть\n";
    if (x_102 < 0 and y_102 > 0) cout << "II четверть\n";
    if (x_102 < 0 and y_102 < 0) cout << "III четверть\n";
    if (x_102 > 0 and y_102 < 0) cout << "IV четверть\n"; // exercise 184 4.102

    double a_103 = 1.0, b_103 = 5.0, c_103 = 3.0;
    double max_103 = a_103, min_103 = a_103;
    if (b_103 > max_103) max_103 = b_103;
    if (c_103 > max_103) max_103 = c_103;
    if (b_103 < min_103) min_103 = b_103;
    if (c_103 < min_103) min_103 = c_103;
    cout << "4.103: max = " << max_103 << ", min = " << min_103 << '\n'; // exercise 185 4.103

    int day_104 = 3;
    switch (day_104) {
        case 1: cout << "4.104: Понедельник\n"; break;
        case 2: cout << "4.104: Вторник\n"; break;
        case 3: cout << "4.104: Среда\n"; break;
        case 4: cout << "4.104: Четверг\n"; break;
        case 5: cout << "4.104: Пятница\n"; break;
        case 6: cout << "4.104: Суббота\n"; break;
        case 7: cout << "4.104: Воскресенье\n"; break;
    } // exercise 186 4.104

    int month_105 = 5;
    switch (month_105) {
        case 1: cout << "4.105: Январь\n"; break;
        case 2: cout << "4.105: Февраль\n"; break;
        case 3: cout << "4.105: Март\n"; break;
        case 4: cout << "4.105: Апрель\n"; break;
        case 5: cout << "4.105: Май\n"; break;
        case 6: cout << "4.105: Июнь\n"; break;
        case 7: cout << "4.105: Июль\n"; break;
        case 8: cout << "4.105: Август\n"; break;
        case 9: cout << "4.105: Сентябрь\n"; break;
        case 10: cout << "4.105: Октябрь\n"; break;
        case 11: cout << "4.105: Ноябрь\n"; break;
        case 12: cout << "4.105: Декабрь\n"; break;
    } // exercise 187 4.105

    int month_106 = 5;
    switch (month_106) {
        case 1: case 2: case 12: cout << "4.106: Зима\n"; break;
        case 3: case 4: case 5: cout << "4.106: Весна\n"; break;
        case 6: case 7: case 8: cout << "4.106: Лето\n"; break;
        case 9: case 10: case 11: cout << "4.106: Осень\n"; break;
    } // exercise 188 4.106

    int month_107 = 2;
    bool leap_107 = true;
    cout << "4.107: ";
    if (month_107 == 2 and leap_107) cout << "29 дней\n";
    else {
        switch (month_107) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12: cout << "31 день\n"; break;
            case 4: case 6: case 9: case 11: cout << "30 дней\n"; break;
            case 2: cout << "28 дней\n"; break;
        }
    } // exercise 189 4.107

    int suit_108 = 3;
    switch (suit_108) {
        case 1: cout << "4.108: Пики\n"; break;
        case 2: cout << "4.108: Трефы\n"; break;
        case 3: cout << "4.108: Бубны\n"; break;
        case 4: cout << "4.108: Червы\n"; break;
    } // exercise 190 4.108

    int card_109 = 11;
    cout << "4.109: ";
    switch (card_109) {
        case 11: cout << "Валет\n"; break;
        case 12: cout << "Дама\n"; break;
        case 13: cout << "Король\n"; break;
        case 14: cout << "Туз\n"; break;
        case 6: cout << "Шестерка\n"; break;
        case 7: cout << "Семерка\n"; break;
        case 8: cout << "Восьмерка\n"; break;
        case 9: cout << "Девятка\n"; break;
        case 10: cout << "Десятка\n"; break;
    } // exercise 191 4.109

    return 0;
}
