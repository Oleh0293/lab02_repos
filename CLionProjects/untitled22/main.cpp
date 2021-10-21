// Lab_03_3.cpp
// кулик олег
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 8

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x; //вхідний аргумент
    double R; //вхідний параметр
    double y; //результат обчислення

    cout << "R="; cin >> R;
    cout << "x="; cin >> x;

    if (x <= (-8 - R))
        y = -R;
    else
        if (x > (-8 - R) && x// Lab_03_3.cpp
// кулик олег
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 8

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x; //вхідний аргумент
    double R; //вхідний параметр
    double y; //результат обчислення

    cout << "R="; cin >> R;
    cout << "x="; cin >> x;

    if (x <= (-8 - R))
        y = -R;
    else
        if (x > (-8 - R) && x <= (-8 + R))
        y= -R + sqrt((R*R)-(x+8)*(x+8));
    else
        if (x >( -8 + R) && x <= 2)
        y = ((x+8-R)*(-R-2)/(2+8-R))+2;
    else
        if (x > 2 && x <= 6)
        y = 0;
    else
        if(x>6)
        y = (x - 6) * (x - 6);

    cout << endl;
    cout << "y=" << y << endl;

    cin.get();
    return 0;
}
 <= (-8 + R))
        y= -R + sqrt((R*R)-(x+8)*(x+8));
    else
        if (x >( -8 + R) && x <= 2)
        y = ((x+8-R)*(-R-2)/(2+8-R))+2;
    else
        if (x > 2 && x <= 6)
        y = 0;
    else
        if(x>6)
        y = (x - 6) * (x - 6);

    cout << endl;
    cout << "y=" << y << endl;

    cin.get();
    return 0;
}
