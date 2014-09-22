#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

#define maxn 5100

int p,q,l,r;
int a[maxn];
int c[maxn],d[maxn];
int te,ts;

int check(int i)
{
    for(int j = 1;j <= q;j++)
    {
        for(int k = c[j] + i;k <= d[j] + i;k++)
        {
            if(a[k])
                return 1;
        }
    }
    return 0;
}

int answer()
{
    int _count = 0;
    for(int i = l;i <= r;i++)
    {
        if(check(i))
            _count++;
    }
    return _count;
}

int main()
{
    cin >> p >> q >> l >> r;
    memset(a,0,sizeof(a));

    for(int i = 1;i <= p;i++)
    {
        cin >> ts >> te;
        for(int j = ts;j <= te;j++)
        {
            a[j] = 1;
        }
    }

    for(int j = 1;j <= q;j++)
    {
        cin >> c[j] >> d[j];
    }

    cout << answer() << endl;
    return 0;
}

