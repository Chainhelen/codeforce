#include <stdio.h>
#include <string.h>
#include <iostream>
#include <set>

#define maxn 1005
#define _max 0x3f3f3f3f

using namespace std;

int n,k,p;

int main()
{
    cin >> n >> p >> k;
    if(p - k > 1)
        cout << "<< ";

    for(int i = max(p - k,1);i < p ;i++)
    {
        cout << i << " ";
    }
    cout << "(" << p << ")";
    for(int i = p + 1;i <= min(n,p + k);i++)
    {
        cout << " " << i;
    }
    if(p + k < n)
        cout << " >>" << endl;
    else
        cout << endl;

    return 0;
}

