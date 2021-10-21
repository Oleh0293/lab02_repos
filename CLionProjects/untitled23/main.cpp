// Lab_03_3.cpp
// кулик олег
// Лабораторна робота № 3.4
// Розгалуження, задане графіком функції.
// Варіант 8
#include <iostream>
#include <cmath>
using namespace  std;
int main() {
    double x; //Вхідний параметр
    double y; //вхідний аргумент
    double R; //вхідний параметр

    cout << " x= "; cin >> x;
    cout << " y= "; cin >> y;
    cout << " R= "; cin >> R;
    if ((y <= R && x <= 0 && y >= -x) ||
    (((y*y) <= -(x * x) + (R * R)) && (y >= 0) && (x >= 0)) ||
    ((y*y) <= (-(x * x) + (R * R)) && (y <= 0) && (x >= 0)) ||
    (y >= R) && (y <= x) && (y <= 0))
        cout << "Так" << endl;
    else
        cout << "Ні" << endl;


    return 0;
}
