// Lab_04_6.cpp
// Кулик Олег
// Лабораторна робота No 4.6
// "Вкладені цикли"
// Варіант 8


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double s1, s2;
    int n, k;

    // while(...){...while(...){...}...}
 s1=0;
 k =1;
 while (k<=10)
 {
      s2=0;
      n=1;
     while (n<=k)
     {
         s2+=sin(k*n);
         n++;
     }
     s1+= s2/k;
     k++;
 }
 cout<<"s1 = "<< s1 <<endl;
    // do{... do{...} while(...) ...} while(...);
    s1=0;
    k =1;
    do
    {
        s2=0;
        n=1;
        do
        {
            s2+=sin(k*n);
            n++;
        } while (n<=k);
        s1+= s2/k;
        k++;
    } while (k<=10);
    cout<<"s1 = "<< s1 <<endl;
    // for(...;...;i++){... for(...;...;k++) {...} ...};

    s1 = 0;
    for (k = 1; k <= 10; k++)
    {
        s2 = 0;
        for (n = 1; n <= k; n++)
        {
            s2+=sin(k*n);
        }
        s1+= s2/k;
    }
    cout<<"s1 = "<< s1 <<endl;
    // for(...;...;i--){... for(...;...;k--) {...} ...};

    s1 = 0;
    for (k=10;k>=1;k--)
    {
        s2=0;
        for(n=k;n>=1;n--)
        {
            s2+=sin(k*n);
        }
        s1+= s2/k;
    }
    cout<<"s1 = "<< s1 <<endl;

    return 0;
}