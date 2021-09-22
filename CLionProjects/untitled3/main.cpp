// Lab_02.cpp
// < прізвище, ім’я автора >
// Лабораторна робота No 2.
// Лінійні програми.
// Варіант 0.3
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x;  // вхідний параметр
    double z1;  // вхідний параметр
    double z2; // результат обчислення 1-го виразу
    double y; // результат обчислення 2-го виразу
    cout << "y=";cin >> y;
    cout << "x=";cin >> x;
    z1 = cos(x)*cos(x)*cos(x)*cos(x) + sin(y)*sin(y) + 1./4 * sin(2*x)* sin(2*x) -1;
    z2 = sin(y+x)* sin(y-x);
    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;
    cin.get();
    return 0; }