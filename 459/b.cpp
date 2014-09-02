#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

__int64 a[2 * 100005];
__int64 n;
__int64 _min = 0x3f3f3f3f;
__int64 _max = -0x3f3f3f3f;
__int64 num1,num2;


int main()
{
    num1 = num2 = 0;
    //cout << _min << endl;
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        cin >> a[i];
        _min = min(_min,a[i]);
        _max = max(_max,a[i]);
    }
    for(int i = 1;i <= n;i++)
    {
        if(_min == a[i])
            num1++;
        if(_max == a[i])
            num2++;
    }
    if(_min != _max)
        cout << _max - _min << " " << num1 * num2 << endl;
    else
        cout << 0 << " " << num1 * (num1 - 1) / 2 << endl;
}

