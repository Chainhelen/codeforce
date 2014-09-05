#include <stdio.h>
#include <iostream>

using namespace std;
#define maxn

int k,v,b,a;
int result;

int main()
{
    cin >> k >> a >> b >> v;
    result  = 0;
    while(1)
    {
        //int temp = max(0,);
        int temp = min(k - 1,b);
        result++;
        a -= (temp + 1) * v;
        b -= temp;
        if(b < 0)
            b = 0;
        if(a <= 0)
            break;
    }
    cout << result << endl;
    return 0;
}

