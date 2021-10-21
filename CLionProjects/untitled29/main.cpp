// Lab_04_1.cpp
// кулик олег
// Лабораторна робота № 4.1
// Цикли
// Варіант 8

#include<iostream>
using namespace std;

int main() {
    int K, N;
    double S;

    cout << " K= "; cin >> K;
    cout << " N= "; cin >> N;
    int i=K;
    // while (...) {...}

    S = 0;
    while(i<=N)
    {
        if(i==K)
            S=1;
        S*=(double (K) / double (i) + double (i) / double (K));
        i++;
    }
    cout << "S = " << S << endl;

    //do{...} while(...)

    S = 0;
    i=K;
    do
    {
        if(i>N)
            break;
        if(i==K)
            S=1;
        S*=(double (K) / double (i)+ double (i) / double (K));
        i++;
    } while (i<=N);

    cout << "S = " << S << endl;

    //for(...; ...; n++) {... }

    S = 0;
    i=K;
    for(int i = K; i <=N;i++)
    {
        if(i==K)
            S=1;
        S*=(double (K) / double (i)+ double (i) / double (K));
    }
    cout << "S = " << S << endl;

    //for(...; ...; n--) {... }

    S = 0;
    i=K;
    for(int i = N;i >=K;i--)
    {
        if(i==N)
            S=1;
        S*=(double (K) / double (i)+ double (i) / double (K));
    }
    cout << "S = " << S << endl;

    return 0;
}
