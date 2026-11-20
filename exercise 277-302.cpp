#include <iostream>
#include <iomanip>
#include <cmath>
#include <numbers>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    double salary_43[5] = {100.0, 200.0, 150.0, 300.0, 250.0};
    double sum_43 = 0.0;
    for (int i = 0; i < 5; i++) {
        sum_43 = sum_43 + salary_43[i];
    }
    cout << "5.43: Общая сумма = " << sum_43 << '\n'; // exercise 277 5.43

    double mass_44[4] = {10.5, 20.5, 30.5, 40.5};
    double sum_44 = 0.0;
    for (int i = 0; i < 4; i++) {
        sum_44 = sum_44 + mass_44[i];
    }
    cout << "5.44: Общая масса = " << sum_44 << '\n'; // exercise 278 5.44

    double res_45[3] = {10.0, 20.0, 30.0};
    double total_res_45 = 0.0;
    for (int i = 0; i < 3; i++) {
        total_res_45 = total_res_45 + res_45[i];
    }
    cout << "5.45: Общее сопротивление = " << total_res_45 << '\n'; // exercise 279 5.45

    double res_46[3] = {10.0, 20.0, 30.0};
    double total_res_46 = 0.0;
    for (int i = 0; i < 3; i++) {
        total_res_46 = total_res_46 + (1.0 / res_46[i]);
    }
    cout << "5.46: Общее сопротивление = " << (1.0 / total_res_46) << '\n'; // exercise 280 5.46

    double a_47[6] = {1.5, 2.5, 3.5, 4.5, 5.5, 6.5};
    double prod_47 = 1.0;
    for (int i = 0; i < 6; i++) {
        prod_47 = prod_47 * a_47[i];
    }
    cout << "5.47: Произведение = " << prod_47 << '\n'; // exercise 281 5.47

    double a_48[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    double sum_48 = 0.0;
    for (int i = 0; i < 10; i++) {
        sum_48 = sum_48 + (a_48[i] * a_48[i]);
    }
    cout << "5.48: Сумма квадратов = " << sum_48 << '\n'; // exercise 282 5.48

    int n_49 = 5;
    double a_49[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double sum_49 = 0.0;
    for (int i = 0; i < n_49; i++) {
        sum_49 = sum_49 + (a_49[i] * a_49[i]);
    }
    cout << "5.49: Сумма квадратов = " << sum_49 << '\n'; // exercise 283 5.49

    double a_50[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    double sum_50 = 0.0;
    for (int i = 0; i < 10; i++) {
        sum_50 = sum_50 + a_50[i];
    }
    cout << "5.50: Среднее = " << (sum_50 / 10.0) << '\n'; // exercise 284 5.50

    int n_51 = 5;
    double a_51[5] = {1.5, 2.5, 3.5, 4.5, 5.5};
    double sum_51 = 0.0;
    for (int i = 0; i < n_51; i++) {
        sum_51 = sum_51 + a_51[i];
    }
    cout << "5.51: Среднее = " << (sum_51 / n_51) << '\n'; // exercise 285 5.51

    int marks_52[20] = {4, 5, 3, 4, 5, 4, 3, 4, 5, 5, 4, 4, 3, 3, 4, 5, 5, 4, 4, 3};
    double sum_52 = 0.0;
    for (int i = 0; i < 20; i++) {
        sum_52 = sum_52 + marks_52[i];
    }
    cout << "5.52: Средняя оценка = " << (sum_52 / 20.0) << '\n'; // exercise 286 5.52

    int marks_53[10] = {4, 5, 3, 4, 5, 4, 3, 4, 5, 5};
    double sum_53 = 0.0;
    for (int i = 0; i < 10; i++) {
        sum_53 = sum_53 + marks_53[i];
    }
    cout << "5.53: Средняя оценка = " << (sum_53 / 10.0) << '\n'; // exercise 287 5.53

    int marks_54[15] = {4, 5, 3, 4, 5, 4, 3, 4, 5, 5, 4, 4, 3, 3, 4};
    double sum_54 = 0.0;
    for (int i = 0; i < 15; i++) {
        sum_54 = sum_54 + marks_54[i];
    }
    cout << "5.54: Средняя оценка = " << (sum_54 / 15.0) << '\n'; // exercise 288 5.54

    double mass_55[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double sum_55 = 0.0;
    for (int i = 0; i < 5; i++) {
        sum_55 = sum_55 + mass_55[i];
    }
    cout << "5.55: Средняя масса = " << (sum_55 / 5.0) << '\n'; // exercise 289 5.55

    int n_56 = 5;
    double a_56[5] = {1.5, -2.5, 3.5, -4.5, 5.5};
    double sum_abs_56 = 0.0, prod_abs_56 = 1.0;
    double sum_pairs_56 = 0.0, sum_alt_56 = 0.0;
    bool sign_56 = true;
    for (int i = 0; i < n_56; i++) {
        sum_abs_56 = sum_abs_56 + abs(a_56[i]);
        prod_abs_56 = prod_abs_56 * abs(a_56[i]);
        if (i > 0) sum_pairs_56 = sum_pairs_56 + (a_56[i - 1] + a_56[i]);
        if (sign_56) sum_alt_56 = sum_alt_56 + a_56[i];
        else sum_alt_56 = sum_alt_56 - a_56[i];
        sign_56 = !sign_56;
    }
    cout << "5.56 a): Сумма модулей = " << sum_abs_56 << '\n';
    cout << "5.56 б): Произведение модулей = " << prod_abs_56 << '\n';
    cout << "5.56 в): Сумма пар = " << sum_pairs_56 << '\n';
    cout << "5.56 г): Знакочередующаяся сумма = " << sum_alt_56 << '\n'; // exercise 290 5.56

    int marks1_57[4] = {4, 5, 3, 4};
    int marks2_57[4] = {5, 5, 4, 4};
    int sum1_57 = 0, sum2_57 = 0;
    for (int i = 0; i < 4; i++) {
        sum1_57 = sum1_57 + marks1_57[i];
        sum2_57 = sum2_57 + marks2_57[i];
    }
    cout << "5.57: Сумма первого = " << sum1_57 << ", Сумма второго = " << sum2_57 << '\n'; // exercise 291 5.57

    int points1_58[5] = {10, 20, 30, 40, 50};
    int points2_58[5] = {15, 25, 35, 45, 55};
    int total1_58 = 0, total2_58 = 0;
    for (int i = 0; i < 5; i++) {
        total1_58 = total1_58 + points1_58[i];
        total2_58 = total2_58 + points2_58[i];
    }
    cout << "5.58: Сумма первого = " << total1_58 << ", Сумма второго = " << total2_58 << '\n'; // exercise 292 5.58

    double age1_59[20], age2_59[20];
    for (int i = 0; i < 20; i++) {
        age1_59[i] = 14.5 + i * 0.1;
        age2_59[i] = 15.0 + i * 0.1;
    }
    double sum_age1_59 = 0.0, sum_age2_59 = 0.0;
    for (int i = 0; i < 20; i++) {
        sum_age1_59 = sum_age1_59 + age1_59[i];
        sum_age2_59 = sum_age2_59 + age2_59[i];
    }
    cout << "5.59: Средний возраст 1-го = " << (sum_age1_59 / 20.0) << ", 2-го = " << (sum_age2_59 / 20.0) << '\n'; // exercise 293 5.59

    double jan_60[31], mar_60[31];
    for (int i = 0; i < 31; i++) {
        jan_60[i] = i % 5;
        mar_60[i] = (i + 1) % 5;
    }
    double sum_jan_60 = 0.0, sum_mar_60 = 0.0;
    for (int i = 0; i < 31; i++) {
        sum_jan_60 = sum_jan_60 + jan_60[i];
        sum_mar_60 = sum_mar_60 + mar_60[i];
    }
    cout << "5.60: Среднее в январе = " << (sum_jan_60 / 31.0) << ", в марте = " << (sum_mar_60 / 31.0) << '\n'; // exercise 294 5.60

    double height1_61[20], height2_61[20];
    for (int i = 0; i < 20; i++) {
        height1_61[i] = 160.0 + i;
        height2_61[i] = 165.0 + i;
    }
    double sum_h1_61 = 0.0, sum_h2_61 = 0.0;
    for (int i = 0; i < 20; i++) {
        sum_h1_61 = sum_h1_61 + height1_61[i];
        sum_h2_61 = sum_h2_61 + height2_61[i];
    }
    cout << "5.61: Средний рост 1-го = " << (sum_h1_61 / 20.0) << ", 2-го = " << (sum_h2_61 / 20.0) << '\n'; // exercise 295 5.61

    int marks1_62[20], marks2_62[20];
    for (int i = 0; i < 20; i++) {
        marks1_62[i] = 3 + (i % 3);
        marks2_62[i] = 4 - (i % 2);
    }
    double sum_m1_62 = 0.0, sum_m2_62 = 0.0;
    for (int i = 0; i < 20; i++) {
        sum_m1_62 = sum_m1_62 + marks1_62[i];
        sum_m2_62 = sum_m2_62 + marks2_62[i];
    }
    cout << "5.62: Средняя оценка 1-го = " << (sum_m1_62 / 20.0) << ", 2-го = " << (sum_m2_62 / 20.0) << '\n'; // exercise 296 5.62

    double area_63[10], yield_63[10];
    double total_harvest_63 = 0.0, total_area_63 = 0.0;
    for (int i = 0; i < 10; i++) {
        area_63[i] = 100.0 + i * 10.0;
        yield_63[i] = 20.0 + i * 0.5;
        total_harvest_63 = total_harvest_63 + (area_63[i] * yield_63[i]);
        total_area_63 = total_area_63 + area_63[i];
    }
    cout << "5.63: Всего собрано = " << total_harvest_63 << ", Средняя урожайность = " << (total_harvest_63 / total_area_63) << '\n'; // exercise 297 5.63

    double pop_64[12], area_64[12];
    double total_pop_64 = 0.0, total_area_64 = 0.0;
    for (int i = 0; i < 12; i++) {
        pop_64[i] = 50.0 + i * 5.0;
        area_64[i] = 100.0 + i * 10.0;
        total_pop_64 = total_pop_64 + pop_64[i];
        total_area_64 = total_area_64 + area_64[i];
    }
    cout << "5.64: Средняя плотность = " << (total_pop_64 / total_area_64) << '\n'; // exercise 298 5.64

    double pop_65[12], dens_65[12];
    double total_area_65 = 0.0;
    for (int i = 0; i < 12; i++) {
        pop_65[i] = 50.0 + i * 5.0;
        dens_65[i] = 10.0 + i;
        total_area_65 = total_area_65 + (pop_65[i] / dens_65[i]);
    }
    cout << "5.65: Общая площадь = " << total_area_65 << '\n'; // exercise 299 5.65

    int n_66 = 5;
    double a_66 = 1.0;
    for (int k = 1; k <= n_66; k++) {
        a_66 = k * a_66 + (1.0 / k);
        cout << "a_" << k << " = " << a_66 << '\n';
    } // exercise 300 5.66

    int n_67 = 10, k_67 = 5;
    int f1_67 = 1, f2_67 = 1, fk_67 = 1;
    long long sum_67 = 0;
    for (int i = 3; i <= n_67; i++) {
        fk_67 = f1_67 + f2_67;
        f1_67 = f2_67;
        f2_67 = fk_67;
        if (i == k_67) cout << "5.67 a): k-й член = " << fk_67 << '\n';
        sum_67 = sum_67 + fk_67;
    }
    if (k_67 == 1) cout << "5.67 a): k-й член = 1\n";
    if (k_67 == 2) cout << "5.67 a): k-й член = 1\n";
    sum_67 = sum_67 + 1 + 1;
    cout << "5.67 б): Сумма первых n членов = " << sum_67 << '\n';
    cout << "5.67 в): Сумма четная? " << (sum_67 % 2 == 0 ? "Да" : "Нет") << '\n'; // exercise 301 5.67

    int n_68 = 5, k_68 = 3;
    int num1_68 = 1, den1_68 = 1;
    int num2_68 = 2, den2_68 = 1;
    double sum_68 = 1.0 / 1.0;
    double a_val_68 = 2.0;
    cout << "5.68 a): ";
    for (int i = 3; i <= k_68; i++) {
        int next_num = num1_68 + num2_68;
        int next_den = den1_68 + den2_68;
        num1_68 = num2_68; den1_68 = den2_68;
        num2_68 = next_num; den2_68 = next_den;
        if (i == k_68) cout << num2_68 << "/" << den2_68 << '\n';
    }
    cout << "5.68 б): ";
    num1_68 = 1; den1_68 = 1;
    num2_68 = 2; den2_68 = 1;
    sum_68 = 1.0 / 1.0;
    for (int i = 1; i <= n_68; i++) {
        if (i == 1) cout << "1/1 ";
        else if (i == 2) cout << "2/1 ";
        else {
            int next_num = num1_68 + num2_68;
            int next_den = den1_68 + den2_68;
            num1_68 = num2_68; den1_68 = den2_68;
            num2_68 = next_num; den2_68 = next_den;
            cout << num2_68 << "/" << den2_68 << " ";
            sum_68 = sum_68 + (double)num2_68 / den2_68;
        }
    }
    sum_68 = sum_68 + 2.0;
    cout << '\n';
    cout << "5.68 в): Сумма больше A? " << (sum_68 > a_val_68 ? "Да" : "Нет") << '\n'; // exercise 302 5.68

    return 0;
}
