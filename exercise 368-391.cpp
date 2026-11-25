#include <iostream>
#include <iomanip>
#include <cmath>
#include <numbers>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    long long num_38 = 32323;
    int first_digit_38 = 0, count_first_38 = 0;
    long long temp_38 = num_38;
    while (temp_38 > 0) { first_digit_38 = temp_38 % 10; temp_38 = temp_38 / 10; }
    temp_38 = num_38;
    while (temp_38 > 0) {
        count_first_38 = count_first_38 + (temp_38 % 10 == first_digit_38);
        temp_38 = temp_38 / 10;
    }
    cout << "6.38: Первая цифра встречается = " << count_first_38 << '\n'; // exercise 368 6.38

    long long num_39 = 47283;
    long long temp_39 = num_39;
    while (temp_39 >= 100) { temp_39 = temp_39 / 10; }
    int second_39a = temp_39 % 10;
    cout << "6.39 a): Вторая цифра = " << second_39a << '\n';
    int second_39b = 0;
    temp_39 = num_39;
    int count_39 = 0;
    while (temp_39 > 0) {
        count_39 = count_39 + 1;
        if (count_39 == 2) second_39b = temp_39 % 10;
        temp_39 = temp_39 / 10;
    }
    cout << "6.39 б): Вторая цифра = " << second_39b << '\n'; // exercise 369 6.39

    long long num_40 = 47283;
    long long temp_40 = num_40;
    while (temp_40 >= 1000) { temp_40 = temp_40 / 10; }
    int third_40a = temp_40 % 10;
    cout << "6.40 a): Третья цифра = " << third_40a << '\n';
    int third_40b = 0;
    temp_40 = num_40;
    int count_40 = 0;
    while (temp_40 > 0) {
        count_40 = count_40 + 1;
        if (count_40 == 3) third_40b = temp_40 % 10;
        temp_40 = temp_40 / 10;
    }
    cout << "6.40 б): Третья цифра = " << third_40b << '\n'; // exercise 370 6.40

    long long num_41 = 48275;
    int max1_41 = 0, max2_41 = 0, min1_41 = 9, min2_41 = 9;
    long long temp_41 = num_41;
    while (temp_41 > 0) {
        int d = temp_41 % 10;
        if (d > max1_41) { max2_41 = max1_41; max1_41 = d; } else if (d > max2_41) max2_41 = d;
        if (d < min1_41) { min2_41 = min1_41; min1_41 = d; } else if (d < min2_41) min2_41 = d;
        temp_41 = temp_41 / 10;
    }
    cout << "6.41 a): Две максимальные = " << max1_41 << ", " << max2_41 << '\n';
    cout << "6.41 б): Две минимальные = " << min1_41 << ", " << min2_41 << '\n'; // exercise 371 6.41

    long long num_42 = 48275;
    int max1_42 = 0, max2_42 = 0, min1_42 = 9, min2_42 = 9;
    int pos_max1_42 = 0, pos_max2_42 = 0, pos_min1_42 = 0, pos_min2_42 = 0;
    int pos_42 = 1;
    long long temp_42 = num_42;
    while (temp_42 > 0) {
        int d = temp_42 % 10;
        if (d > max1_42) { max2_42 = max1_42; pos_max2_42 = pos_max1_42; max1_42 = d; pos_max1_42 = pos_42; }
        else if (d > max2_42) { max2_42 = d; pos_max2_42 = pos_42; }
        if (d < min1_42) { min2_42 = min1_42; pos_min2_42 = pos_min1_42; min1_42 = d; pos_min1_42 = pos_42; }
        else if (d < min2_42) { min2_42 = d; pos_min2_42 = pos_42; }
        pos_42 = pos_42 + 1;
        temp_42 = temp_42 / 10;
    }
    cout << "6.42 a): Позиции max с конца = " << pos_max1_42 << ", " << pos_max2_42 << '\n';
    cout << "6.42 a): Позиции max с начала = " << pos_max2_42 << ", " << pos_max1_42 << '\n';
    cout << "6.42 б): Позиции min с конца = " << pos_min1_42 << ", " << pos_min2_42 << '\n';
    cout << "6.42 б): Позиции min с начала = " << pos_min2_42 << ", " << pos_min1_42 << '\n'; // exercise 372 6.42

    double seq_43[] = {1.0, 1.0, 2.0, 3.0, 3.0, 3.0, 4.0, 5.0, 1000.0};
    int count_equal_43 = 0, count_diff_43 = 0, i_43 = 0;
    while (seq_43[i_43] != 1000.0) {
        count_diff_43 = count_diff_43 + 1;
        if (i_43 > 0 and seq_43[i_43] == seq_43[i_43 - 1]) count_equal_43 = count_equal_43 + 1;
        i_43 = i_43 + 1;
    }
    cout << "6.43: Идущих подряд равных = " << count_equal_43 << '\n';
    cout << "6.43: Различных чисел = " << count_diff_43 << '\n'; // exercise 373 6.43

    double seq_44[] = {5.0, 5.0, 4.0, 3.0, 3.0, 1.0, 0.0};
    int count_diff_44 = 1, i_44 = 1;
    while (seq_44[i_44] != 0.0) {
        if (seq_44[i_44] != seq_44[i_44 - 1]) count_diff_44 = count_diff_44 + 1;
        i_44 = i_44 + 1;
    }
    cout << "6.44: Различных чисел = " << count_diff_44 << '\n'; // exercise 374 6.44

    int a_45 = 48, b_45 = 60, c_45 = 36;
    int x_45 = a_45, y_45 = b_45;
    while (y_45 != 0) { int temp_45 = y_45; y_45 = x_45 % y_45; x_45 = temp_45; }
    int gcd_ab_45 = x_45;
    x_45 = gcd_ab_45; y_45 = c_45;
    while (y_45 != 0) { int temp_45 = y_45; y_45 = x_45 % y_45; x_45 = temp_45; }
    cout << "6.45: НОД(a,b,c) = " << x_45 << '\n'; // exercise 375 6.45

    long long num_46 = 48275;
    int sum_46 = 0, prod_46 = 1, count_46 = 0;
    int first_46 = 0, last_46 = num_46 % 10;
    long long temp_46 = num_46;
    while (temp_46 > 0) {
        int d = temp_46 % 10;
        sum_46 = sum_46 + d;
        prod_46 = prod_46 * d;
        count_46 = count_46 + 1;
        first_46 = d;
        temp_46 = temp_46 / 10;
    }
    cout << "6.46 a): Сумма > 10? " << (sum_46 > 10) << '\n';
    cout << "6.46 б): Произведение < 50? " << (prod_46 < 50) << '\n';
    cout << "6.46 в): Количество четное? " << (count_46 % 2 == 0) << '\n';
    cout << "6.46 г): Четырехзначное? " << (num_46 >= 1000 and num_46 <= 9999) << '\n';
    cout << "6.46 д): Первая <= 6? " << (first_46 <= 6) << '\n';
    cout << "6.46 е): Первая = последней? " << (first_46 == last_46) << '\n';
    cout << "6.46 ж): Первая больше последней? " << (first_46 > last_46) << '\n'; // exercise 376 6.46

    long long num_47 = 48275;
    int a_47 = 20, b_47 = 1000, k_47 = 5, m_47 = 4;
    int sum_47 = 0, prod_47 = 1, count_47 = 0, first_47 = 0;
    long long temp_47 = num_47;
    while (temp_47 > 0) {
        int d = temp_47 % 10;
        sum_47 = sum_47 + d;
        prod_47 = prod_47 * d;
        count_47 = count_47 + 1;
        first_47 = d;
        temp_47 = temp_47 / 10;
    }
    cout << "6.47 a): Сумма < a? " << (sum_47 < a_47) << '\n';
    cout << "6.47 б): Произведение > b? " << (prod_47 > b_47) << '\n';
    cout << "6.47 в): k-значное? " << (count_47 == k_47) << '\n';
    cout << "6.47 г): Первая > m? " << (first_47 > m_47) << '\n'; // exercise 377 6.47

    long long num_48 = 48275;
    int k_48 = 20, b_48 = 10000, x_48 = 4, y_48 = 5, a_48 = 1000, m_48 = 20, n_48 = 5;
    int sum_48 = 0, prod_48 = 1, count_48 = 0, first_48 = 0, last_48 = num_48 % 10;
    long long temp_48 = num_48;
    while (temp_48 > 0) {
        int d = temp_48 % 10;
        sum_48 = sum_48 + d;
        prod_48 = prod_48 * d;
        count_48 = count_48 + 1;
        first_48 = d;
        temp_48 = temp_48 / 10;
    }
    cout << "6.48 a): Сумма > k и четное? " << (sum_48 > k_48 and num_48 % 2 == 0) << '\n';
    cout << "6.48 б): Кол-во четное и <= b? " << (count_48 % 2 == 0 and num_48 <= b_48) << '\n';
    cout << "6.48 в): Начинается с x и кончается y? " << (first_48 == x_48 and last_48 == y_48) << '\n';
    cout << "6.48 г): Произведение < a и делится на b? " << (prod_48 < a_48 and num_48 % b_48 == 0) << '\n';
    cout << "6.48 д): Сумма > m и делится на n? " << (sum_48 > m_48 and num_48 % n_48 == 0) << '\n'; // exercise 378 6.48

    long long num_49 = 48275;
    bool has3_49 = false, has2_49 = false, has5_49 = false;
    long long temp_49 = num_49;
    while (temp_49 > 0) {
        int d = temp_49 % 10;
        has3_49 = has3_49 or (d == 3);
        has2_49 = has2_49 or (d == 2);
        has5_49 = has5_49 or (d == 5);
        temp_49 = temp_49 / 10;
    }
    cout << "6.49 a): Есть 3? " << has3_49 << '\n';
    cout << "6.49 б): Есть 2 и 5? " << (has2_49 and has5_49) << '\n'; // exercise 379 6.49

    long long num_50 = 48275;
    int a_50 = 4, b_50 = 7, k_50 = 1;
    bool hasA_50 = false, hasB_50 = false, hasAB_50 = false;
    int countA_50 = 0;
    long long temp_50 = num_50;
    while (temp_50 > 0) {
        int d = temp_50 % 10;
        hasA_50 = hasA_50 or (d == a_50);
        hasB_50 = hasB_50 or (d == b_50);
        countA_50 = countA_50 + (d == a_50);
        hasAB_50 = hasAB_50 or (d == a_50 or d == b_50);
        temp_50 = temp_50 / 10;
    }
    cout << "6.50 a): Есть a? " << hasA_50 << '\n';
    cout << "6.50 б): Нет b? " << !hasB_50 << '\n';
    cout << "6.50 в): a > k раз? " << (countA_50 > k_50) << '\n';
    cout << "6.50 г): Есть a и b? " << hasAB_50 << '\n'; // exercise 380 6.50

    long long num_51 = 12321;
    long long rev_51 = 0, temp_51 = num_51;
    while (temp_51 > 0) {
        rev_51 = rev_51 * 10 + (temp_51 % 10);
        temp_51 = temp_51 / 10;
    }
    cout << "6.51: Палиндром? " << (num_51 == rev_51) << '\n'; // exercise 381 6.51

    long long num_52 = 37;
    bool is_prime_52 = num_52 > 1;
    long long div_52 = 2;
    while (div_52 * div_52 <= num_52) {
        if (num_52 % div_52 == 0) is_prime_52 = false;
        div_52 = div_52 + 1;
    }
    cout << "6.52: Простое? " << is_prime_52 << '\n'; // exercise 382 6.52

    long long num_53 = 5321;
    bool ordered_53 = true;
    int prev_53 = 10;
    long long temp_53 = num_53;
    while (temp_53 > 0) {
        int d = temp_53 % 10;
        if (d > prev_53) ordered_53 = false;
        prev_53 = d;
        temp_53 = temp_53 / 10;
    }
    cout << "6.53: Справа налево по возрастанию? " << ordered_53 << '\n'; // exercise 383 6.53

    long long num_54 = 5321;
    bool ordered_54 = true;
    int prev_54 = 10;
    long long temp_54 = num_54;
    while (temp_54 > 0) {
        int d = temp_54 % 10;
        if (d > prev_54) ordered_54 = false;
        prev_54 = d;
        temp_54 = temp_54 / 10;
    }
    cout << "6.54: Справа налево по невозрастанию? " << ordered_54 << '\n'; // exercise 384 6.54

    long long num_55 = 1478;
    bool ordered_55 = true;
    long long rev_55 = 0, temp_55 = num_55;
    while (temp_55 > 0) { rev_55 = rev_55 * 10 + (temp_55 % 10); temp_55 = temp_55 / 10; }
    int prev_55 = 10;
    temp_55 = rev_55;
    while (temp_55 > 0) {
        int d = temp_55 % 10;
        if (d > prev_55) ordered_55 = false;
        prev_55 = d;
        temp_55 = temp_55 / 10;
    }
    cout << "6.55: Слева направо по возрастанию? " << ordered_55 << '\n'; // exercise 385 6.55

    long long num_56 = 1368;
    bool ordered_56 = true;
    int prev_56 = 0;
    long long temp_56 = num_56;
    while (temp_56 > 0) {
        int d = temp_56 % 10;
        if (d < prev_56) ordered_56 = false;
        prev_56 = d;
        temp_56 = temp_56 / 10;
    }
    cout << "6.56: Слева направо по невозрастанию? " << ordered_56 << '\n'; // exercise 386 6.56

    double seq_57[] = {1.0, 3.0, 5.0, 7.0, 9.0, 11.0, 13.0, 15.0, 17.0, 19.0, 21.0, 23.0, 25.0, 27.0, 29.0};
    double n_57 = 10.5;
    double min_diff_57 = 1000.0;
    int best_idx_57 = 0;
    for (int i = 0; i < 15; i++) {
        double diff = abs(seq_57[i] - n_57);
        if (diff < min_diff_57) { min_diff_57 = diff; best_idx_57 = i; }
    }
    cout << "6.57: Ближайший элемент = " << seq_57[best_idx_57] << ", номер = " << (best_idx_57 + 1) << '\n'; // exercise 387 6.57

    double seq_58[] = {5.0, 3.0, -2.0, 7.0, 1.0};
    int first_neg_58 = -1;
    for (int i = 0; i < 5; i++) {
        if (seq_58[i] < 0 and first_neg_58 == -1) first_neg_58 = i + 1;
    }
    cout << "6.58: Есть отрицательные? " << (first_neg_58 != -1) << ", номер первого = " << first_neg_58 << '\n'; // exercise 388 6.58

    int seq_59[] = {10, 25, 77, 32, 77, 5, 100};
    int first_77_59 = -1, i_59 = 0;
    while (seq_59[i_59] != 100) {
        if (seq_59[i_59] == 77 and first_77_59 == -1) first_77_59 = i_59 + 1;
        i_59 = i_59 + 1;
    }
    cout << "6.59: Есть 77? " << (first_77_59 != -1) << ", номер первого = " << first_77_59 << '\n'; // exercise 389 6.59

    int seq_60[] = {11, 22, 33, 47, 55, 66, 78, 99, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 23, 24};
    int first_7_60 = -1;
    for (int i = 0; i < 20; i++) {
        if (seq_60[i] % 10 == 7 and first_7_60 == -1) first_7_60 = i + 1;
    }
    cout << "6.60: Есть оканчивающееся на 7? " << (first_7_60 != -1) << ", номер = " << first_7_60 << '\n'; // exercise 390 6.60

    int seq_61[] = {10, 20, 21, 30, 35, 40, -1};
    int first_mult7_61 = -1, i_61 = 0;
    while (seq_61[i_61] != -1) {
        if (seq_61[i_61] % 7 == 0 and first_mult7_61 == -1) first_mult7_61 = i_61 + 1;
        i_61 = i_61 + 1;
    }
    cout << "6.61: Есть кратное 7? " << (first_mult7_61 != -1) << ", номер = " << first_mult7_61 << '\n'; // exercise 391 6.61

    return 0;
}
