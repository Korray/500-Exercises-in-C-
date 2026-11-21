#include <iostream>
#include <iomanip>
#include <cmath>
#include <numbers>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int seq1[] = {5, 10, 15, 0};
    int sum1 = 0, count1 = 0, i1 = 0;
    while (seq1[i1] != 0) {
        sum1 = sum1 + seq1[i1];
        count1 = count1 + 1;
        i1 = i1 + 1;
    }
    cout << "6.1 a): Сумма = " << sum1 << '\n';
    cout << "6.1 б): Количество = " << count1 << '\n'; // exercise 331 6.1

    int seq2[] = {2, 4, 6, -1};
    int sum2 = 0, count2 = 0, i2 = 0;
    while (seq2[i2] >= 0) {
        sum2 = sum2 + seq2[i2];
        count2 = count2 + 1;
        i2 = i2 + 1;
    }
    cout << "6.2: Среднее = " << (double)sum2 / count2 << '\n'; // exercise 332 6.2

    double seq3[] = {1.0, 3.0, 5.0, 8.0, 10.0};
    int n3 = 5;
    double sum3 = 0.0;
    for (int i = 0; i < n3; i++) {
        sum3 = sum3 + seq3[i];
    }
    cout << "6.3: Сумма = " << sum3 << '\n'; // exercise 333 6.3

    double seq4[] = {-1.0, -2.0, -3.0, 4.0, 5.0};
    int n4 = 5;
    int count4 = 0;
    for (int i = 0; i < n4; i++) {
        count4 = count4 + (seq4[i] < 0);
    }
    cout << "6.4: Отрицательных в начале = " << count4 << '\n'; // exercise 334 6.4

    int seq5[] = {7, 7, 7, 8, 9};
    int n5 = 5;
    int count5 = 1;
    for (int i = 1; i < n5; i++) {
        count5 = count5 + (seq5[i] == seq5[0]);
    }
    cout << "6.5: Равных первому = " << count5 << '\n'; // exercise 335 6.5

    double seq6[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0, 13.0, 14.0, 15.0};
    int n6 = 15;
    double n_val6 = 7.5;
    double sum6 = 0.0;
    for (int i = 0; i < n6; i++) {
        if (seq6[i] < n_val6) sum6 = sum6 + seq6[i];
    }
    cout << "6.6 a): Сумма = " << sum6 << '\n';
    
    for (int i = 0; i < n6 - 1; i++) {
        if (seq6[i] < n_val6 and seq6[i + 1] > n_val6) {
            cout << "6.6 б): Между " << seq6[i] << " и " << seq6[i + 1] << '\n';
        }
    } // exercise 336 6.6

    int seq7[] = {2, 3, 4, 0};
    int prod7 = 1, i7 = 0;
    while (seq7[i7] != 0) {
        prod7 = prod7 * seq7[i7];
        cout << "6.7: " << prod7 << '\n';
        i7 = i7 + 1;
    } // exercise 337 6.7

    int n8 = 20;
    int val8 = 1, step8 = 3;
    while (val8 <= n8) {
        cout << "6.8: " << val8 << '\n';
        val8 = val8 + step8;
        step8 = step8 + 2;
    } // exercise 338 6.8

    int n9 = 10;
    int val9 = 1, step9 = 3;
    while (val9 <= n9) {
        val9 = val9 + step9;
        step9 = step9 + 2;
    }
    cout << "6.9: Первое больше = " << val9 << '\n'; // exercise 339 6.9

    int n10 = 20;
    int val10 = 1;
    while (val10 * val10 <= n10) {
        cout << "6.10 a): " << val10 << '\n';
        val10 = val10 + 1;
    }
    while (val10 * val10 <= n10) {
        val10 = val10 + 1;
    }
    cout << "6.10 б): Первое, квадрат которого больше = " << val10 << '\n'; // exercise 340 6.10

    double a11 = 1.25;
    for (int i = 1; i <= 100; i++) {
        double val = 1.0 + 1.0 / i;
        if (val >= a11) cout << "6.11: " << val << '\n';
    } // exercise 341 6.11

    double a12 = 1.25;
    for (int i = 1; i <= 100; i++) {
        double val = 1.0 + 1.0 / i;
        if (val < a12) {
            cout << "6.12: " << val << '\n';
            break;
        }
    } // exercise 342 6.12

    double a13 = 1.25;
    for (int n = 1; n <= 100; n++) {
        double sum = 0.0;
        for (int i = 1; i <= n; i++) {
            sum = sum + (1.0 + 1.0 / i);
        }
        if (sum >= a13) cout << "6.13: n = " << n << '\n';
    } // exercise 343 6.13

    double a14 = 1.25;
    for (int n = 1; n <= 100; n++) {
        double last = 1.0 + 1.0 / n;
        if (last < a14) {
            cout << "6.14: n = " << n << '\n';
            break;
        }
    } // exercise 344 6.14

    double a15 = 1.5;
    for (int i = 1; i <= 100; i++) {
        double val = 1.0 + 1.0 / i;
        if (val < a15) cout << "6.15: " << val << '\n';
    } // exercise 345 6.15

    double n16 = 2.5;
    double sum16 = 1.0;
    int k16 = 1;
    while (sum16 <= n16) {
        k16 = k16 + 1;
        sum16 = sum16 + 1.0 / k16;
    }
    cout << "6.16: Первое большее = " << sum16 << '\n'; // exercise 346 6.16

    double a17 = 2.0;
    double sum17 = 0.0;
    for (int n = 1; n <= 100; n++) {
        sum17 = sum17 + 1.0 / n;
        if (sum17 > a17) cout << "6.17: n = " << n << '\n';
    } // exercise 347 6.17

    double a18 = 2.0;
    double sum18 = 0.0;
    for (int n = 1; n <= 100; n++) {
        sum18 = sum18 + 1.0 / n;
        if (sum18 > a18) {
            cout << "6.18: n = " << n << '\n';
            break;
        }
    } // exercise 348 6.18

    int num19 = 1, den19 = 1;
    int num19b = 2, den19b = 1;
    double prev19 = 1.0, curr19 = 2.0;
    int k19 = 3;
    while (abs(curr19 - prev19) > 0.001) {
        int next_num = num19 + num19b;
        int next_den = den19 + den19b;
        num19 = num19b; den19 = den19b;
        num19b = next_num; den19b = next_den;
        prev19 = curr19;
        curr19 = (double)num19b / den19b;
        k19 = k19 + 1;
    }
    cout << "6.19: Первый член = " << curr19 << '\n'; // exercise 349 6.19

    double x20 = 4.0, eps20 = 0.01;
    double y_prev20 = 1.0, y_curr20 = 0.5 * (y_prev20 + x20 / (y_prev20 - 1.0));
    while (abs(y_curr20 * y_curr20 - y_prev20 * y_prev20) >= eps20) {
        y_prev20 = y_curr20;
        y_curr20 = 0.5 * (y_prev20 + x20 / (y_prev20 - 1.0));
    }
    cout << "6.20: Первый член = " << y_curr20 << '\n'; // exercise 350 6.20

    double n21 = 10.0;
    long long f1_21 = 1, f2_21 = 1, fk_21 = 1;
    while (fk_21 <= n21) {
        fk_21 = f1_21 + f2_21;
        f1_21 = f2_21;
        f2_21 = fk_21;
    }
    cout << "6.21 a): Первое больше = " << fk_21 << '\n';
    
    long long sum21 = 0;
    f1_21 = 1; f2_21 = 1; fk_21 = 1;
    sum21 = 1;
    while (fk_21 <= 1000) {
        fk_21 = f1_21 + f2_21;
        f1_21 = f2_21;
        f2_21 = fk_21;
        if (fk_21 <= 1000) sum21 = sum21 + fk_21;
    }
    cout << "6.21 б): Сумма = " << sum21 << '\n'; // exercise 351 6.21

    return 0;
}
