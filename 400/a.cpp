#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int n;
char a;
int _map[20];
int t;
int len;
int result[20];
int _count[20];

int main()
{
    cin >> t;
    len = 0;

    while(t--)
    {
        len = 0;
        getchar();
        memset(_map,0,sizeof(_map));
        for(int i = 0;i < 12;i++)
        {
            cin >> a;
            if(a == 'X')
                _map[i] = 1;
        }
        for(int i = 1;i <= 12;i++)
        {
            memset(_count,0,sizeof(_count));
            if(12 % i != 0)
                continue;
            for(int j = 0;j < 12;j++)
            {
                if(_map[j])
                    _count[j % (12 / i)]++;
            }/*
            cout << i << endl;
            for(int j = 0;j < 12 / i;j++)
            {
                cout << "\t" << _count[j] << endl;
            }*/

            int flag = 0;
            for(int j = 0;j < 12 / i;j++)
            {
                if(_count[j] == i)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag)
            {
                result[++len] = i;
            }
        }
        cout << len;
        for(int i = 1;i <= len;i++)
            cout <<" " << result[i] << "x" << 12 / result[i];
        cout << endl;
    }
    return 0;
}

