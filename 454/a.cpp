#include <stdio.h>
#include <string.h>
#include <queue>
#include <cmath>

using namespace std;

int n;

int main()
{
    scanf("%d",&n);
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= abs(n - 2 * i + 1 ) / 2;j++)
        {
            printf("*");
        }
        for(int j = 1;j <= n - abs(n - 2 * i + 1);j++)
        {
            printf("D");
        }
        for(int j = 1;j <= abs(n - 2 * i + 1 ) / 2;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

