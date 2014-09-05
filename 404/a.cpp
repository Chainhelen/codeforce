#include <stdio.h>
#include <iostream>

using namespace std;

char _map[305][305];
char a,b;
int n;
int flag;

int main()
{
    flag = 1;
    cin >> n;
    getchar();

    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= n;j++)
        {
            cin >> _map[i][j];
            if(i == j)
                a = _map[i][j];
            else
                b = _map[i][j];
        }
        getchar();
    }
    if(a == b)
        flag = 0;
    for(int i = 1;i <= n && flag;i++)
    {
        for(int j = 1;j <= n;j++)
        {
            if(i == j || j == n - i + 1)
            {
                if(_map[i][j] != a)
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                if(_map[i][j] != b)
                {
                    flag = 0;
                    break;
                }
            }
        }
    }
    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

