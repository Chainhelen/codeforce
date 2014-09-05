#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int n;
int a[104];

int main()
{
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        cin >> a[i];
    }
    sort(a + 1,a + 1 + n);
    for(int i = 1;i <= n;i++)
    {
        cout << a[i];
        if(i == n)
            cout << "\n";
        else
            cout << " ";
    }
    return 0;
}

