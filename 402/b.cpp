#include <stdio.h>
#include <iostream>

#include <math.h>
#include <cmath>

using namespace std;
#define maxn 1005

int _min;
int place;
int a[maxn];
int n,k;

int check(int x)
{
    int result = 0;
    for(int i = 1;i <= n;i++)
    {
        if( (x - i) * k != a[x] - a[i] )
        {
            result++;
        }
        if(a[x] - (x - i) * k <= 0)
            return 0x3f3f3f3f;
    }
    return result;
}

int main()
{
    cin >> n >> k;
    _min = 0x3f3f3f3f;

    for(int i = 1;i <= n;i++)
        cin >> a[i];
    for(int i = 1;i <= n;i++)
    {
        int result = check(i);
        if(_min > result)
        {
            place = i;
            _min = result;
        }
    }
    /*cout << place << endl;
    cout << _min << endl;*/
    cout << _min << endl;
    for(int i = 1;i <= n;i++)
    {
        if((place - i) * k < a[place] - a[i])
        {
            cout << "+ " << i << " " << abs(a[place] - a[i] - k * (place - i)) << endl;
        }
        else if((place - i) * k > a[place] - a[i])
        {
            cout << "- " << i << " " << abs(a[place] - a[i] - k * (place - i)) << endl;
        }
    }
}

