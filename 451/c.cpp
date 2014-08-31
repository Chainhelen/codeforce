/*��1��w1 >= w2��w2 >= w3                                      ��2��w1 >= w2��w2 < w3

����>  w1 = (2d1 + d2 + k)  / 3��������������������������������>  w1 = (2d1 - d2 + k)  / 3

          w2 = (-d1 + d2 + k)  / 3���������������������������������� w2  = (-d1 - d2 + k)  / 3

          w3 = (-d1 - 2d2 + k) / 3���������������������������������� w3  = (-d1 + 2d2 + k)  / 3



    ��3��w1 < w2��w2 >= w3                                          ��4��w1 < w2��w2 < w3

����>  w1 = (-2d1 + d2 + k)  / 3������������������������    ����>  w1 = (-2d1 - d2 + k)  / 3

������ w2 = ( d1   + d2 + k )  / 3�������������������������� ������ w2 = ( d1   - d2 + k )  / 3

������ w3 = ( d1   - 2d2 + k)  / 3��������������������������������  w3 = ( d1  + 2d2 + k)  / 3*/

#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

__int64 n,k,d1,d2;
__int64 a,b,c;
int flag;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        flag = 0;
        cin >> n >> k >> d1 >> d2;
        if(n % 3)
            printf("no\n");
        else
        {
            a = (2 * d1 + d2 + k) / 3;
            b = (-d1 + d2 + k) / 3;
            c = (-d1 - 2 * d2 + k) / 3;
            if((2 * d1 + d2 + k) % 3 == 0 && (-d1 + d2 + k) % 3 == 0 && (-d1 - 2 * d2 + k) % 3 == 0 && n / 3 >= a && a >= b && b >= c && c >= 0)
            {
                flag = 1;
            }

            a = (2 * d1 - d2 + k) / 3;
            b = (-d1 - d2 + k) / 3;
            c = (-d1 + 2 * d2 + k) / 3;
            if((2 * d1 - d2 + k) % 3 == 0 && (-d1 - d2 + k) % 3 == 0 && (-d1 + 2 * d2 + k) % 3 == 0 && n / 3 >= max(a,c) && a >= b && c >= b && b >= 0)
            {
                flag = 1;
            }

            a = (-2 * d1 + d2 + k) / 3;
            b = (d1 + d2 + k) / 3;
            c = (d1 - 2 * d2 + k) / 3;
            //printf("%d %d %d\n",a,b,c);
            if((-2 * d1 + d2 + k) % 3 == 0 && (d1 + d2 + k) % 3 == 0 && (d1 - 2 * d2 + k) % 3 == 0 && n / 3 >= b && b >= c && b >= a && a >= 0 && c >= 0)
            {
                flag = 1;
            }

            a = (-2 * d1 - d2 + k) / 3;
            b = (d1 - d2 + k) / 3;
            c = (d1 + 2 * d2 + k) /3;
            if((-2 * d1 - d2 + k) % 3 == 0 && (d1 - d2 + k) % 3 == 0 && (d1 + 2 * d2 + k) %3 == 0 && n / 3 >= c && c >= b && b >= a && a >= 0)
            {
                flag = 1;
            }
            if(flag)
                printf("yes\n");
            else
                printf("no\n");
        }
    }
    return 0;
}
/*
����⣬��������

��Ŀ���⣺�����е�ӣ�������֧�����n�������������k��������k��������֪����Ӯ��ֻ֪����һ֧��Ӻ͵ڶ�֧���ʤ�������d1���ڶ��͵�����d2����˵�����û�п�����֧����ʤ������ͬ��


����˼·��������������µĳ���u���Ƿ�Ϊ3�ı�����u/3���Ƿ�ȵ�ǰ�����ʤ������ߵĶ���󣬲��һ�Ҫ�жϸ�����Ƿ���С�

#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;
typedef long long ll;

ll n, k, d1, d2;

bool check (ll u, ll t) {
    if (u % 3 || u > n)
        return false;

    return u / 3 >= t;
}

bool judge () {
    if (n % 3)
        return false;

    if (check(n - k + d1 + d2 * 2, d1 + d2))
        return true;

    if (check(n - k + 2 * d1 + d2, d1 + d2))
        return true;

    if (check(n - k + d1 + d2, max(d1, d2)))
        return true;

    if (check(n - k + 2 * max(d1, d2) - min(d1, d2), max(d1, d2)))
        return true;
    return false;
}

int main () {
    int cas;
    scanf("%d", &cas);
    for (int i = 0; i < cas; i++) {
        scanf("%lld%lld%lld%lld", &n, &k, &d1, &d2);
        printf("%s\n", judge() ? "yes" : "no");
    }
    return 0;
}

*/
