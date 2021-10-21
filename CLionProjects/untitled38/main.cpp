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
    if(K > N)
    {
        cout << 0 << '\n'; 
        exit(0);
    }
    int i=K;
    // while (...) {...}

    S = 1;
    while(i<=N)
    {
       
        S*=(double (K) / double (i) + double (i) / double (K));
        i++;
    }
    cout << "S = " << S << endl;

    //do{...} while(...)

    S = 1;
    i=K;
    do
    {
        
        S*=(double (K) / double (i)+ double (i) / double (K));
        i++;
    } while (i<=N);

    cout << "S = " << S << endl;

    //for(...; ...; n++) {... }

    S = 1;
    i=K;
    for(int i = K; i <=N;i++)
    {
       
        S*=(double (K) / double (i)+ double (i) / double (K));
    }
    cout << "S = " << S << endl;

    //for(...; ...; n--) {... }

    S = 1;
    i=K;
    for(int i = N;i >=K;i--)
    {
       
        S*=(double (K) / double (i)+ double (i) / double (K));
    }
    cout << "S = " << S << endl;

    return 0;
}