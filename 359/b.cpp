#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

#define maxn 100005

int a[maxn];
int n,k;

__int64 getsum1()
{
    __int64 sum = 0;
    for(int i = 1;i <= n;i++)
    {
        sum += abs(a[2 * i - 1] - a[2 * i]);
    }
    return sum;
}
__int64 getsum2()
{
    __int64 sum = 0;
    for(int i = 1;i <= n;i++)
    {
        sum += (a[2 * i - 1] - a[2 * i]);
    }
    return abs(sum);
}


int main()
{
    cin >> n >> k;
    for(int i = 1;i <= 2 * n;i++)
    {
        a[i] = i;
    }
    for(int i = 1;i <= k;i++)
    {
        int temp = a[2 * i  - 1];
        a[2 * i - 1] = a[2 * i];
        a[2 * i] = temp;
    }
    for(int i = 1;i <= 2 * n;i++)
    {
        cout << a[i];
        if(i != 2 * n)
            cout << " ";
        else
            cout << endl;
    }
    return 0;
}

