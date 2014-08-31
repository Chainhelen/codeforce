#include <stdio.h>
#include <iostream>

using namespace std;

int flag;

void pri(int x)
{
    if(x == 1)
        cout << "Akshat"  << endl;
    else
        cout << "Malvika" << endl;
}

int n,m;

int main()
{
    cin >> n >> m;
    flag = 1;

    while(1)
    {
        n--;
        m--;
        if(!n | !m)
            break;
        else
            flag *= -1;
    }
    pri(flag);
    return 0;
}
