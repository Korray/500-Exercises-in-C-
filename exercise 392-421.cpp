#include <iostream>
#include <iomanip>
#include <cmath>
#include <numbers>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int seq_62[] = {5, 10, 15, 20, 25, 10000};
    int n_62 = 17, i_62 = 0;
    int ans_62 = -1;
    while (seq_62[i_62] != 10000) {
        if (seq_62[i_62] > n_62 and ans_62 == -1) ans_62 = i_62 + 1;
        i_62 = i_62 + 1;
    }
    cout << "6.62: Порядковый номер = " << ans_62 << '\n'; // exercise 392 6.62

    int marks_63[28] = {4, 5, 3, 4, 5, 4, 5, 4, 3, 4, 5, 4, 5, 4, 5, 4, 3, 4, 5, 4, 5, 4, 5, 4, 3, 4, 5, 4};
    bool has2_63 = false;
    for (int i = 0; i < 28; i++) {
        has2_63 = has2_63 or (marks_63[i] == 2);
    }
    cout << "6.63: Есть двойки? " << has2_63 << '\n'; // exercise 393 6.63

    int power_64[30];
    for (int i = 0; i < 30; i++) power_64[i] = 100 + i * 5;
    bool has_gt200_64 = false;
    for (int i = 0; i < 30; i++) {
        has_gt200_64 = has_gt200_64 or (power_64[i] > 200);
    }
    cout << "6.64: Есть > 200 л.с.? " << has_gt200_64 << '\n'; // exercise 394 6.64

    int seq_65[15] = {1, 2, 3, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    bool has_pair_65 = false;
    int first_pair_65 = -1;
    for (int i = 0; i < 14; i++) {
        if (seq_65[i] == seq_65[i + 1] and !has_pair_65) {
            has_pair_65 = true;
            first_pair_65 = i + 1;
        }
    }
    cout << "6.65: Есть пара? " << has_pair_65 << ", первый номер = " << first_pair_65 << '\n'; // exercise 395 6.65

    int seq_66[] = {1, 2, 3, 3, 4, -1};
    bool has_pair_66 = false;
    int first_pair_66 = -1, i_66 = 0;
    while (seq_66[i_66] != -1) {
        if (i_66 > 0 and seq_66[i_66] == seq_66[i_66 - 1] and !has_pair_66) {
            has_pair_66 = true;
            first_pair_66 = i_66;
        }
        i_66 = i_66 + 1;
    }
    cout << "6.66: Есть пара? " << has_pair_66 << ", первый номер = " << first_pair_66 << '\n'; // exercise 396 6.66

    int seq_67[20] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39};
    bool has_odd_pair_67 = false;
    int first_odd_pair_67 = -1;
    for (int i = 0; i < 19; i++) {
        if (seq_67[i] % 2 != 0 and seq_67[i + 1] % 2 != 0 and !has_odd_pair_67) {
            has_odd_pair_67 = true;
            first_odd_pair_67 = i + 1;
        }
    }
    cout << "6.67: Пара нечетных? " << has_odd_pair_67 << ", номер = " << first_odd_pair_67 << '\n'; // exercise 397 6.67

    int seq_68[] = {2, 4, 6, 7, 8, 10, 9999};
    bool has_even_pair_68 = false;
    int first_even_pair_68 = -1, i_68 = 0;
    while (seq_68[i_68] != 9999) {
        if (i_68 > 0 and seq_68[i_68] % 2 == 0 and seq_68[i_68 - 1] % 2 == 0 and !has_even_pair_68) {
            has_even_pair_68 = true;
            first_even_pair_68 = i_68;
        }
        i_68 = i_68 + 1;
    }
    cout << "6.68: Пара четных? " << has_even_pair_68 << ", номер = " << first_even_pair_68 << '\n'; // exercise 398 6.68

    double seq_69[15] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0, 13.0, 14.0, 15.0};
    bool is_ordered_69 = true;
    int first_violation_69 = -1;
    for (int i = 0; i < 14; i++) {
        if (seq_69[i] > seq_69[i + 1] and is_ordered_69) {
            is_ordered_69 = false;
            first_violation_69 = i + 1;
        }
    }
    cout << "6.69: Упорядочена? " << is_ordered_69 << ", первое нарушение = " << first_violation_69 << '\n'; // exercise 399 6.69

    double seq_70[] = {1.0, 2.0, 3.0, 5.0, 4.0, 6.0, 10000.0};
    bool is_ordered_70 = true;
    int first_violation_70 = -1, i_70 = 0;
    while (seq_70[i_70 + 1] != 10000.0) {
        if (seq_70[i_70] > seq_70[i_70 + 1] and is_ordered_70) {
            is_ordered_70 = false;
            first_violation_70 = i_70 + 1;
        }
        i_70 = i_70 + 1;
    }
    cout << "6.70: Упорядочена? " << is_ordered_70 << ", первое нарушение = " << first_violation_70 << '\n'; // exercise 400 6.70

    double heights_71[5] = {180.0, 175.0, 170.0, 165.0, 160.0};
    bool is_desc_71 = true;
    for (int i = 0; i < 4; i++) {
        if (heights_71[i] < heights_71[i + 1]) is_desc_71 = false;
    }
    cout << "6.71: По убыванию? " << is_desc_71 << '\n'; // exercise 401 6.71

    int points_72[5] = {15, 12, 10, 8, 5};
    bool is_desc_72 = true;
    for (int i = 0; i < 4; i++) {
        if (points_72[i] < points_72[i + 1]) is_desc_72 = false;
    }
    cout << "6.72: Команды по местам? " << is_desc_72 << '\n'; // exercise 402 6.72

    int seq_73[15] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    bool all_equal_73 = true;
    for (int i = 0; i < 14; i++) {
        if (seq_73[i] != seq_73[i + 1]) all_equal_73 = false;
    }
    cout << "6.73: Все равны? " << all_equal_73 << '\n'; // exercise 403 6.73

    int seq_74[] = {5, 5, 5, 5, 5, -1};
    bool all_equal_74 = true, first_74 = true;
    int prev_74 = 0, i_74 = 0;
    while (seq_74[i_74] >= 0) {
        if (first_74) { prev_74 = seq_74[i_74]; first_74 = false; }
        else if (seq_74[i_74] != prev_74) all_equal_74 = false;
        i_74 = i_74 + 1;
    }
    cout << "6.74: Все равны? " << all_equal_74 << '\n'; // exercise 404 6.74

    int seq_75[20] = {12, 21, 13, 31, 14, 41, 15, 51, 16, 61, 12, 21, 13, 31, 14, 41, 15, 51, 16, 61};
    bool valid_75a = true, valid_75b = true;
    for (int i = 0; i < 19; i++) {
        int right1 = seq_75[i] % 10, left2 = seq_75[i + 1] / 10;
        if (right1 != left2) valid_75a = false;
    }
    for (int i = 0; i < 19; i++) {
        int right1 = seq_75[i] % 10, left1 = seq_75[i] / 10;
        int right2 = seq_75[i + 1] % 10, left2 = seq_75[i + 1] / 10;
        if (right1 != left2 and right1 != right2 and left1 != left2 and left1 != right2) valid_75b = false;
    }
    cout << "6.75 a): Соответствует? " << valid_75a << '\n';
    cout << "6.75 б): Соответствует? " << valid_75b << '\n'; // exercise 405 6.75

    int num_76 = 27;
    bool pow3_76 = (num_76 > 0), pow5_76 = (num_76 > 0);
    int temp_76 = num_76;
    while (temp_76 % 3 == 0) temp_76 = temp_76 / 3;
    if (temp_76 != 1) pow3_76 = false;
    temp_76 = num_76;
    while (temp_76 % 5 == 0) temp_76 = temp_76 / 5;
    if (temp_76 != 1) pow5_76 = false;
    cout << "6.76 a): Степень 3? " << pow3_76 << '\n';
    cout << "6.76 б): Степень 5? " << pow5_76 << '\n'; // exercise 406 6.76

    int num_77 = 21;
    long long f1_77 = 1, f2_77 = 1, fk_77 = 1;
    while (fk_77 < num_77) {
        fk_77 = f1_77 + f2_77;
        f1_77 = f2_77;
        f2_77 = fk_77;
    }
    cout << "6.77: Член Фибоначчи? " << (fk_77 == num_77 or num_77 == 1) << '\n'; // exercise 407 6.77

    int n_78 = 25, f_78 = 5, s_78 = 5;
    bool is_ap_78 = false;
    if (n_78 >= f_78 and (n_78 - f_78) % s_78 == 0) is_ap_78 = true;
    cout << "6.78: Член арифм. прогрессии? " << is_ap_78 << '\n'; // exercise 408 6.78

    int m_79 = 25, g_79 = 5, z_79 = 2;
    bool is_gp_79 = false;
    int curr_79 = g_79;
    while (curr_79 <= m_79) {
        if (curr_79 == m_79) is_gp_79 = true;
        curr_79 = curr_79 * z_79;
    }
    cout << "6.79: Член геом. прогрессии? " << is_gp_79 << '\n'; // exercise 409 6.79

    long long num_80 = 90990;
    int count0_80 = 0, count9_80 = 0;
    long long temp_80 = num_80;
    while (temp_80 > 0) {
        int d = temp_80 % 10;
        count0_80 = count0_80 + (d == 0);
        count9_80 = count9_80 + (d == 9);
        temp_80 = temp_80 / 10;
    }
    cout << "6.80: Чаще встречается: " << (count0_80 > count9_80 ? "0" : "9") << '\n'; // exercise 410 6.80

    long long num_81 = 48275;
    int a_81 = 4, b_81 = 2, countA_81 = 0, countB_81 = 0;
    long long temp_81 = num_81;
    while (temp_81 > 0) {
        int d = temp_81 % 10;
        countA_81 = countA_81 + (d == a_81);
        countB_81 = countB_81 + (d == b_81);
        temp_81 = temp_81 / 10;
    }
    cout << "6.81: a реже b? " << (countA_81 < countB_81) << '\n'; // exercise 411 6.81

    long long num_82 = 48275;
    int max_82 = 0, min_82 = 9;
    long long temp_82 = num_82;
    while (temp_82 > 0) {
        int d = temp_82 % 10;
        max_82 = (d > max_82 ? d : max_82);
        min_82 = (d < min_82 ? d : min_82);
        temp_82 = temp_82 / 10;
    }
    cout << "6.82: Разность max и min четная? " << ((max_82 - min_82) % 2 == 0) << '\n'; // exercise 412 6.82

    long long num_83 = 48275;
    int a_83 = 5, max_83 = 0, min_83 = 9;
    long long temp_83 = num_83;
    while (temp_83 > 0) {
        int d = temp_83 % 10;
        max_83 = (d > max_83 ? d : max_83);
        min_83 = (d < min_83 ? d : min_83);
        temp_83 = temp_83 / 10;
    }
    cout << "6.83: Сумма max и min кратна a? " << ((max_83 + min_83) % a_83 == 0) << '\n'; // exercise 413 6.83

    long long num_84 = 48275;
    int max_84 = 0, min_84 = 9, max_pos_84 = 0, min_pos_84 = 0, pos_84 = 1;
    long long temp_84 = num_84;
    while (temp_84 > 0) {
        int d = temp_84 % 10;
        if (d > max_84) { max_84 = d; max_pos_84 = pos_84; }
        if (d < min_84) { min_84 = d; min_pos_84 = pos_84; }
        pos_84 = pos_84 + 1;
        temp_84 = temp_84 / 10;
    }
    cout << "6.84: Левее расположена: " << (max_pos_84 > min_pos_84 ? "max" : "min") << '\n'; // exercise 414 6.84

    long long num_85 = 48275;
    int pos2_85 = -1, pos5_85 = -1, pos_85 = 1;
    long long temp_85 = num_85;
    while (temp_85 > 0) {
        int d = temp_85 % 10;
        if (d == 2 and pos2_85 == -1) pos2_85 = pos_85;
        if (d == 5 and pos5_85 == -1) pos5_85 = pos_85;
        pos_85 = pos_85 + 1;
        temp_85 = temp_85 / 10;
    }
    if (pos2_85 != -1 and pos5_85 != -1) cout << "6.85: Левее: " << (pos2_85 > pos5_85 ? "2" : "5") << '\n';
    else cout << "6.85: Нет одной из цифр\n"; // exercise 415 6.85

    long long num_86 = 48275;
    int a_86 = 4, b_86 = 2, posA_86 = -1, posB_86 = -1, pos_86 = 1;
    long long temp_86 = num_86;
    while (temp_86 > 0) {
        int d = temp_86 % 10;
        if (d == a_86) posA_86 = pos_86;
        if (d == b_86) posB_86 = pos_86;
        pos_86 = pos_86 + 1;
        temp_86 = temp_86 / 10;
    }
    if (posA_86 != -1 and posB_86 != -1) cout << "6.86: Правее: " << (posA_86 < posB_86 ? a_86 : b_86) << '\n';
    else cout << "6.86: Нет одной из цифр\n"; // exercise 416 6.86

    int score1_87 = 0, score2_87 = 0;
    int point_87;
    while (cin >> point_87 and point_87 != 0) {
        if (point_87 == 1) score1_87 = score1_87 + 1;
        if (point_87 == 2) score2_87 = score2_87 + 2;
        if (point_87 == 3) score2_87 = score2_87 + 3;
        cout << "6.87: Счет " << score1_87 << " : " << score2_87 << '\n';
    }
    cout << "6.87: Победитель: Команда " << (score1_87 > score2_87 ? "1" : "2") << '\n'; // exercise 417 6.87

    cout << "6.88 a): ";
    int i_88 = 10;
    while (i_88 <= 30) { cout << i_88 << " "; i_88 = i_88 + 1; }
    cout << '\n';
    cout << "6.88 б): ";
    i_88 = 10;
    do { cout << i_88 << " "; i_88 = i_88 + 1; } while (i_88 <= 30);
    cout << '\n'; // exercise 418 6.88

    cout << "6.89 a): ";
    int i_89 = 100;
    while (i_89 >= 80) { cout << i_89 << " "; i_89 = i_89 - 1; }
    cout << '\n';
    cout << "6.89 б): ";
    i_89 = 100;
    do { cout << i_89 << " "; i_89 = i_89 - 1; } while (i_89 >= 80);
    cout << '\n'; // exercise 419 6.89

    double a_90 = 5.0, b_90 = 10.0;
    cout << "6.90 a): ";
    double i_90 = b_90;
    while (i_90 >= a_90) { cout << sqrt(i_90) << " "; i_90 = i_90 - 1.0; }
    cout << '\n';
    cout << "6.90 б): ";
    i_90 = b_90;
    do { cout << sqrt(i_90) << " "; i_90 = i_90 - 1.0; } while (i_90 >= a_90);
    cout << '\n'; // exercise 420 6.90

    long long num_91 = 48275;
    int count_91 = 0, sum_91 = 0, prod_91 = 1, sum_sq_91 = 0;
    long long temp_91 = num_91;
    while (temp_91 > 0) {
        int d = temp_91 % 10;
        count_91 = count_91 + 1;
        sum_91 = sum_91 + d;
        prod_91 = prod_91 * d;
        sum_sq_91 = sum_sq_91 + (d * d);
        temp_91 = temp_91 / 10;
    }
    cout << "6.91 a): Количество цифр = " << count_91 << '\n';
    cout << "6.91 б): Сумма цифр = " << sum_91 << '\n';
    cout << "6.91 в): Произведение цифр = " << prod_91 << '\n';
    cout << "6.91 г): Среднее арифметическое = " << (double)sum_91 / count_91 << '\n';
    cout << "6.91 д): Сумма квадратов = " << sum_sq_91 << '\n'; // exercise 421 6.91

    return 0;
}
