#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <cstring>

using namespace std;

int n;
char a[3005];
int flag;
int r[3005];
int l[3005];

int main()
{
    cin >> n;
    memset(r,0,sizeof(r));
    memset(l,0,sizeof(l));
    getchar();

    flag = 0;
    for(int i = 1;i <= n;i++)
    {
        cin >> a[i];
        if(a[i] == '.')
        {
            if(flag)
            {
                 r[i] = r[i-1] + 1;
            }
        }
        else if(a[i] == 'L')
        {
            flag = 0;
        }
        else if(a[i] == 'R')
            flag = 1;
    }
    //puts(a);
    /*
    for(int i = 1;i <= n;i++)
        cout << a[i];
    cout << endl;*/
    flag = 0;
    for(int i = n;i >= 1;i--)
    {
        if(a[i] == '.')
        {
            if(flag)
                l[i] = l[i + 1] + 1;
        }
        else if(a[i] == 'R')
        {
            flag = 0;
        }
        else if(a[i] == 'L')
        {
            flag = 1;
        }
    }
    int len = 0;
    for(int i = 1;i <= n;i++)
    {
        if(a[i] == '.' && l[i] == r[i])
        {
            len++;
        }
    }
    cout << len << endl;

    return 0;
}

