#include <stdio.h>
#include <string.h>
#include <iostream>

#define maxn 5005

using namespace std;

__int64 p[maxn];
__int64 dp[maxn][maxn];
__int64 sum[maxn];
int n,k,m;
__int64 _sum;
__int64 _max;

int main()
{
    _sum = 0;
    memset(dp,0,sizeof(dp));
    memset(sum,0,sizeof(sum));

    cin >> n >> m >> k;
    for(int i = 1;i <= n;i++)
    {
        cin >> p[i];
        sum[i] = sum[i - 1] + p[i];
    }

    for(int i = 1;i <= m;i++)
        _sum += p[i];

    dp[m][1] = _sum;
 //   cout << dp[m][1] << endl;

    for(int i = m;i <= n;i++)
    {
        for(int j = 1;j <= k;j++)
        {
            _max = dp[i - m][j - 1] + sum[i] - sum[i - m];
            for(int ss = i;ss >= i - m;ss--)
            {
                _max = max(dp[ss][j],_max);
            }
            dp[i][j] = _max;
        }
    }

    cout << dp[n][k] << endl;
}
