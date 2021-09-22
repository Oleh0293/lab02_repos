#include<iostream>
using namespace std;

int main()
{
    bool arr[2] = { true,false };
    cout << "x\ty\tz\ta\tb" << endl;
    for (bool x : arr)
        for (bool y : arr)
            for (bool z : arr)
            {
                bool a = (x | (y | z));
                bool b = !(x & (y & z)); // (!x | (!y | !z));
                cout << x << "\t" << y << "\t" << z << "\t" << a << "\t" << b << endl;
            }
    return 0;
}