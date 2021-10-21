#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int K, N;
    double S=1;

    cout << " K= "; cin >> K;
    cout << " N= "; cin >> N;
    //do{...} while(...)
    int i=K;
    do
    {
        if(i>N)
          break;
            S*=(double (K) / double (i)+ double (i) / double (K));
                i++;
    } while (true);
    // while (...) {...}

    S = 1;
    K = N;
    while (i>N)
    {
        S*=(double (K) / double (i)+ double (i) / double (K));
        i++;
    }

    cout << "S = "<< S << endl;

    K=N;
    for(int i = N;i >=K;i--)
    return 0;
}
