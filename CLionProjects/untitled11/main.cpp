#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x;
    cout << "x = ";
    cin >> x;
    double y;
    if (x <= 0.0 && cos(x) > 0.0)
    {
        y = 2 + 6 * x + log(cos(x)) + x * x * x * x * x;
       cout << "y = " << y;
    }
    if (x > 0.0 && x <= 3.0 && sin((1 + log(x)) / 3) != 0.0)
    {
        y = 2 + 6 * x + 1 / tan((1 + log(x)) / 3);
        cout << "y = " << y;
    }
    if (x > 3.0)
    {
        y = 2 + 6 * x + 12 * x - pow(x, 8);
        cout << "y = " << y;
    }

    return 0;
}