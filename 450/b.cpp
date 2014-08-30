#include <string.h>
#include <stdio.h>
#include <iostream>

using namespace std;

#define MOD 1000000007

int x,y,n;
struct Mul{
    __int64 a[3][3];
}mul;

Mul getMul(Mul x,Mul y)
{
    Mul result;
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            result.a[i][j] = 0;
        }
    }
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            for(int k = 0;k < 3;k++)
            {
                result.a[i][j] += (x.a[i][k] * y.a[k][j]) % MOD;
            }
            result.a[i][j] %= MOD;
        }
    }
    return result;
};

__int64 Search(int n)
{
    Mul first;
    Mul second;
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            if(i == j)
                second.a[i][j] = 1;
            else
                second.a[i][j] = 0;
            first.a[i][j] = 0;
        }
    }
    first.a[0][1] = 1;
    first.a[1][2] = 1;
    first.a[2][1] = -1;
    first.a[2][2] = 1;

    while(n)
    {
        if(n % 2)
        {
            second = getMul(first,second);
        }
        first = getMul(first,first);
        n /= 2;
    }
    return (second.a[2][2] * (y - x) + second.a[2][1] * (y)) % MOD;
}


__int64 getresult(int n)
{
    if(n == 1)
        return (__int64)x;
    else if(n == 2)
        return (__int64)y;
    else if(n == 3)
        return (__int64)(y - x);
    else
    {
        return Search(n - 3);
    }
}


int main()
{
    cin >> x >> y;
    cin >> n;
    cout << ((getresult(n) % MOD+ MOD) % MOD) << endl;

}
