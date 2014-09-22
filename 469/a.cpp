#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

#define maxn 1005

int a[maxn];
int p;
int n;
int temp;

int main()
{
    cin >> n;
    cin >> p;
    memset(a,0,sizeof(a));

    for(int i = 1;i <= p;i++)
        cin >> temp,a[temp] = 1;
    cin >> p;
    for(int i = 1;i <= p;i++)
        cin >> temp,a[temp] = 1;

    for(int i = 1;i <= n;i++)
    {
        if(!a[i])
        {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    cout << "I become the guy." << endl;
    return 0;
}

