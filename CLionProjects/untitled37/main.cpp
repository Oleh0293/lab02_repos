// Lab_04_1.cpp
// Данило Хомицький
// Лабораторна робота № 4.1
// Цикли
// Варіант 16
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, j;
    double S;

    j = 2; // Вхідні параметри
    S = 0; // результат обчислення

    cout<< "N=";
    cin>> N;
    //1) while(...) { ... }
    while(j<=N);
    {
        S += ((1.*j)*(N - j))/(((1.*j)*(1.*j))+((N-(1.*j))*(N-(1.*j))));
        j++;
    }
    cout << "1)S=" << S << endl;

    j = 2;
    S = 0;
    //2) do{ ... } while(...);
    do {
        S += ((1.*j)*(N - j))/(((1.*j)*(1.*j))+((N-(1.*j))*(N-(1.*j))));
        j++;
    }while(j<=N);
    cout << "2)S=" << S << endl;

    S = 0;
    //3) for(...; ...; n++) {... }
    for(j = 2; j<=N; j++)
        S += ((1.*j)*(N - j))/(((1.*j)*(1.*j))+((N-(1.*j))*(N-(1.*j))));
    cout << "3)S=" << S << endl;

    S = 0;
    //4) for(...; ...; n--) {... }
    for(j = N; j>=2; j--)
        S += ((1.*j)*(N - j))/(((1.*j)*(1.*j))+((N-(1.*j))*(N-(1.*j))));
    cout << "4)S=" << S << endl;

    return 0;
}