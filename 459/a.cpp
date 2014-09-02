#include <stdio.h>
#include <string.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int x1;
int x2;
int r1;
int r2;

int main()
{
    cin >> x1 >> r1 >> x2 >> r2;
    if(x1 > x2)
    {
        swap(x1,x2);
        swap(r1,r2);
    }
    if(x1 == x2 && r1 == r2)
    {
        printf("-1\n");
    }
    else if(x1 != x2 && r1 != r2)
    {
        if(abs(x1-x2) != abs(r1-r2))
        {
            printf("-1\n");
        }
        else
        {
            printf("%d %d %d %d\n",x1,r2,x2,r1);
        }
    }
    else if(x1 == x2)
    {
        printf("%d %d %d %d\n",x1+abs(r1 - r2),r1,x2 + abs(r1 - r2),r2);
    }
    else if(r1 == r2)
    {
        printf("%d %d %d %d\n",x1,r1-abs(x1-x2),x2,r1-abs(x2-x1));
    }
    else
    {
        printf("-1\n");
    }
}

