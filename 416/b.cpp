#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>

using namespace std;

int m,n;
int t[50001][7];
int dp[50001][7];

int main()
{
    cin >> m >> n;
    for(int i = 1;i <= m;i++)
    {
        for(int j = 1;j <= n;j++)
        {
            cin >> t[i][j];
        }
    }
    memset(dp,0,sizeof(dp));

    for(int i = 1;i <= m;i++)
    {
        for(int j = 1;j <= n;j++)
        {
            dp[i][j] = max(dp[i-1][j],dp[i][j-1]) + t[i][j];
        }
    }
    for(int i = 1;i <= m;i++)
    {
        cout << dp[i][n];
        if(i == m)
            cout << endl;
        else
            cout << " ";
    }
    return 0;
}

