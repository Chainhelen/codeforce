#include <stdio.h>
#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;

/*
公式推导
这里x ^ y表示乘方
sum(k = 1 -> m)[随机变量k * 概率( k^n  - (k-1)^n) / (m ^ n)]

便可得到 m - ｛sum(k = 1 -> m - 1)[(k/m)^n]｝

*/
double result,n,m;

int main()
{
    cin >> m >> n;
    result = m;
    for(int i = 1;i < m;i++)
        result -= pow(i/m,n);
    printf("%.12f\n",result);
}
