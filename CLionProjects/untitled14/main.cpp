// Lab_03_2.cpp
// < кулик олег >
// Лабораторна робота No 3.2
// Розгалуження, задане формулою: функція з параметрами. // Варіант 0.8
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x; // вхідний аргумент
    double a; // вхідний параметр
    double b; // вхідний параметр
    double c; // вхідний параметр
    double F; // результат обчислення виразу
    cout <<"a=";cin >>a;
    cout <<"b=";cin >>b;
    cout <<"c=";cin >>c;
    cout<<"x=";cin >>x;
    // спосіб 1: розгалуження в скороченій формі
    if (c<0 && a!=0)
        F = -(a)*pow(x,2);
    if (c>0 && a==0)
        F = (a-x)/(c*x);
    if (!(c<0 && a!=0) && !(c>0 && a==0))
        F =x/c ;
    cout << endl;
    cout << "1) F = " << F << endl;
    // спосіб 2: розгалуження в повній формі
    if  ( c<0 && a!=0)
        F = -(a)*pow(x,2);
    else
    if (c>0 && a==0)
        F = (a-x)/(c*x);
    else
        F =x/c ;
    cout << "2) F = " << F << endl;
    cin.get();
    return 0;
}

#include <iostream>
#include <cmath>
int main()
{
    double x;
    std::cout << "x = ";
    std::cin >> x;

    double y;
    if (x <= 0 && cos(x) > 0)
    {
        y = 2 + 6 * x + log(cos(x)) + x * x * x * x * x;
        std::cout << "y = " << y;
    }
    if (x > 0 && x <= 3 && sin((1 + log(x)) / 3) != 0)
    {
        y = 2 + 6 * x + 1 / tan((1 + log(x)) / 3);
        std::cout << "y = " << y;
    }
    if (x > 3.0)
    {
        y = 2 + 6 * x + 12 * x - pow(x,8);
        std::cout << "y = " << y;
    }

//2 сосіб
    if (x <= 0 && cos(x) > 0)
    {
        y = 2 + 6 * x + log(cos(x)) + x * x * x * x * x;
        std::cout << "y = " << y;
    }
    else if (x > 0 && x <= 3 && sin((1 + log(x)) / 3) != 0)
    {
        y = 2 + 6 * x + 1 / tan((1 + log(x)) / 3);
        std::cout << "y = " << y;
    }
    else if (x > 3)
    {
        y = 2 + 6 * x + 12 * x - pow(x, 8);
        std::cout << "y = " << y;
    }
    else
    {
        std::cout << "Не визначено!";
    }

    return 0;
}

