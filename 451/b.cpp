#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>

using namespace std;

const int maxn = 1e5 + 5;

int n,arr[maxn],pos[maxn];

int judge(int l,int r)
{
    for(int i = 0;i + l <= r;i++)
    {
        if(arr[l + i] != pos[r - i])
            return 0;
    }
    return true;
}

int main()
{
    cin >> n;
    for(int i = 0;i < n;i++)
    {
        cin >> arr[i];
        pos[i] = arr[i];
    }
    sort(pos,pos+n);
    int l = 0,r = n - 1;
    while(l < n && pos[l] == arr[l])
        l++;
    while(r >= 0 && pos[r] == arr[r])
        r--;
    if(judge(l,r)){
        if(r < l)
            l = r = 0;
        cout << "yes" << endl;
        cout << l + 1 << " " << r + 1 << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}
