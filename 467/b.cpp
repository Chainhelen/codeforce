#include <iostream>

using namespace std;

#define maxn 1005

int n,m,k;
int x[maxn];
int result;

int bil(int a,int b)
{
    int c = a ^ b;
    int result = 0;

    for(int i = 0;i <= 20;i++)
    {
        if((c >> i) & 1)
        {
            result++;
        }
    }
    if(result <= k)
    {
        return 1;
    }
    return 0;
}

int main()
{
    cin >> n >> m >> k;
    result = 0;
    for(int i = 1;i <= m + 1;i++)
    {
        cin >> x[i];
    }
    for(int i = 1;i <= m;i++)
    {
        if(bil(x[i],x[m + 1]))
        {
            result++;
        }
    }
    cout << result << endl;
    return 0;
}
