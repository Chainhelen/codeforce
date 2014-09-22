#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int n;

int main()
{
    cin >> n;
    if(n < 4)
    {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;

    if(n % 2 == 0)
    {
        cout << "1 * 2 = 2" << endl;
        cout << "2 * 3 = 6" << endl;
        cout << "4 * 6 = 24" << endl;

        for(int i = n;i > 4;i -= 2)
        {
            cout << i << " - " << i - 1 << " = " << 1 << endl;
        }
        for(int i = n;i > 4;i -= 2)
        {
            cout << "24 * 1 = 24" << endl;
        }
    }
    else
    {
        cout << "2 + 3 = 5" << endl;
        cout << "4 * 5 = 20" << endl;
        cout << "20 + 5 = 25" << endl;
        cout << "25 - 1 = 24" << endl;

        for(int i = n;i > 5;i -= 2)
        {
            cout << i << " - " << i - 1 << " = " << 1 << endl;
        }
        for(int i = n;i > 5;i -= 2)
        {
            cout << "24 * 1 = 24" << endl;
        }
    }
    return 0;
}

