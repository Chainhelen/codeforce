#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

const int maxn  = 100005;

int n;
int a[maxn];
int b[maxn];
int point;
int _min;
int _max;
int flag;

int check()
{
    flag = 0;
    for(int i = 1;i <= n;i++)
    {
        if(a[i] == _min)
        {
            if(a[(i - 1) == 0 ? n : i - 1] == _max)
            {
                flag = 1;
                point = i;
                break;
            }
        }
    }
    if(!flag)
        return 0;
    //printf("%d\n",point);
    for(int i = 1;i <= n;i++)
    {
        if(i + point - 1 <= n)
        {
            //printf("%d %d\n",a[i + point - 1], b[i]);
             b[i] = a[i + point - 1];
        }
        else
        {
            //printf("%d %d\n",a[i + point - 1 - n], b[i]);
            b[i] = a[i + point - 1 - n];
        }
    }
    for(int i = 2;i <= n;i++)
    {
        if(b[i] < b[i - 1])
            return 0;
    }
    return 1;
}

int main()
{
    cin >> n;
    _min = 0x3f3f3f3f;
    _max = -0x3f3f3f3f;
    for(int i = 1;i <= n;i++)
    {
        cin >> a[i];

        if(_min > a[i])
            _min = a[i];
        if(_max < a[i])
            _max = a[i];
    }

    if(check())
    {
        if(point == 1)
            printf("%d\n",0);
        else
            printf("%d\n",n - point + 1);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}

