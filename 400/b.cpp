#include <stdio.h>
#include <string.h>
#include <iostream>
#include <set>

#define maxn 1005
#define _max 0x3f3f3f3f

using namespace std;


char _map[maxn][maxn];

int dis[maxn];
int n,m;
set<int>si;
int flag;

int getdis(int i)
{
    int flag = 0;
    int result = 0;
    for(int j = 1;j <= m;j++)
    {
        if(_map[i][j] == 'S' && flag == 0)
            return 0x3f3f3f3f;

        if(_map[i][j] == 'G')
            result = 0,flag = 1;

        if(_map[i][j] == '*')
            result++;

        if(_map[i][j] == 'S')
            return result;
    }
}

int main()
{
    cin >> n >> m;
    flag = 1;
    int _maxresult = -1;
    for(int i = 1;i <= n;i++)
    {
        getchar();
        for(int j = 1;j <= m;j++)
        {
            cin >> _map[i][j];
        }
    }
    for(int i = 1;i <= n;i++)
    {
        dis[i] = getdis(i);
        if(dis[i] != 0x3f3f3f3f)
        {
            si.insert(dis[i]);
        }
        else
            flag = 0;
    }
    if(!flag)
    {
        cout << "-1" << endl;
    }
    else
        cout << si.size() << endl;

    return 0;
}

