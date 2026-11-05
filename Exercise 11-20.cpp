using namespace std;
#include <iostream>
#include <iomanip>
#include <cmath>
#include <numbers>

int main()
{
    int a, b, x, y;
    cout << 50 << '\n' << 50 << '\n' << 50 << '\n' << 50 << '\n'; //execise 11 1.11

    cout << 5 << " 10" << '\n' << 7 << " cm\n";
    cout << 100 << " t\n" << 1949 << " v\n";
    cout << "x " << 25 << '\n' << "x y"; // execise 12 1.12

    cout << "2 kg" << '\n' << "13 17" << "\n";
    cout << a << 1 << "\n" << "19 " << b << " v\n";
    cout << x << y << '\n' << 5 << y; // execise 13 1.13

    // Дополнительные переменные для заданий 1.14 и 1.15
    double A, B, C, X, Y, n, m, alpha, beta;

    // ==========================================
    // Exercise 1.14
    // ==========================================
    2 * X; // a) 2x
    sin(X); // б) sin x
    X* X; // в) a^2 (предполагая, что переменная a - это X)
    sqrt(X); // г) sqrt(x)
    abs(n); // д) |n|
    5 * cos(Y); // е) 5cos y
    -7.5 * X * X; // ж) -7,5a^2
    3 * sqrt(X); // з) 3sqrt(x)
    sin(alpha)* cos(beta) + cos(alpha) * sin(beta); // и) sin α cos β + cos α sin β
    A* sqrt(2 * B); // к) a sqrt(2b)
    3 * sin(2 * alpha) * cos(3 * beta); // л) 3sin 2α cos 3β
    -5 * sqrt(X + sqrt(Y)); // м) -5sqrt(x + sqrt(y))


    // ==========================================
    // Exercise 1.15
    // ==========================================
    -1.0 / (X * X); // а) -1 / x^2
    A / (B * C); // б) a / bc
    (A / B) / C; // в) (a/b) / c
    (A + B) / 2.0; // г) (a + b) / 2
    5.45 * (A + 2 * B) / (2 - A); // д) 5,45 * (a + 2b) / (2 - a)
    (-B + sqrt(B * B - 4 * A * C)) / (2 * A); // е) (-b + sqrt(b^2 - 4ac)) / 2a
    (-B + 1.0 / A) / C; // ж) (-b + 1/a) / c
    1.0 / (1 + (A + B) / 2.0); // з) 1 / (1 + (a+b)/2)
    1.0 / (1 + 1.0 / (2 + 1.0 / (2 + 3.0 / 5.0))); // и) 1 / (1 + 1 / (2 + 1 / (2 + 3/5)))
    pow(2, pow(m, n)); // к) 2^(m^n)


    // ==========================================
    // Exercise 1.16 (Перевод в обычную запись в комментариях)
    // ==========================================
    // а) a / b / c;      -> a / (b * c)
    // б) a * b / c;      -> (a * b) / c
    // в) a / b * c;      -> (a / b) * c
    // г) a + b / c;      -> a + (b / c)
    // д) a + b / c;      -> a + (b / c)  (в учебнике опечатка, совпадает с "г")
    // е) a + b / b + c;  -> a + (b / b) + c
    // ж) a + b / b + c;  -> a + (b / b) + c (в учебнике опечатка, совпадает с "е")
    // з) a / sin b;      -> a / sin(b)
    // и) 1/2 * a * b * sin x; -> (1/2) * a * b * sin(x)
    // к) 2 * b * c * cos a / 2 / b + c; -> (2 * b * c * cos(a)) / (2 * b) + c
    // л) 4 * R * sin a / 2 * sin b / 2 * sin c / 2; -> 4 * R * (sin(a) / 2) * (sin(b) / 2) * (sin(c) / 2)
    // м) a * x + b / c * x + d; -> a * x + (b / c) * x + d
    // н) 2 * sin a + b / 2 * cos a - b / 2; -> 2 * sin(a) + (b / 2) * cos(a) - (b / 2)
    // о) abs 2 * sin - 3 * abs x / 2; -> abs(2 * sin(-3 * abs(x / 2))) 


    // ==========================================
    // Exercise 1.17
    // ==========================================
    double x1, x2, x3, v0, t, g, m1, m2, r, I, R, R1, R2, v, h, d, k, s_exec, x_exec;
    double ans_1_17_a = sqrt(x1 * x1 + x2 * x2); // а) sqrt(x1^2 + x2^2)
    double ans_1_17_b = x1 * x2 + x1 * x3 + x2 * x3; // б) x1x2 + x1x3 + x2x3
    double ans_1_17_v = v0 * t + (a * t * t) / 2.0; // в) v0t + at^2/2
    double ans_1_17_g = (m * v * v) / 2.0 + m * g * h; // г) mv^2/2 + mgh
    double ans_1_17_d = 1.0 / R1 + 1.0 / R2; // д) 1/R1 + 1/R2
    double ans_1_17_e = m * g * cos(alpha); // е) mg cos α
    double ans_1_17_zh = 2 * M_PI * R; // ж) 2πR (M_PI из <cmath>)
    double ans_1_17_z = b * b - 4 * a * C; // з) b^2 - 4ac
    double ans_1_17_i = g * (m1 * m2) / (r * r); // и) γ m1m2/r^2 (g - гамма)
    double ans_1_17_k = I * I * R; // к) I^2R
    double ans_1_17_l = a * b * sin(C); // л) ab sin c
    double ans_1_17_m = sqrt(a * a + b * b - 2 * a * b * cos(C)); // м) sqrt(a^2 + b^2 - 2ab cos c)
    double ans_1_17_n = (a * d + b * C) / (a * d); // н) (ad + bc) / ad
    double ans_1_17_o = sqrt(1 - sin(X) * sin(X)); // о) sqrt(1 - sin^2 x)
    double ans_1_17_p = 1.0 / sqrt(a * X * X + b * X + C); // п) 1 / sqrt(ax^2 + bx + c)
    double ans_1_17_r = (sqrt(X + 1) + sqrt(X - 1)) / (2.0 * sqrt(X)); // р) (sqrt(x+1) + sqrt(x-1)) / 2sqrt(x)
    double ans_1_17_s = abs(X) + abs(X + 1); // с) |x| + |x + 1|
    double ans_1_17_t = abs(1 - abs(X)); // т) |1 - |x||


    // ==========================================
    // Exercise 1.18
    // ==========================================
    // а)
    s_exec = 5;
    s_exec = 57;
    cout << "\n1.18 a) s = " << s_exec; // ответ: 57
    // б)
    s_exec = 6;
    s_exec = -5.2 * s_exec;
    s_exec = 0;
    cout << "\n1.18 b) s = " << s_exec; // ответ: 0
    // в)
    s_exec = -7.5;
    s_exec = 2 * s_exec;
    cout << "\n1.18 v) s = " << s_exec; // ответ: -15
    // г)
    s_exec = 45;
    s_exec = -25;
    s_exec = s_exec + k;
    cout << "\n1.18 g) s = " << s_exec; // ответ: -25 + k


    // ==========================================
    // Exercise 1.19
    // ==========================================
    // а)
    x_exec = 10;
    x_exec = -10;
    cout << "\n1.19 a) x = " << x_exec; // ответ: -10
    // б)
    x_exec = 17.5;
    x_exec = -2 * x_exec;
    cout << "\n1.19 b) x = " << x_exec; // ответ: -35
    // в)
    x_exec = 60;
    x_exec = x_exec - 1;
    x_exec = 0;
    cout << "\n1.19 v) x = " << x_exec; // ответ: 0
    // г)
    x_exec = -50;
    x_exec = -25;
    x_exec = x_exec + k;
    cout << "\n1.19 g) x = " << x_exec; // ответ: -25 + k


    // ==========================================
    // Exercise 1.20
    // ==========================================
    // а)
    s_exec = 14;
    k = -3;
    d = s_exec + 1;
    s_exec = d;
    k = 2 * s_exec;
    cout << "\n1.20 a) s = " << s_exec << ", k = " << k; // ответ: s = 15, k = 30
    // б)
    s_exec = 0;
    k = 30;
    d = k - 5;
    k = 2 * d;
    s_exec = k - 100;
    cout << "\n1.20 b) s = " << s_exec << ", k = " << k << "\n"; // ответ: s = -50, k = 50

    return 0;
}
// с импользованием ии пару заданий
