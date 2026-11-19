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
    int suit_110 = 4, rank_110 = 12;
    cout << "4.110: ";
    switch (rank_110) {
        case 11: cout << "Валет "; break;
        case 12: cout << "Дама "; break;
        case 13: cout << "Король "; break;
        case 14: cout << "Туз "; break;
        case 6: cout << "Шестерка "; break;
        case 7: cout << "Семерка "; break;
        case 8: cout << "Восьмерка "; break;
        case 9: cout << "Девятка "; break;
        case 10: cout << "Десятка "; break;
    }
    switch (suit_110) {
        case 1: cout << "пик\n"; break;
        case 2: cout << "треф\n"; break;
        case 3: cout << "бубен\n"; break;
        case 4: cout << "червей\n"; break;
    } // exercise 192 4.110

    int k_111 = 3;
    cout << "4.111 a): ";
    switch (k_111 % 7) {
        case 1: cout << "Понедельник\n"; break;
        case 2: cout << "Вторник\n"; break;
        case 3: cout << "Среда\n"; break;
        case 4: cout << "Четверг\n"; break;
        case 5: cout << "Пятница\n"; break;
        case 6: cout << "Суббота\n"; break;
        case 0: cout << "Воскресенье\n"; break;
    } // exercise 193 4.111

    int d_111 = 3;
    cout << "4.111 б): ";
    int day_offset = ((d_111 - 1) + (k_111 - 1)) % 7 + 1;
    switch (day_offset) {
        case 1: cout << "Понедельник\n"; break;
        case 2: cout << "Вторник\n"; break;
        case 3: cout << "Среда\n"; break;
        case 4: cout << "Четверг\n"; break;
        case 5: cout << "Пятница\n"; break;
        case 6: cout << "Суббота\n"; break;
        case 7: cout << "Воскресенье\n"; break;
    } // exercise 194 4.111

    int n_112 = 14;
    int total_months = n_112 / 12;
    int rem_months = n_112 % 12;
    int current_month_112 = (1 + rem_months) % 12;
    if (current_month_112 == 0) current_month_112 = 12;
    cout << "4.112: ";
    switch (current_month_112) {
        case 1: cout << "Январь\n"; break;
        case 2: cout << "Февраль\n"; break;
        case 3: cout << "Март\n"; break;
        case 4: cout << "Апрель\n"; break;
        case 5: cout << "Май\n"; break;
        case 6: cout << "Июнь\n"; break;
        case 7: cout << "Июль\n"; break;
        case 8: cout << "Август\n"; break;
        case 9: cout << "Сентябрь\n"; break;
        case 10: cout << "Октябрь\n"; break;
        case 11: cout << "Ноябрь\n"; break;
        case 12: cout << "Декабрь\n"; break;
    } // exercise 195 4.112

    int m_113 = 3, n_113 = 1;
    cout << "4.113 a): ";
    if (n_113 == 1) {
        if (m_113 == 1) { m_113 = 12; n_113 = 31; }
        else {
            m_113 = m_113 - 1;
            switch (m_113) {
                case 1: case 3: case 5: case 7: case 8: case 10: case 12: n_113 = 31; break;
                case 4: case 6: case 9: case 11: n_113 = 30; break;
                case 2: n_113 = 28; break;
            }
        }
    } else {
        n_113 = n_113 - 1;
    }
    cout << n_113 << "." << m_113 << '\n';
    
    int m_113b = 3, n_113b = 31;
    cout << "4.113 б): ";
    int days_in_month = 31;
    switch (m_113b) {
        case 4: case 6: case 9: case 11: days_in_month = 30; break;
        case 2: days_in_month = 28; break;
    }
    if (n_113b == days_in_month) {
        n_113b = 1;
        if (m_113b == 12) m_113b = 1; else m_113b = m_113b + 1;
    } else {
        n_113b = n_113b + 1;
    }
    cout << n_113b << "." << m_113b << '\n'; // exercise 196 4.113

    int g_114 = 2023, m_114 = 2, n_114 = 28;
    bool leap_114 = (g_114 % 4 == 0 and g_114 % 100 != 0) or (g_114 % 400 == 0);
    cout << "4.114 a): ";
    int prev_m = m_114, prev_n = n_114;
    if (prev_n == 1) {
        if (prev_m == 1) { prev_m = 12; prev_n = 31; }
        else {
            prev_m = prev_m - 1;
            switch (prev_m) {
                case 1: case 3: case 5: case 7: case 8: case 10: case 12: prev_n = 31; break;
                case 4: case 6: case 9: case 11: prev_n = 30; break;
                case 2: prev_n = leap_114 ? 29 : 28; break;
            }
        }
    } else {
        prev_n = prev_n - 1;
    }
    cout << prev_n << "." << prev_m << "." << g_114 << '\n';
    
    cout << "4.114 б): ";
    int next_m = m_114, next_n = n_114;
    int days_in_114 = 31;
    switch (next_m) {
        case 4: case 6: case 9: case 11: days_in_114 = 30; break;
        case 2: days_in_114 = leap_114 ? 29 : 28; break;
    }
    if (next_n == days_in_114) {
        next_n = 1;
        if (next_m == 12) { next_m = 1; g_114 = g_114 + 1; } else next_m = next_m + 1;
    } else {
        next_n = next_n + 1;
    }
    cout << next_n << "." << next_m << "." << g_114 << '\n'; // exercise 197 4.114

    int year_115 = 2024;
    int cycle_115 = (year_115 - 4) % 60;
    int animal_115 = cycle_115 % 12;
    int color_115 = cycle_115 / 12;
    cout << "4.115: ";
    switch (animal_115) {
        case 0: cout << "Крыса "; break;
        case 1: cout << "Корова "; break;
        case 2: cout << "Тигр "; break;
        case 3: cout << "Заяц "; break;
        case 4: cout << "Дракон "; break;
        case 5: cout << "Змея "; break;
        case 6: cout << "Лошадь "; break;
        case 7: cout << "Овца "; break;
        case 8: cout << "Обезьяна "; break;
        case 9: cout << "Петух "; break;
        case 10: cout << "Собака "; break;
        case 11: cout << "Свинья "; break;
    }
    switch (color_115) {
        case 0: cout << "Дерево\n"; break;
        case 1: cout << "Огонь\n"; break;
        case 2: cout << "Земля\n"; break;
        case 3: cout << "Металл\n"; break;
        case 4: cout << "Вода\n"; break;
    } // exercise 198 4.115

    return 0;
}
