#include <stdio.h>
#include <string.h>
#include <iostream>

#define maxn 105

using namespace std;

int q[maxn];
int p[maxn];
int n;
int result;

int main()
{
    cin >> n;
    //memset(a,0,sizeof(a));
    result = 0;
    for(int i = 1;i <= n;i++)
    {
        cin >> p[i] >> q[i];
        if(q[i] - p[i] >= 2)
            result++;
    }
    cout << result << endl;
    return 0;
}
