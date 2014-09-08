#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <math.h>

using namespace std;

#define maxn 108

int n;
int len;
int a[1005];

int main()
{
    cin >> n;
    len = 0;
    memset(a,0,sizeof(a));

    for(int i = 1;i <= n;i++)
        cin >> a[i];
    for(int i = 1;i <= n;i++)
    {
        if(a[i])
        {
            len++;
        }
        if(a[i] == 1 && a[i - 1] == 0)
        {
            len++;
        }
    }
    cout << max(len - 1,0) << endl;
}

