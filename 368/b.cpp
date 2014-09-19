#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

#define maxn 100005

int n,m;
int a[maxn];
int b[maxn];
int ll[maxn];
int dis[maxn];
int sum;

int main()
{
    for(int i = 0;i < maxn;i++)
    {
        b[i] = a[i] = dis[i] = 0;
    }
    cin >> n >> m;
    for(int i = 1;i <= n;i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    for(int i = 0;i < maxn;i++)
    {
        if(b[i])
            sum++;
    }
    //cout << sum << endl;
    for(int i = 1;i <= m;i++)
    {
        cin >> ll[i];
    }
    for(int i = 1;i <= n;i++)
    {
        if(i == 1)
        {
            dis[i] = sum;
            continue;
        }
        if(b[a[i - 1]] == 1)
        {
            b[a[i - 1]] = 0;
            sum--;
            dis[i] = sum;
        }
        else if(b[a[i - 1]] >= 2)
        {
            b[a[i - 1]]--;
            dis[i] = sum;
        }
    }
    for(int i = 1;i <= m;i++)
    {
        printf("%d\n",dis[ll[i]]);
    }
    return 0;
}

