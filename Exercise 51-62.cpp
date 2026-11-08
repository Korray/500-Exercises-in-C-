#include <iostream>
#include <iomanip>
#include <cmath>
#include <numbers>
using namespace std;
int main()
{
    double x1, y1, x2, y2, x, y;
    float a, b;
    cout << "1.51 Write coordinates of quadrilateral (x1 y1 ... x4 y4): ";
    cin >> x1 >> y1 >> x2 >> y2 >> x >> y;
    cin >> a >> b; // используем a, b для 4-й точки
    // площадь через 2 треугольника (разбиение диагональю 1-3)
    float area1 = fabs((x2 - x1) * (y - y1) - (x - x1) * (y2 - y1)) / 2;
    float area2 = fabs((x - x1) * (b - y1) - (a - x1) * (y - y1)) / 2;
    cout << "Area: " << area1 + area2 << "\n";

    float price_c, price_p, price_a;
    cout << "1.52 Write prices (candies cookies apples): ";
    cin >> price_c >> price_p >> price_a;
    float kg_c, kg_p, kg_a;
    cout << "Write weights (kg_c kg_p kg_a): ";
    cin >> kg_c >> kg_p >> kg_a;
    cout << "Total cost: " << price_c * kg_c + price_p * kg_p + price_a * kg_a << "\n";

    float p_mon, p_sys, p_key, p_mou;
    cout << "1.53 Write prices (monitor system keyboard mouse): ";
    cin >> p_mon >> p_sys >> p_key >> p_mou;
    int n_comp;
    cout << "Write N computers: ";
    cin >> n_comp;
    cout << "Cost of 3: " << 3 * (p_mon + p_sys + p_key + p_mou) << "\n";
    cout << "Cost of N: " << n_comp * (p_mon + p_sys + p_key + p_mou) << "\n";

    float tanya, mitya;
    cout << "1.54 Write ages (Tanya Mitya): ";
    cin >> tanya >> mitya;
    float avg_age = (tanya + mitya) / 2;
    cout << "Average age: " << avg_age << "\n";
    cout << "Tanya diff: " << fabs(tanya - avg_age) << " Mitya diff: " << fabs(mitya - avg_age) << "\n";

    float v1, v2, s_dist;
    cout << "1.55 Write speeds and distance (v1 v2 S): ";
    cin >> v1 >> v2 >> s_dist;
    cout << "Time: " << s_dist / (v1 + v2) << "\n";

    cout << "1.56 Write speeds and distance (v1 v2 S): ";
    cin >> v1 >> v2 >> s_dist;
    // расстояние через 30 мин (0.5 ч)
    cout << "Distance in 30 mins: " << s_dist + (v1 - v2) * 0.5 << "\n";

    float temp_c;
    cout << "1.57 Write temperature in Celsius: ";
    cin >> temp_c;
    cout << "Fahrenheit: " << temp_c * 1.8 + 32 << "\n";
    cout << "Kelvin: " << temp_c + 273.15 << "\n";

    float fahrenheit = 450;
    cout << "1.58 Celsius for 450 F: " << (fahrenheit - 32) / 1.8 << "\n";
    float a1 = 2.0, b1 = 3.0, c = 4.0, temp;
    cout << "Initial: a = " << a1 << ", b = " << b1 << ", c = " << c << "\n";

    // exercise 59 1.59
    // Обмен значениями двух переменных
    temp = a;
    a = b;
    b = temp;
    cout << "1.59 (swap a and b): a = " << a << ", b = " << b << "\n";


    // exercise 60 1.60
 
    a = 2.0; b = 3.0; c = 4.0;

    temp = c;
    b = temp;
    temp = b;
    a = temp;
    temp = a;
    c = temp;
   

    // б) b = a; c = b; a = c; 
    temp = a;
    b = temp;
    temp = b;
    c = temp;
    temp = c;
    a = temp;
    cout << "1.60 (literal assignment): a = " << a << ", b = " << b << ", c = " << c << "\n";

    a = 2.0; b = 3.0; c = 4.0;
    temp = c; // temp = 4
    c = b;    // c = 3
    b = a;    // b = 2
    a = temp; // a = 4
    cout << "1.60 (actual swap): a = " << a << ", b = " << b << ", c = " << c << "\n";



    a = 1.5;
    float a2 = a * a;       
    float a4 = a2 * a2;     
    float a8 = a4 * a4;     

    cout << "1.61 a) a^4 = " << a4 << "\n";


    float a6 = a4 * a2;
    cout << "1.61 b) a^6 = " << a6 << "\n";


    float a7 = a6 * a;
    cout << "1.61 v) a^7 = " << a7 << "\n";


    cout << "1.61 g) a^8 = " << a8 << "\n";

   
    float a9 = a8 * a;
    cout << "1.61 d) a^9 = " << a9 << "\n";

 
    float a10 = a8 * a2;
    cout << "1.61 e) a^10 = " << a10 << "\n";

   
    float a12 = a8 * a4;
    float a13 = a12 * a;
    cout << "1.61 zh) a^13 = " << a13 << "\n";

    float a16 = a8 * a8; 
    float a15 = a16 / a; 

    float a15_mul = a8 * a4 * a2 * a; 
  
    float step1 = a8 * a4; 
    float step2 = step1 * a2; 
    float a15_m = step2 * a; 
    float a5 = a4 * a;
    float a10_new = a5 * a5;
    float a15_new = a10_new * a5;
    cout << "1.61 z) a^15 = " << a15_new << "\n";

    float a16_new = a8 * a8;
    float a20 = a16_new * a4;
    float a21 = a20 * a;
    cout << "1.61 i) a^21 = " << a21 << "\n";

    float a28 = a16_new * a8 * a4;
    cout << "1.61 k) a^28 = " << a28 << "\n";

    float a32 = a16_new * a16_new;
    float a64 = a32 * a32;
    cout << "1.61 l) a^64 = " << a64 << "\n";

    float a5_62 = (a * a * a) * (a * a); 
    
    float x22 = a * a;       
    float x3 = x2 * a;     
    float x5 = x3 * x2;     
    float x10 = x5 * x5;   
    cout << "1.62 a) a^3 = " << x3 << ", a^10 = " << x10 << "\n";

    float b2 = a * a;
    float b4 = b2 * b2;
    float b5 = b4 * a;
    float b10 = b5 * b5;
    float b20 = b10 * b10;
    cout << "1.62 b) a^4 = " << b4 << ", a^20 = " << b20 << "\n";

    float c2 = a * a;
    float c3 = c2 * a;
    float c5 = c3 * c2;
    float c10 = c5 * c5;
    float c13 = c10 * c3;
    cout << "1.62 v) a^5 = " << c5 << ", a^13 = " << c13 << "\n";

    float d2 = a * a;
    float d4 = d2 * d2;
    float d8 = d4 * d4;
    float d16 = d8 * d8;
    float d19 = d16 * d2 * a;
    cout << "1.62 g) a^5 = " << d4 * a << ", a^19 = " << d19 << "\n";

    float e2 = a * a;
    float e4 = e2 * e2;
    float e5 = e4 * a;
    float e8 = e4 * e4;
    float e16 = e8 * e8;
    float e17 = e16 * a;
    cout << "1.62 d) a^2 = " << e2 << ", a^5 = " << e5 << ", a^17 = " << e17 << "\n";

    float f2 = a * a;
    float f4 = f2 * f2;
    float f8 = f4 * f4;
    float f12 = f8 * f4;
    float f16 = f8 * f8;
    float f28 = f16 * f12;
    cout << "1.62 e) a^4 = " << f4 << ", a^12 = " << f12 << ", a^28 = " << f28 << "\n";

    return 0;
}

