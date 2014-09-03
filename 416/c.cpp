#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>
using namespace std;

int n;
int k;
struct Table{
     int c,p;
     int pre_num;
}table[1005];

struct Result{
    int request;
    int num_table;
}result[1005];

int vis[1005];
struct R{
    int pre_num;
    int _size;
}r[1005];

int cmp(Table a,Table b)
{
    if(a.p != b.p)
        return a.p > b.p;
    return a.c < b.c;
}
int cmp2(R a,R b)
{
    return a._size < b._size;
}

int main()
{
    cin >> n;
    memset(vis,0,sizeof(vis));
    int len;
    int sum;

    for(int i = 1;i <= n;i++)
    {
        cin >> table[i].c >> table[i].p;
        table[i].pre_num = i;
    }
    cin >> k;
    for(int i = 1;i <= k;i++)
    {
        cin >> r[i]._size;
        r[i].pre_num = i;
    }
    sort(table + 1,table + n + 1,cmp);
    sort(r + 1,r + k + 1,cmp2);
/*
    for(int i = 1;i <= n;i++)
    {
        cout << table[i].c <<" " <<table[i].p <<" " << table[i].pre_num << endl;
    }
    for(int i = 1;i <= k;i++)
        cout << r[i]._size << " " << r[i].pre_num << endl;*/

    len = 0;
    sum = 0;
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= k;j++)
        {
            if(!vis[j] && table[i].c <= r[j]._size)
            {
                len++;
                result[len].request = table[i].pre_num;
                result[len].num_table = r[j].pre_num;

                sum += table[i].p;
                vis[j] = 1;
                break;
            }
        }
    }
    cout << len << " " << sum << endl;

    for(int i = 1;i <= len;i++)
    {
        cout << result[i].request << " "<< result[i].num_table << endl;
    }
    return 0;
}

