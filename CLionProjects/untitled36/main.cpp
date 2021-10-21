#include <iostream>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <cstring>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <bitset>
#include <ctime>

using namespace std;



int a[10] = {1,5,6,9,10,14,15,16,21};
int b[10] = {1,2,11,16,17,20,21,24,25};
int c[10] = {1,2,6,7,8,12,17,21,22,25};
int b_dop[15];//доповнення B
int pr[10];//A перетин  B
int pr_dop[25];//доповнення першої дужки
int sub[25];//доповнення першої дужки відняти А
int ob[25];//B U C
int ob_dop[25];//доповнення (B U C)
int main()
{

    int id = 0;
    for(int i  = 1; i <=25;i++)
    {
        bool ok  = false;
        for(int j = 0 ;j < 10;j++)
        {
            if(b[j] == i)ok = true;
        }
        if(!ok)b_dop[id++] = i;
    }
    id = 0;
    for(int i = 1;i <=25;i++)
    {
        bool ok1 = false,ok2 = false;
        for(int j = 0; j < 10;j++)
        {
            if(a[j] == i)ok1 = true;
            if(b[j] == i)ok2 = true;
        }
        if(ok1 && ok2)pr[id++] = i;
    }
    int id1 = 0;
    for(int i = 1; i <=25;i++)
    {
        bool ok = false;
        for(int j = 0; j < id; j++)
        {
            if(pr[j] == i)ok = true;
        }
        if(!ok)pr_dop[id1++] = i;
    }
    int id2 = 0;
    for(int i = 1; i <=25;i++)
    {
        bool ok1 = false,ok2 = false;
        for(int j = 0; j < 10;j++)
        {
            if(a[j] == i )ok1 = true;
        }
        for(int j = 0 ; j < id1;j++)
        {
            if(pr_dop[j] == i )ok2 =true;
        }
        if(ok2 && !ok1)sub[id2++] = i;
    }
    int id3 = 0;
    for(int i = 1; i <=25;i++)
    {
        bool ok1 = false,ok2 = false;
        for(int j = 0; j <10;j++)
        {
            if(b[j] == i)ok1 =true;
            if(c[j] == i)ok2 = true;
        }
        if(ok1 | ok2)ob[id3++] = i;
    }
    int id4 = 0;
    for(int i = 1;i <=25;i++)
    {
        bool ok = false;
        for(int j = 0;j <id3;j++)
        {
            if(ob[j] == i)ok = true;
        }
        if(!ok)ob_dop[id4++] = i;
    }
    for(int i = 1;i <=25;i++)
    {
        bool ok1 = false,ok2 = false;
        for(int j = 0 ; j < id2;j++)
        {
            if(sub[j] == i )ok1 = true;
        }
        for(int j =0 ; j < id4;j++)
        {
            if(ob_dop[j] == i)ok2 = true;
        }
        if(ok1 && ok2)
            cout <<'(' << i <<')'<<','<< ' ';
    }
return 0;
    }