//Lab_1.0
//Borys_Viktor
#include <iostream>
using namespace std;
int main() {
        int x =0;
        int y =0;
        int z =0;
        int x1 =0;
        int y1 =0;
        int z1 =0;
        int f1 ;//результат дизюнкції дужки (x;y)
        int f2 ;//результат дизюнкціїї дужки (f1;z)
        int f3 ;//результат дизюнкції дужки (x зап. ;y зап. )
        int f4 ;//результат дизюнкції дужки (f3 зап. ;z )
        int f5 ;// результат приклада

            if (x == 0 && y == 0)
                f1 = 0;
               cout<<"f1 = "<<f1<<endl;
            else
                f1 = 1;
                cout<<"f1 = "<<f1<<endl;

            if (f1 == 0 && z == 0)
                f2 = 0;
                cout<<"f2 = "<<f2<<endl;
            else
                f2 = 1;
                cout<<"f2 = "<<f3<<endl;

            if (x1 == 0 && y1 == 0)
                f3 = 0;
                cout<<"f3 = "<<f3<<endl;
             else
                f3 = 1;
                cout<<"f3 = "<<f3<<endl;

            if (f3 == 0 && z1 == 0)
                f4 = 0;
                cout<<"f4 = "<<f4<<endl;
            else
                f4 = 1;
                cout<<"f4 = "<<f4<<endl;

            if (f2 == 1 && f4 == 0)
                f5 = 0;
                cout<<"f5 = "<<f5<<endl;
                else
                f5 = 1;
                cout<<"f5 = "<<f5<<endl;

    return 0;
}