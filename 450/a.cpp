#include <string.h>
#include <stdio.h>
#include <iostream>
#include <queue>

using namespace std;

int result;
int n,m;
int a;
struct Chi
{
    int point,num;
}chi[1005],cur;

int solve()
{
    queue <Chi> q;
    for(int i = 1;i <= n;i++)
        q.push(chi[i]);
    while(!q.empty())
    {
        cur = q.front();
     //   cout << cur.point << " " << cur.num << endl;
        q.pop();

        if(cur.num > m )
        {
            cur.num -= m;
            q.push(cur);
        }
        else
        {
            result = cur.point;
        }
    }
    printf("%d\n",result);
}

int main()
{
    cin >> n >> m;
    for(int i = 1;i <= n;i++)
    {
        cin >> a;
        chi[i].point = i;
        chi[i].num = a;
    }
    solve();

    return 0;
}
