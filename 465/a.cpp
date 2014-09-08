#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <math.h>

using namespace std;

#define maxn 108

int n;
char a[maxn];
int len;
int place;

int main()
{
    //cout << __gcd(12,15) << endl;
    len = 0;
    place = 0;

    cin >> n;
    getchar();

    for(int i = 1;i <= n;i++)
        cin >> a[i];
    for(int i = 1;i <= n;i++)
    {
        if(a[i] == '1')
        {
            place = i + 1;
        }
        else
        {
            place = i;
            break;
        }
    }
        cout << min(place,n) << endl;
    return 0;
}

