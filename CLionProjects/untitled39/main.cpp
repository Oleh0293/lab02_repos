// Lab_04_5.cpp 
// Кулик Олег
// Лабораторна робота No 4.5 
// «Попадання» у плоску фігуру
// Варіант 8

#include <iostream>
#include <iomanip>
#include <cmath>
#include <time.h>

using namespace std;

using namespace std;

int main()
{
    double x, y, R;
    srand((unsigned)time(NULL));

    cout << "R ="; cin >> R;

    for (int i = 0; i < 10; i++)
    {
        cout << "x ="; cin >> x;
        cout << "y ="; cin >> y;

        if ((y <= R && x <= 0 && y >= -x) ||
            (y <= sqrt((x * x) - (R * R))) && (y >= 0) && (x >= 0) ||
            (y <= -sqrt((x * x) - (R * R)) && (y <= 0) && (x >= 0)) ||
            (y >= R) && (y <= x) && (y <= 0))
            cout << "Так" << endl;
        else
            cout << "Ні" << endl;
    }
    cout << endl << fixed;

    for (int i = 0; i < 10; i++)
    {
        x = R * rand()/RAND_MAX - R;
        y = R * rand()/RAND_MAX - R;

        if ((y <= R && x <= 0 && y >= -x) ||
            (y <= sqrt((x * x) - (R * R))) && (y >= 0) && (x >= 0) ||
            (y <= -sqrt((x * x) - (R * R)) && (y <= 0) && (x >= 0)) ||
            (y >= R) && (y <= x) && (y <= 0))
            cout << setw(8) << setprecision(4) << x << " "
                 << setw(8) << setprecision(4) << y << " " << "Так" << endl;
        else
            cout << setw(8) << setprecision(4) << x << " "
                 << setw(8) << setprecision(4) << y << " " << "Ні" << endl;
    }

    return 0;
}
