#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main() {
    double x, y, R;
    srand((unsigned) time(NULL));
    for (int i = 0; i < 10; i++) {
        cout << "x = ";
        cin >> x;
        cout << "y = ";
        cin >> y;
        if ((y <= R && x <= 0 && y >= -x) ||
            (((y * y) <= -(x * x) + (R * R)) && (y >= 0) && (x >= 0)) ||
            ((y * y) <= (-(x * x) + (R * R)) && (y <= 0) && (x >= 0)) ||
            (y >= R) && (y <= x) && (y <= 0))
            cout << "Так" << endl;
        else
            cout << "no" << endl;
    }
    cout << endl << fixed;

    for (int i = 0; i < 10; i++) {
        x = 6. * rand() / RAND_MAX - 3;
        y = 6. * rand() / RAND_MAX - 3;
        if ((y <= R && x <= 0 && y >= -x) ||
            (((y * y) <= -(x * x) + (R * R)) && (y >= 0) && (x >= 0)) ||
            ((y * y) <= (-(x * x) + (R * R)) && (y <= 0) && (x >= 0)) ||
            (y >= R) && (y <= x) && (y <= 0))
            cout << setw(8) << setprecision(4) << x << " "
                 << setw(8) << setprecision(4) << y << " " << "yes" << endl;
        else
            cout << setw(8) << setprecision(4) << x << " "
                 << setw(8) << setprecision(4) << y << " " << "no" << endl;
    }
    return 0;
}