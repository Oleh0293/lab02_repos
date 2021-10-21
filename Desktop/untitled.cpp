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
    if ((y <= R && x <= 0 && y >= -x) || (y <= sqrt((x * x) - (R * R))) && (y >= 0) && (x >= 0) ||
                                          (y <= -sqrt((x * x) - (R * R)) && (y <= 0) && (x >= 0)) ||
                                          (y >= R) && (y <= x) && (y <= 0))
        cout << "Так" << endl;
    else
        cout << "Ні" << endl;


    return 0;
}
