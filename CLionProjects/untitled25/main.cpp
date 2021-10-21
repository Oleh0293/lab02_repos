#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    double x; // вхідний аргумент
    double R1; // вхідний аргумент
    double R2; // вхідний аргумент
    double y; // результат обчислення
    cout <<"R1 =";
    cin >> R1;
    cout << "R2 =" ;
    cin >> R2;
    cout << "x =";
    cin >> x;
//розгалуження в повній формі
    if(x <= -R1)
        y = (-R1/(-R1+2))*(x + 2);
    else
         if(-R1 < x && x <= 0)
             y = -R1 + sqrt((R1 * R1)-(x*x));
          else
              if(0 < x && x <= R2)
                  y = R2 - sqrt((R2 * R2)-(x*x));
               else
                    if(R2< x && x <= 4)
                         y = -R1;
                    else
                        y = -R1+(R1/2)*(x-4);
    cout << endl;
    cout <<"y =" << y<<endl;
    cin.get();
    return 0;
}