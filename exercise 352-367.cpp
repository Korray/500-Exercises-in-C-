#include <iostream>
#include <iomanip>
#include <cmath>
#include <numbers>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    long long num_22 = 343323;
    int count3_22 = 0, countLast_22 = 0, countEven_22 = 0, sum5_22 = 0;
    long long prod7_22 = 1, count05_22 = 0;
    int last_digit_22 = num_22 % 10;
    long long temp_22 = num_22;
    while (temp_22 > 0) {
        int d = temp_22 % 10;
        count3_22 = count3_22 + (d == 3);
        countLast_22 = countLast_22 + (d == last_digit_22);
        countEven_22 = countEven_22 + (d % 2 == 0);
        sum5_22 = sum5_22 + (d > 5 ? d : 0);
        prod7_22 = prod7_22 * (d > 7 ? d : 1);
        count05_22 = count05_22 + (d == 0 or d == 5);
        temp_22 = temp_22 / 10;
    }
    cout << "6.22 a): Количество 3 = " << count3_22 << '\n';
    cout << "6.22 б): Встречается последняя = " << countLast_22 << '\n';
    cout << "6.22 в): Четных цифр = " << countEven_22 << '\n';
    cout << "6.22 г): Сумма > 5 = " << sum5_22 << '\n';
    cout << "6.22 д): Произведение > 7 = " << prod7_22 << '\n';
    cout << "6.22 е): Цифр 0 и 5 = " << count05_22 << '\n'; // exercise 352 6.22

    long long num_23 = 246812;
    int a_23 = 2, z_23 = 2, sum_gt_a_23 = 0, count_xy_23 = 0;
    int x_23 = 2, y_23 = 8;
    int countA_23 = 0, countZ_23 = 0;
    long long temp_23 = num_23;
    while (temp_23 > 0) {
        int d = temp_23 % 10;
        countA_23 = countA_23 + (d == a_23);
        countZ_23 = countZ_23 + (d % z_23 == 0);
        sum_gt_a_23 = sum_gt_a_23 + (d > a_23 ? d : 0);
        count_xy_23 = count_xy_23 + (d == x_23 or d == y_23);
        temp_23 = temp_23 / 10;
    }
    cout << "6.23 a): Сколько раз a = " << countA_23 << '\n';
    cout << "6.23 б): Кратных z = " << countZ_23 << '\n';
    cout << "6.23 в): Сумма > a = " << sum_gt_a_23 << '\n';
    cout << "6.23 г): Встречается x и y = " << count_xy_23 << '\n'; // exercise 353 6.23

    int seq24[] = {15, 22, 8, 44, 3, 0};
    int x_24 = 10, sum_gt_24 = 0, count_even_24 = 0, i24 = 0;
    while (seq24[i24] != 0) {
        sum_gt_24 = sum_gt_24 + (seq24[i24] > x_24 ? seq24[i24] : 0);
        count_even_24 = count_even_24 + (seq24[i24] % 2 == 0);
        i24 = i24 + 1;
    }
    cout << "6.24 a): Сумма > x = " << sum_gt_24 << '\n';
    cout << "6.24 б): Четных = " << count_even_24 << '\n'; // exercise 354 6.24

    int seq25[] = {10, -4, 12, 56, -4, 0};
    int sign_changes_25 = 0, i25 = 0;
    bool prev_pos_25 = true;
    while (seq25[i25] != 0) {
        bool curr_pos = seq25[i25] > 0;
        if (i25 > 0) sign_changes_25 = sign_changes_25 + (curr_pos != prev_pos_25);
        prev_pos_25 = curr_pos;
        i25 = i25 + 1;
    }
    cout << "6.25: Смена знака = " << sign_changes_25 << '\n'; // exercise 355 6.25

    long long num_26 = 48275;
    int max_26 = 0, min_26 = 9;
    long long temp_26 = num_26;
    while (temp_26 > 0) {
        int d = temp_26 % 10;
        max_26 = (d > max_26 ? d : max_26);
        min_26 = (d < min_26 ? d : min_26);
        temp_26 = temp_26 / 10;
    }
    cout << "6.26 a): Максимальная = " << max_26 << '\n';
    cout << "6.26 б): Минимальная = " << min_26 << '\n'; // exercise 356 6.26

    long long num_27 = 48275;
    int max_27 = 0, min_27 = 9;
    long long temp_27 = num_27;
    while (temp_27 > 0) {
        int d = temp_27 % 10;
        max_27 = (d > max_27 ? d : max_27);
        min_27 = (d < min_27 ? d : min_27);
        temp_27 = temp_27 / 10;
    }
    cout << "6.27 a): max = " << max_27 << ", min = " << min_27 << '\n';
    cout << "6.27 б): Разность = " << (max_27 - min_27) << '\n';
    cout << "6.27 в): Сумма = " << (max_27 + min_27) << '\n'; // exercise 357 6.27

    long long num_28 = 48275;
    int max_pos_from_end_28 = 0, max_pos_from_start_28 = 0;
    int min_pos_from_end_28 = 0, min_pos_from_start_28 = 0;
    int max_28 = 0, min_28 = 9;
    int len_28 = 0;
    long long temp_28 = num_28;
    while (temp_28 > 0) {
        len_28 = len_28 + 1;
        temp_28 = temp_28 / 10;
    }
    temp_28 = num_28;
    int pos_28 = 1;
    while (temp_28 > 0) {
        int d = temp_28 % 10;
        if (d > max_28) { max_28 = d; max_pos_from_end_28 = pos_28; }
        if (d < min_28) { min_28 = d; min_pos_from_end_28 = pos_28; }
        pos_28 = pos_28 + 1;
        temp_28 = temp_28 / 10;
    }
    max_pos_from_start_28 = len_28 - max_pos_from_end_28 + 1;
    min_pos_from_start_28 = len_28 - min_pos_from_end_28 + 1;
    cout << "6.28 a): max с конца = " << max_pos_from_end_28 << ", с начала = " << max_pos_from_start_28 << '\n';
    cout << "6.28 б): min с конца = " << min_pos_from_end_28 << ", с начала = " << min_pos_from_start_28 << '\n'; // exercise 358 6.28

    long long num_29 = 48275;
    int max_29 = 0, min_29 = 9;
    int max_pos_end_29 = 0, min_pos_end_29 = 0;
    int len_29 = 0;
    long long temp_29 = num_29;
    while (temp_29 > 0) { len_29 = len_29 + 1; temp_29 = temp_29 / 10; }
    temp_29 = num_29;
    int pos_29 = 1;
    while (temp_29 > 0) {
        int d = temp_29 % 10;
        if (d > max_29) { max_29 = d; max_pos_end_29 = pos_29; }
        if (d < min_29) { min_29 = d; min_pos_end_29 = pos_29; }
        pos_29 = pos_29 + 1;
        temp_29 = temp_29 / 10;
    }
    cout << "6.29 a): max с конца = " << max_pos_end_29 << ", min с конца = " << min_pos_end_29 << '\n';
    cout << "6.29 б): max с начала = " << (len_29 - max_pos_end_29 + 1) << ", min с начала = " << (len_29 - min_pos_end_29 + 1) << '\n'; // exercise 359 6.29

    long long num_30 = 382812;
    int pos8_30 = 0, pos_30 = 1;
    long long temp_30 = num_30;
    while (temp_30 > 0) {
        int d = temp_30 % 10;
        if (d == 8 and pos8_30 == 0) pos8_30 = pos_30;
        pos_30 = pos_30 + 1;
        temp_30 = temp_30 / 10;
    }
    cout << "6.30: Номер 8 с конца = " << pos8_30 << '\n'; // exercise 360 6.30

    long long num_31 = 132233;
    int max_31 = 0, count_max_31 = 0;
    long long temp_31 = num_31;
    while (temp_31 > 0) {
        int d = temp_31 % 10;
        if (d > max_31) { max_31 = d; count_max_31 = 1; }
        else if (d == max_31) count_max_31 = count_max_31 + 1;
        temp_31 = temp_31 / 10;
    }
    cout << "6.31: Максимальная встречается = " << count_max_31 << '\n'; // exercise 361 6.31

    long long num_32 = 102200;
    int min_32 = 9, count_min_32 = 0;
    long long temp_32 = num_32;
    while (temp_32 > 0) {
        int d = temp_32 % 10;
        if (d < min_32) { min_32 = d; count_min_32 = 1; }
        else if (d == min_32) count_min_32 = count_min_32 + 1;
        temp_32 = temp_32 / 10;
    }
    cout << "6.32: Минимальная встречается = " << count_min_32 << '\n'; // exercise 362 6.32

    cout << "6.33 a): ";
    for (int i = 13; i < 100; i += 13) {
        cout << i << " ";
    }
    cout << '\n';
    cout << "6.33 б): ";
    int num_33 = 13;
    while (num_33 < 100) {
        cout << num_33 << " ";
        num_33 = num_33 + 13;
    }
    cout << '\n'; // exercise 363 6.33

    int count_34 = 0, num_34 = 100;
    cout << "6.34: ";
    while (count_34 < 15) {
        if (num_34 % 19 == 0) {
            cout << num_34 << " ";
            count_34 = count_34 + 1;
        }
        num_34 = num_34 + 1;
    }
    cout << '\n'; // exercise 364 6.34

    int count_35 = 0, num_35 = 500;
    cout << "6.35: ";
    while (count_35 < 20) {
        if (num_35 % 13 == 0 or num_35 % 17 == 0) {
            cout << num_35 << " ";
            count_35 = count_35 + 1;
        }
        num_35 = num_35 + 1;
    }
    cout << '\n'; // exercise 365 6.35

    int count_36 = 0, num_36 = 100;
    cout << "6.36: ";
    while (count_36 < 10) {
        if (num_36 % 10 == 7 and num_36 % 9 == 0) {
            cout << num_36 << " ";
            count_36 = count_36 + 1;
        }
        num_36 = num_36 + 1;
    }
    cout << '\n'; // exercise 366 6.36

    int team1_37 = 0, team2_37 = 0, time1_37 = 0, time2_37 = 0;
    int removal_37;
    while (cin >> removal_37 and removal_37 != 0) {
        if (removal_37 == 1) { team1_37 = team1_37 + 1; time1_37 = time1_37 + 5; }
        if (removal_37 == 2) { team2_37 = team2_37 + 1; time2_37 = time2_37 + 5; }
    }
    cout << "6.37: Команда 1: удалений = " << team1_37 << ", время = " << time1_37 << '\n';
    cout << "6.37: Команда 2: удалений = " << team2_37 << ", время = " << time2_37 << '\n'; // exercise 367 6.37

    return 0;
}
