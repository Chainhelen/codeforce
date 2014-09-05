#include <stdio.h>
#include <iostream>

using namespace std;

int t;
int n,p;

int main()
{
    cin >> t;
    while(t--)
    {
        cin >> n >> p;
        int a = 1,b = 2,c;
        for(int i = 0;i < 2 * n + p;i++)
        {
            cout << a << " " << b << endl;
            b++;
            if(b > n)
            {
                a++;
                b = a + 1;
            }
        }
    }
    return 0;
}

