#include<stdio.h>
#include<string>
#include<algorithm>

using namespace std;

char s[105][105];
int n,m;

struct node
{
    int num;
    int point;
}a[105];

int cmp(node b,node c)
{
    if(b.num==c.num)
        return b.point<c.point;
    return b.num<c.num;
}

int main()
{
    while(scanf("%d %d",&n,&m)!=-1)
    {
        for(int i=0;i<m;i++)
        {
            scanf("%s",s[i]);

            a[i].point=i;
            a[i].num=0;

            for(int j=n-1;j>=0;j--)
            {
                for(int k=j+1;k<=n-1;k++)
                {
                    if(s[i][k]<s[i][j])
                     {
                         a[i].num++;
                     }
                }
            }
            //printf("ww %d\n",a[i].num);
        }
        sort(a,a+m,cmp);
        for(int i=0;i<=m-1;i++)
        {
            printf("%s\n",s[a[i].point]);
        }
    }
    return 0;
}
