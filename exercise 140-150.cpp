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
    
    int num_56 = 47;
    int d1_56 = num_56 / 10, d2_56 = num_56 % 10;
    A = (d1_56 == 4) or (d2_56 == 4) or (d1_56 == 7) or (d2_56 == 7);
    B = (d1_56 == 3) or (d2_56 == 3) or (d1_56 == 6) or (d2_56 == 6) or (d1_56 == 9) or (d2_56 == 9);
    cout << "4.56: ";
    if (A) cout << "Входят 4 или 7. "; else cout << "4 и 7 не входят. ";
    if (B) cout << "Входят 3, 6 или 9.\n"; else cout << "3, 6, 9 не входят.\n"; // exercise 140 4.56

    int num_57 = 465;
    int n_57 = 6;
    int d1_57 = num_57 / 100, d2_57 = (num_57 / 10) % 10, d3_57 = num_57 % 10;
    A = (d1_57 == 6) or (d2_57 == 6) or (d3_57 == 6);
    B = (d1_57 == n_57) or (d2_57 == n_57) or (d3_57 == n_57);
    cout << "4.57: ";
    if (A) cout << "Цифра 6 входит. "; else cout << "Цифра 6 не входит. ";
    if (B) cout << "Цифра n входит.\n"; else cout << "Цифра n не входит.\n"; // exercise 141 4.57

    int num_58 = 147;
    int d1_58 = num_58 / 100, d2_58 = (num_58 / 10) % 10, d3_58 = num_58 % 10;
    A = (d1_58 == 4 or d2_58 == 4 or d3_58 == 4 or d1_58 == 7 or d2_58 == 7 or d3_58 == 7);
    B = (d1_58 == 3 or d2_58 == 3 or d3_58 == 3 or d1_58 == 6 or d2_58 == 6 or d3_58 == 6 or d1_58 == 9 or d2_58 == 9 or d3_58 == 9);
    cout << "4.58: ";
    if (A) cout << "Входят 4 или 7. "; else cout << "4 и 7 не входят. ";
    if (B) cout << "Входят 3, 6 или 9.\n"; else cout << "3, 6, 9 не входят.\n"; // exercise 142 4.58

    int num_59 = 3524;
    int b_59 = 5;
    int d1_59 = num_59 / 1000, d2_59 = (num_59 / 100) % 10, d3_59 = (num_59 / 10) % 10, d4_59 = num_59 % 10;
    A = (d1_59 == 4 or d2_59 == 4 or d3_59 == 4 or d4_59 == 4);
    B = (d1_59 == b_59 or d2_59 == b_59 or d3_59 == b_59 or d4_59 == b_59);
    cout << "4.59: ";
    if (A) cout << "Цифра 4 входит. "; else cout << "Цифра 4 не входит. ";
    if (B) cout << "Цифра b входит.\n"; else cout << "Цифра b не входит.\n"; // exercise 143 4.59

    int num_60 = 2345;
    int d1_60 = num_60 / 1000, d2_60 = (num_60 / 100) % 10, d3_60 = (num_60 / 10) % 10, d4_60 = num_60 % 10;
    A = (d1_60 == 2 or d2_60 == 2 or d3_60 == 2 or d4_60 == 2 or d1_60 == 7 or d2_60 == 7 or d3_60 == 7 or d4_60 == 7);
    B = (d1_60 == 3 or d2_60 == 3 or d3_60 == 3 or d4_60 == 3 or d1_60 == 6 or d2_60 == 6 or d3_60 == 6 or d4_60 == 6 or d1_60 == 9 or d2_60 == 9 or d3_60 == 9 or d4_60 == 9);
    cout << "4.60: ";
    if (A) cout << "Входят 2 или 7. "; else cout << "2 и 7 не входят. ";
    if (B) cout << "Входят 3, 6 или 9.\n"; else cout << "3, 6, 9 не входят.\n"; // exercise 144 4.60

    int n_61 = 3333;
    int d1_61 = n_61 / 1000, d2_61 = (n_61 / 100) % 10, d3_61 = (n_61 / 10) % 10, d4_61 = n_61 % 10;
    A = (d1_61 == d4_61) and (d2_61 == d3_61);
    cout << "4.61: ";
    if (A) cout << "Палиндром\n"; else cout << "Не палиндром\n"; // exercise 145 4.61

    int n_62 = 3363;
    int d1_62 = n_62 / 1000, d2_62 = (n_62 / 100) % 10, d3_62 = (n_62 / 10) % 10, d4_62 = n_62 % 10;
    A = (d1_62 == d2_62) and (d1_62 == d3_62) and (d1_62 != d4_62);
    B = (d1_62 == d2_62) and (d1_62 == d4_62) and (d1_62 != d3_62);
    C = (d1_62 == d3_62) and (d1_62 == d4_62) and (d1_62 != d2_62);
    D = (d2_62 == d3_62) and (d2_62 == d4_62) and (d2_62 != d1_62);
    cout << "4.62: ";
    if (A or B or C or D) cout << "Ровно три одинаковые цифры\n"; 
    else cout << "Не ровно три одинаковые цифры\n"; // exercise 146 4.62

    int n_63 = 3678;
    int d1_63 = n_63 / 1000, d2_63 = (n_63 / 100) % 10, d3_63 = (n_63 / 10) % 10, d4_63 = n_63 % 10;
    A = (d1_63 != d2_63) and (d1_63 != d3_63) and (d1_63 != d4_63) and (d2_63 != d3_63) and (d2_63 != d4_63) and (d3_63 != d4_63);
    cout << "4.63: ";
    if (A) cout << "Все цифры различны\n"; else cout << "Есть одинаковые цифры\n"; // exercise 147 4.63

    int num_64 = 123321;
    int d1_64 = num_64 / 100000, d2_64 = (num_64 / 10000) % 10, d3_64 = (num_64 / 1000) % 10;
    int d4_64 = (num_64 / 100) % 10, d5_64 = (num_64 / 10) % 10, d6_64 = num_64 % 10;
    A = (d1_64 + d2_64 + d3_64) == (d4_64 + d5_64 + d6_64);
    cout << "4.64: ";
    if (A) cout << "Счастливое число\n"; else cout << "Не счастливое число\n"; // exercise 148 4.64

    int n_65 = 2000;
    A = (n_65 % 4 == 0) and ((n_65 % 100 != 0) or (n_65 % 400 == 0));
    cout << "4.65: ";
    if (A) cout << "Високосный год\n"; else cout << "Не високосный год\n"; // exercise 149 4.65

    int a_66 = 10, b_66 = 8;
    int c_66 = 2, d_66 = 1, e_66 = 1;
    int max1 = (a_66 / c_66) * (b_66 / d_66);
    int max2 = (a_66 / d_66) * (b_66 / c_66);
    int max3 = (a_66 / c_66) * (b_66 / e_66);
    int max4 = (a_66 / e_66) * (b_66 / c_66);
    int ans = max1;
    if (max2 > ans) ans = max2;
    if (max3 > ans) ans = max3;
    if (max4 > ans) ans = max4;
    cout << "4.66: Максимальное количество костей: " << ans << '\n'; // exercise 150 4.66

    return 0;
}
