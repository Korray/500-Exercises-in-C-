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
    
    int m = 10, n = 3;
    A = (m % n == 0);
    cout << "4.20: ";
    if (A) cout << "Частное: " << (m / n) << '\n';
    else cout << m << " на " << n << " нацело не делится\n"; // exercise 115 4.20

    int a_21 = 5, b_21 = 20;
    A = (b_21 % a_21 == 0);
    cout << "4.21: ";
    if (A) cout << "Является делителем\n";
    else cout << "Не является делителем\n"; // exercise 116 4.21

    int num_22 = 27;
    A = (num_22 % 2 == 0);
    B = (num_22 % 10 == 7);
    cout << "4.22: ";
    if (A) cout << "Четное. "; else cout << "Нечетное. ";
    if (B) cout << "Оканчивается на 7.\n";
    else cout << "Не оканчивается на 7.\n"; // exercise 117 4.22

    int num_23 = 52;
    int d1 = num_23 / 10, d2 = num_23 % 10;
    A = d1 > d2; B = d1 < d2; C = d1 == d2;
    cout << "4.23: ";
    if (A) cout << "Первая цифра больше\n";
    if (B) cout << "Вторая цифра больше\n";
    if (C) cout << "Цифры одинаковы\n"; // exercise 118 4.23

    int num_24 = 48;
    int d1_24 = num_24 / 10, d2_24 = num_24 % 10;
    A = (num_24 * num_24 == 4 * (d1_24 * d1_24 * d1_24 + d2_24 * d2_24 * d2_24));
    cout << "4.24: ";
    if (A) cout << "Равен\n";
    else cout << "Не равен\n"; // exercise 119 4.24

    int num_25 = 45;
    int a_25 = 8;
    int sum_25 = (num_25 / 10) + (num_25 % 10);
    A = (sum_25 >= 10 and sum_25 <= 99);
    B = (sum_25 > a_25);
    cout << "4.25: ";
    if (A) cout << "Сумма двузначная. "; else cout << "Сумма не двузначная. ";
    if (B) cout << "Сумма больше a.\n";
    else cout << "Сумма не больше a.\n"; // exercise 120 4.25

    int num_26 = 36;
    int a_26 = 3;
    int sum_26 = (num_26 / 10) + (num_26 % 10);
    A = (sum_26 % 3 == 0);
    B = (sum_26 % a_26 == 0);
    cout << "4.26: ";
    if (A) cout << "Кратна 3. "; else cout << "Не кратна 3. ";
    if (B) cout << "Кратна a.\n";
    else cout << "Не кратна a.\n"; // exercise 121 4.26

    int num_27 = 121;
    int d1_27 = num_27 / 100, d2_27 = (num_27 / 10) % 10, d3_27 = num_27 % 10;
    A = (d1_27 == d3_27);
    cout << "4.27: ";
    if (A) cout << "Палиндром\n";
    else cout << "Не палиндром\n"; // exercise 122 4.27

    int num_28 = 372;
    int d1_28 = num_28 / 100, d2_28 = (num_28 / 10) % 10, d3_28 = num_28 % 10;
    A = d1_28 > d3_28; B = d1_28 > d2_28; C = d2_28 > d3_28;
    cout << "4.28: ";
    if (A) cout << "Первая больше последней. "; else cout << "Последняя больше первой. ";
    if (B) cout << "Первая больше второй. "; else cout << "Вторая больше первой. ";
    if (C) cout << "Вторая больше последней.\n";
    else cout << "Последняя больше второй.\n"; // exercise 123 4.28

    int num_29 = 153;
    int d1_29 = num_29 / 100, d2_29 = (num_29 / 10) % 10, d3_29 = num_29 % 10;
    A = (num_29 * num_29 == (d1_29 * d1_29 * d1_29 + d2_29 * d2_29 * d2_29 + d3_29 * d3_29 * d3_29));
    cout << "4.29: ";
    if (A) cout << "Равен\n";
    else cout << "Не равен\n"; // exercise 124 4.29

    int num_30 = 234;
    int a_30 = 10;
    int d1_30 = num_30 / 100, d2_30 = (num_30 / 10) % 10, d3_30 = num_30 % 10;
    int sum_30 = d1_30 + d2_30 + d3_30;
    int prod_30 = d1_30 * d2_30 * d3_30;
    A = (sum_30 >= 10 and sum_30 <= 99);
    B = (prod_30 >= 100 and prod_30 <= 999);
    C = (prod_30 > a_30);
    D = (sum_30 % 5 == 0);
    cout << "4.30: ";
    if (A) cout << "Сумма двузначная. "; else cout << "Сумма не двузначная. ";
    if (B) cout << "Произведение трехзначное. "; else cout << "Произведение не трехзначное. ";
    if (C) cout << "Произведение больше a. "; else cout << "Произведение не больше a. ";
    if (D) cout << "Сумма кратна 5. "; else cout << "Сумма не кратна 5. ";
    if (sum_30 % a_30 == 0) cout << "Сумма кратна a.\n";
    else cout << "Сумма не кратна a.\n"; // exercise 125 4.30

    return 0;
}
