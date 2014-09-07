#include <stdio.h>
#include <iostream>

using namespace std;

#define maxn 55

int t;
int n,p;
int m;
int a[maxn][maxn];

int main()
{
    cin >> m >> n;
    int flag = 0;
    for(int i = 1;i <= m;i++)
    {
        for(int j = 1;j <= n;j++)
        {
            cin >> a[i][j];
            if(i == m || i == 1 || j == 1 || j == n)
            {
                if(a[i][j])
                {
                    flag = 1;
                }
            }
        }
    }
    if(flag)
    {
        cout << 2 << endl;
    }
    else
        cout << 4 << endl;

    return 0;
}

