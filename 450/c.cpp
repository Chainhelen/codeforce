#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>

using namespace std;

__int64 n,m,k,ans;
__int64 t;

int main()
{
    cin >> n >> m >> k;
    if(n + m - 2 < k)
    {
        cout << "-1" << endl;
    }
    else if(n + m -2 == k)
    {
        cout << "1" << endl;
    }
    else
    {
        if(m >= k+1)
            ans = max(ans,n*(m / (k + 1)));
        else
        {
            t = k - m + 1;
            ans = max(ans, n / (t + 1));
        }
        if(n >= k + 1)
            ans = max(ans,m * (n / (k + 1)));
        else
        {
            t = k - n + 1;
            ans = max(ans, m / (t + 1));
        }
        cout << ans << endl;
    }
    return 0;
}
