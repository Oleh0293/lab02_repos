// Lab_03_1.cpp
// Хомицький Данило
// Лабораторна робота No 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 16
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x; //проміжний параметр
    double y; //результат обчилення виразу
    double A; //проміжний результат сталої частини
    double B; //проміжний результат змінної частини
    cout << "x =";
    cin >> x;
    A = 5 * exp(3 * x);
//посіб 1:розгалуження в скороченій формі
    if (x < -1)
        B = (sqrt(2) * (x * x * x)) - 7;
    if ((-1) <= x && x < 3)
        B = 2 * (log10(1 - (x / 4)));
    if (x >= 3)
        B = (cos(abs(x))) + 3;
    y = A - B;
    cout << endl;
    cout << "1) y =" << y<< endl;
// спосіб 2: розгалуження в повній формі
    if (x < -1)
        B = (sqrt(2) * (x * x * x)) - 7;
                else
                    if((-1) <= x && x < 3)
                        B = 2 * (log10(1 - (x / 4)));
                            else
                                B = (cos(abs(x))) + 3;
                                    y = A - B;
    cout << "2) y =" << y << endl;
    cin.get();
    return 0;
}