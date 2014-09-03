#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

#define maxn 100000

char s[100010];
char t[100010];

int get(int n)
{
    if(n == 0)
        return 4;
    return 0;

}

int main()
{
    memset(t,0,sizeof(t));
    gets(s+1);
    int len = strlen(s+1);

    for(int i = 0;i < len;i++)
    {
        t[i + 1] = s[len - i];
    }
    int temp = 0;

    for(int i = len;i >= 1;i--)
    {
        temp = temp * 10 + (t[i] - '0');
        temp %= 4;
    }
    cout << get(temp) << endl;
    return 0;
}

