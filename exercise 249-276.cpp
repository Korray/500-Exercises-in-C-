#include <iostream>
#include <iomanip>
#include <cmath>
#include <numbers>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int sum_27a = 0;
    for (int i = 100; i <= 500; i++) {
        sum_27a = sum_27a + i;
    }
    cout << "5.27 a): Сумма = " << sum_27a << '\n'; // exercise 249 5.27

    int a_27b = 200;
    int sum_27b = 0;
    for (int i = a_27b; i <= 500; i++) {
        sum_27b = sum_27b + i;
    }
    cout << "5.27 б): Сумма = " << sum_27b << '\n'; // exercise 250 5.27

    int b_27v = 10;
    int sum_27v = 0;
    for (int i = -10; i <= b_27v; i++) {
        sum_27v = sum_27v + i;
    }
    cout << "5.27 в): Сумма = " << sum_27v << '\n'; // exercise 251 5.27

    int a_27g = 5, b_27g = 15;
    int sum_27g = 0;
    for (int i = a_27g; i <= b_27g; i++) {
        sum_27g = sum_27g + i;
    }
    cout << "5.27 г): Сумма = " << sum_27g << '\n'; // exercise 252 5.27

    long long prod_28a = 1;
    for (int i = 8; i <= 15; i++) {
        prod_28a = prod_28a * i;
    }
    cout << "5.28 a): Произведение = " << prod_28a << '\n'; // exercise 253 5.28

    int a_28b = 10;
    long long prod_28b = 1;
    for (int i = a_28b; i <= 20; i++) {
        prod_28b = prod_28b * i;
    }
    cout << "5.28 б): Произведение = " << prod_28b << '\n'; // exercise 254 5.28

    int b_28v = 10;
    long long prod_28v = 1;
    for (int i = 1; i <= b_28v; i++) {
        prod_28v = prod_28v * i;
    }
    cout << "5.28 в): Произведение = " << prod_28v << '\n'; // exercise 255 5.28

    int a_28g = 5, b_28g = 10;
    long long prod_28g = 1;
    for (int i = a_28g; i <= b_28g; i++) {
        prod_28g = prod_28g * i;
    }
    cout << "5.28 г): Произведение = " << prod_28g << '\n'; // exercise 256 5.28

    double sum_29a = 0.0;
    for (int i = 1; i <= 1000; i++) {
        sum_29a = sum_29a + i;
    }
    cout << "5.29 a): Среднее = " << (sum_29a / 1000.0) << '\n'; // exercise 257 5.29

    int b_29b = 150;
    double sum_29b = 0.0;
    int count_29b = 0;
    for (int i = 100; i <= b_29b; i++) {
        sum_29b = sum_29b + i;
        count_29b = count_29b + 1;
    }
    cout << "5.29 б): Среднее = " << (sum_29b / count_29b) << '\n'; // exercise 258 5.29

    int a_29v = 50, b_29v = 200;
    double sum_29v = 0.0;
    int count_29v = 0;
    for (int i = a_29v; i <= b_29v; i++) {
        sum_29v = sum_29v + i;
        count_29v = count_29v + 1;
    }
    cout << "5.29 в): Среднее = " << (sum_29v / count_29v) << '\n'; // exercise 259 5.29

    int a_29g = 10, b_29g = 20;
    double sum_29g = 0.0;
    int count_29g = 0;
    for (int i = a_29g; i <= b_29g; i++) {
        sum_29g = sum_29g + i;
        count_29g = count_29g + 1;
    }
    cout << "5.29 г): Среднее = " << (sum_29g / count_29g) << '\n'; // exercise 260 5.29

    long long sum_30a = 0;
    for (int i = 20; i <= 40; i++) {
        sum_30a = sum_30a + (i * i * i);
    }
    cout << "5.30 a): Сумма кубов = " << sum_30a << '\n'; // exercise 261 5.30

    int a_30b = 10;
    long long sum_30b = 0;
    for (int i = a_30b; i <= 50; i++) {
        sum_30b = sum_30b + (i * i);
    }
    cout << "5.30 б): Сумма квадратов = " << sum_30b << '\n'; // exercise 262 5.30

    int n_30v = 10;
    long long sum_30v = 0;
    for (int i = 1; i <= n_30v; i++) {
        sum_30v = sum_30v + (i * i);
    }
    cout << "5.30 в): Сумма квадратов = " << sum_30v << '\n'; // exercise 263 5.30

    int a_30g = 5, b_30g = 10;
    long long sum_30g = 0;
    for (int i = a_30g; i <= b_30g; i++) {
        sum_30g = sum_30g + (i * i);
    }
    cout << "5.30 г): Сумма квадратов = " << sum_30g << '\n'; // exercise 264 5.30

    int n_31 = 5;
    long long sum_31 = 0;
    for (int i = n_31; i <= 2 * n_31; i++) {
        sum_31 = sum_31 + (i * i);
    }
    cout << "5.31: Сумма = " << sum_31 << '\n'; // exercise 265 5.31

    int n_32 = 10;
    double sum_32 = 0.0;
    for (int i = 1; i <= n_32; i++) {
        sum_32 = sum_32 + (1.0 / i);
    }
    cout << "5.32: Сумма = " << sum_32 << '\n'; // exercise 266 5.32

    double sum_33 = 0.0;
    for (int i = 2; i <= 10; i++) {
        sum_33 = sum_33 + (double)i / (i + 1);
    }
    cout << "5.33: Сумма = " << sum_33 << '\n'; // exercise 267 5.33

    double sum_34 = 1.0;
    double term_34 = 1.0;
    for (int i = 1; i <= 8; i++) {
        term_34 = term_34 / 3.0;
        sum_34 = sum_34 + term_34;
    }
    cout << "5.34: Сумма = " << sum_34 << '\n'; // exercise 268 5.34

    int n_35 = 10;
    double sum_35 = 0.0;
    double term_35 = 1.0;
    bool sign_35 = true;
    for (int i = 1; i <= n_35; i++) {
        if (sign_35) sum_35 = sum_35 + term_35;
        else sum_35 = sum_35 - term_35;
        sign_35 = !sign_35;
        term_35 = 1.0 / (i + 1);
    }
    cout << "5.35: Сумма = " << sum_35 << '\n'; // exercise 269 5.35

    double x_36 = 2.0;
    double sum_36 = x_36;
    double term_36 = x_36;
    double x_sq_36 = x_36 * x_36;
    for (int i = 1; i <= 5; i++) {
        term_36 = term_36 * x_sq_36;
        sum_36 = sum_36 + (term_36 / (2 * i + 1));
    }
    cout << "5.36: Сумма = " << sum_36 << '\n'; // exercise 270 5.36

    double x_37 = 2.0;
    double sum_37 = 1.0;
    double term_37 = 1.0;
    bool sign_37 = false;
    for (int i = 1; i <= 10; i++) {
        term_37 = term_37 * x_37;
        if (sign_37) sum_37 = sum_37 + ((i + 1) * term_37 / (i + 2));
        else sum_37 = sum_37 - ((i + 1) * term_37 / (i + 2));
        sign_37 = !sign_37;
    }
    cout << "5.37: Сумма = " << sum_37 << '\n'; // exercise 271 5.37

    int n_38 = 100;
    double pos_38 = 0.0;
    double total_path_38 = 0.0;
    for (int i = 1; i <= n_38; i++) {
        if (i % 2 != 0) {
            pos_38 = pos_38 + (1.0 / i);
        } else {
            pos_38 = pos_38 - (1.0 / i);
        }
        total_path_38 = total_path_38 + (1.0 / i);
    }
    cout << "5.38 a): Расстояние от дома = " << pos_38 << '\n';
    cout << "5.38 б): Общий путь = " << total_path_38 << '\n'; // exercise 272 5.38

    double sum_39 = 0.0;
    double a_39[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1};
    for (int i = 0; i < 10; i++) {
        sum_39 = sum_39 + a_39[i];
    }
    cout << "5.39: Сумма = " << sum_39 << '\n'; // exercise 273 5.39

    int n_40 = 5;
    double sum_40 = 0.0;
    double a_40[5] = {1.5, 2.5, 3.5, 4.5, 5.5};
    for (int i = 0; i < n_40; i++) {
        sum_40 = sum_40 + a_40[i];
    }
    cout << "5.40: Сумма = " << sum_40 << '\n'; // exercise 274 5.40

    double sum_41 = 0.0;
    double m_41[12] = {1.0, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2.0, 2.1};
    for (int i = 0; i < 12; i++) {
        sum_41 = sum_41 + m_41[i];
    }
    cout << "5.41: Общая масса = " << sum_41 << '\n'; // exercise 275 5.41

    int sum_42 = 0;
    int marks_42[4] = {4, 5, 3, 4};
    for (int i = 0; i < 4; i++) {
        sum_42 = sum_42 + marks_42[i];
    }
    cout << "5.42: Сумма баллов = " << sum_42 << '\n'; // exercise 276 5.42

    return 0;
}
