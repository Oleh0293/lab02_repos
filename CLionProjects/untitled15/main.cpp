#include <iostream>
#include <cmath>
int main()
{
    double x;
    std::cout << "x = ";
    std::cin >> x;

    double y;
    if (x <= 0.0 && cos(x) > 0.0)
    {
        y = 2 + 6 * x + log(cos(x)) + x * x * x * x * x;
        std::cout << "y = " << y;
    }
    else if (x > 0.0 && x <= 3.0 && sin((1 + log(x)) / 3) != 0.0)
    {
        y = 2 + 6 * x + 1 / tan((1 + log(x)) / 3);
        std::cout << "y = " << y;
    }
    else if (x > 3.0)
    {
        y = 2 + 6 * x + 12 * x - pow(x, 8);
        std::cout << "y = " << y;
    }
    else
    {
        std::cout << "Not defined !";
    }

    return 0;
}