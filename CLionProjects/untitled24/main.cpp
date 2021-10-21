// Lab_03_4.cpp
// ХОмицький Данило
// Лабораторна робота No 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 16
#include <iostream> ;
#include  <cmath>
using namespace std;
int main()
{
    double x; // вхідний аргумент
    double y; //вхідний параметр
    cout <<"x=";
    cin >> x;
    cout <<"y = ";
    cin >> y;
// розгалуження в повній формі
    if((y <= 0 && y <= -(x*x)+2 && y >= x) ||
    (y >= 0 && y <= -(x*x)+2 && y <= x))
    cout <<"yes"<< endl;
        else
            cout <<"no" << endl;
    cin.get();
    return 0;
}