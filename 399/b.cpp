#include <stdio.h>
#include <string.h>
#include <iostream>
#include <set>
#include <stack>

#define maxn 1005
#define _max 0x3f3f3f3f

using namespace std;

int n,k,p;
__int64 step[55];
int b[55];
int len;
char s[55];
int nn;

__int64 pow(int x,int n)
{
    __int64 a = x;
    __int64 b = 1;
    while(n)
    {
        if(n % 2)
            b *= a;
        a *= a;
        n /= 2;
    }
    return b;
}

int main()
{
    len = 0;
    cin >> n;
    getchar();

    for(int i = 0;i < n;i++)
    {
        cin >> s[i];
        if(s[i] == 'B')
            b[++len] = i;
    }
    __int64 result = 0;
    for(int i = 1;i <= len;i++)
    {
        result += pow(2,b[i]);
    }
    cout << result << endl;
}

