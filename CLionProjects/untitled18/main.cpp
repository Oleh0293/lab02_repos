// Lab_03_1.cpp
// < кулик олег >
// Лабораторна робота No 3.1
// Розгалуження, задане формулою: функція з параметрами. // Варіант 0.8
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x;
    cout << "x = ";
    cin >> x;

    double y;
    if (x <= 0 )
        y = 2 + 6 * x + log(cos(x)) + x * x * x * x * x;
       // cout << "y = " << y;
    if (x > 0 && x <= 3 && sin((1 + log(x)) / 3) != 0)
        y = 2 + 6 * x + 1 / tan((1 + log(x)) / 3);
        //cout << "y = " << y;
    if (x > 3.0)
        y = 2 + 6 * x + 12 * x - pow(x,8);
        cout << "y = " << y;
    cout<< endl;

//2 сосіб
    if (x <= 0)
        y = 2 + 6 * x + log(cos(x)) + x * x * x * x * x;
        //cout << "y = " << y;
    else if (x > 0 && x <= 3 && sin((1 + log(x)) / 3) != 0)
        y = 2 + 6 * x + 1 / tan((1 + log(x)) / 3);
        //cout << "y = " << y;
    else if (x > 3)
        y = 2 + 6 * x + 12 * x - pow(x, 8);
        cout << "y = " << y;
    //else
       // cout << "Не визначено!";

    return 0;
}