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
    
    double a = 1.0, b = 2.0, c = 3.0;
    A = (a < b) and (b < c);
    B = (b > a) and (a > c);
    cout << "4.42: ";
    if (A) cout << "a < b < c выполняется. "; else cout << "a < b < c не выполняется. ";
    if (B) cout << "b > a > c выполняется.\n"; else cout << "b > a > c не выполняется.\n"; // exercise 126 4.42

    int a_43 = 4, b_43 = 12;
    A = (b_43 % a_43 == 0) or (a_43 % b_43 == 0);
    cout << "4.43: ";
    if (A) cout << "Да, одно из чисел является делителем другого\n";
    else cout << "Нет, ни одно из чисел не является делителем другого\n"; // exercise 127 4.43

    int a_44 = -10, b_44 = 3, c_44 = 2, d_44 = 1;
    int rem = a_44 % b_44;
    if (rem < 0) rem = rem + b_44;
    A = (rem == c_44) or (rem == d_44);
    cout << "4.44: ";
    if (A) cout << "Остаток равен одному из заданных чисел\n";
    else cout << "Остаток не равен ни одному из заданных чисел\n"; // exercise 128 4.44

    double a_45 = 1.0, b_45 = 2.0, c_45 = 1.0;
    A = (a_45 == b_45) or (b_45 == c_45) or (a_45 == c_45);
    cout << "4.45: ";
    if (A) cout << "Есть хотя бы одна пара равных чисел\n";
    else cout << "Нет равных чисел\n"; // exercise 129 4.45

    double a_46 = 3.0, b_46 = 3.0, c_46 = 3.0;
    A = (a_46 == b_46) and (b_46 == c_46);
    cout << "4.46: ";
    if (A) cout << "Треугольник равносторонний\n";
    else cout << "Треугольник не равносторонний\n"; // exercise 130 4.46

    double a_47 = 3.0, b_47 = 3.0, c_47 = 4.0;
    A = ((a_47 == b_47) or (b_47 == c_47) or (a_47 == c_47)) and !((a_47 == b_47) and (b_47 == c_47));
    cout << "4.47: ";
    if (A) cout << "Треугольник равнобедренный\n";
    else cout << "Треугольник не равнобедренный\n"; // exercise 131 4.47

    double h1 = 170.0, h2 = 175.0, h3 = 170.0;
    A = (h1 == h2) or (h2 == h3) or (h1 == h3);
    cout << "4.48: ";
    if (A) cout << "Есть люди одинакового роста\n";
    else cout << "Все разного роста\n"; // exercise 132 4.48

    double a_49 = 1.0, b_49 = -3.0, c_49 = 2.0;
    double D_49 = b_49 * b_49 - 4 * a_49 * c_49;
    A = (D_49 > 0); B = (D_49 == 0); C = (D_49 < 0);
    cout << "4.49: ";
    if (A) {
        double r1 = (-b_49 + sqrt(D_49)) / (2 * a_49);
        double r2 = (-b_49 - sqrt(D_49)) / (2 * a_49);
        cout << "Два корня: " << r1 << " и " << r2 << '\n';
    } else if (B) {
        double r = -b_49 / (2 * a_49);
        cout << "Один корень: " << r << '\n';
    } else if (C) {
        cout << "Корней нет\n";
    } // exercise 133 4.49

    double a_50 = 2.0, b_50 = 3.0, c_50 = 5.0, d_50 = 6.0;
    A = ((a_50 <= c_50 and b_50 <= d_50) or (a_50 <= d_50 and b_50 <= c_50));
    cout << "4.50: ";
    if (A) cout << "Можно поместить\n";
    else cout << "Нельзя поместить\n"; // exercise 134 4.50

    double a_51 = 100.0, b_51 = 150.0, c_51 = 102.0, d_51 = 152.0;
    A = (a_51 + 2 <= c_51 and b_51 + 2 <= d_51) or (a_51 + 2 <= d_51 and b_51 + 2 <= c_51);
    cout << "4.51: ";
    if (A) cout << "Открытка войдет\n";
    else cout << "Открытка не войдет\n"; // exercise 135 4.51

    double a_52 = 10.0, b_52 = 10.0, d_52 = 9.0;
    A = (d_52 + 2 <= a_52 and d_52 + 2 <= b_52);
    cout << "4.52: ";
    if (A) cout << "Вася сможет проснуть голову\n";
    else cout << "Вася не сможет проснуть голову\n"; // exercise 136 4.52

    double a_53 = 2.0, b_53 = 3.0, c_53 = 4.0, x_53 = 5.0, y_53 = 6.0;
    A = ((a_53 <= x_53 and b_53 <= y_53) or (a_53 <= y_53 and b_53 <= x_53) or
         (a_53 <= x_53 and c_53 <= y_53) or (a_53 <= y_53 and c_53 <= x_53) or
         (b_53 <= x_53 and c_53 <= y_53) or (b_53 <= y_53 and c_53 <= x_53));
    cout << "4.53: ";
    if (A) cout << "Кирпич пройдет\n";
    else cout << "Кирпич не пройдет\n"; // exercise 137 4.53

    double a1 = 1.0, a2 = 2.0, a3 = 3.0;
    double b1 = 2.0, b2 = 3.0, b3 = 4.0;
    A = ((a1 <= b1 and a2 <= b2 and a3 <= b3) or
         (a1 <= b1 and a2 <= b3 and a3 <= b2) or
         (a1 <= b2 and a2 <= b1 and a3 <= b3) or
         (a1 <= b2 and a2 <= b3 and a3 <= b1) or
         (a1 <= b3 and a2 <= b1 and a3 <= b2) or
         (a1 <= b3 and a2 <= b2 and a3 <= b1));
    cout << "4.54: ";
    if (A) cout << "Пассажир сможет сэкономить\n";
    else cout << "Пассажир не сможет сэкономить\n"; // exercise 138 4.54

    int num_55 = 34;
    int a_55 = 3;
    int d1_55 = num_55 / 10, d2_55 = num_55 % 10;
    A = (d1_55 == 3) or (d2_55 == 3);
    B = (d1_55 == a_55) or (d2_55 == a_55);
    cout << "4.55: ";
    if (A) cout << "Цифра 3 входит. "; else cout << "Цифра 3 не входит. ";
    if (B) cout << "Цифра a входит.\n";
    else cout << "Цифра a не входит.\n"; // exercise 139 4.55

    return 0;
}
