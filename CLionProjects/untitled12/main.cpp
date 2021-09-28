#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double z1;  // вхідний параметр
    double z2; // результат обчислення 1-го виразу
    double a; // результат обчислення 2-го виразу
    double PI = 4* atan(1.);
    cout << "a=";cin >> a;
    z1 = 2 * sin(3*PI - 2*a) * sin(3*PI - 2*a) * cos(5*PI+2*a) * cos(5*PI+2*a);
    z2 = 1./4 - 1./4 * sin(5./2 * PI - 8*a);
    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;
    cin.get();


    return 0;
}
