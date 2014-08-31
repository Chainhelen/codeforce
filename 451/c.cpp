/*£¨1£©w1 >= w2£¬w2 >= w3                                      £¨2£©w1 >= w2£¬w2 < w3

¡ª¡ª>  w1 = (2d1 + d2 + k)  / 3¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡ª¡ª>  w1 = (2d1 - d2 + k)  / 3

          w2 = (-d1 + d2 + k)  / 3¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡ w2  = (-d1 - d2 + k)  / 3

          w3 = (-d1 - 2d2 + k) / 3¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡ w3  = (-d1 + 2d2 + k)  / 3



    £¨3£©w1 < w2£¬w2 >= w3                                          £¨4£©w1 < w2£¬w2 < w3

¡ª¡ª>  w1 = (-2d1 + d2 + k)  / 3¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡    ¡ª¡ª>  w1 = (-2d1 - d2 + k)  / 3

¡¡¡¡¡¡ w2 = ( d1   + d2 + k )  / 3¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡ ¡¡¡¡¡¡ w2 = ( d1   - d2 + k )  / 3

¡¡¡¡¡¡ w3 = ( d1   - 2d2 + k)  / 3¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡  w3 = ( d1  + 2d2 + k)  / 3*/

#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

__int64 n,k,d1,d2;
__int64 a,b,c;
int flag;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        flag = 0;
        cin >> n >> k >> d1 >> d2;
        if(n % 3)
            printf("no\n");
        else
        {
            a = (2 * d1 + d2 + k) / 3;
            b = (-d1 + d2 + k) / 3;
            c = (-d1 - 2 * d2 + k) / 3;
            if((2 * d1 + d2 + k) % 3 == 0 && (-d1 + d2 + k) % 3 == 0 && (-d1 - 2 * d2 + k) % 3 == 0 && n / 3 >= a && a >= b && b >= c && c >= 0)
            {
                flag = 1;
            }

            a = (2 * d1 - d2 + k) / 3;
            b = (-d1 - d2 + k) / 3;
            c = (-d1 + 2 * d2 + k) / 3;
            if((2 * d1 - d2 + k) % 3 == 0 && (-d1 - d2 + k) % 3 == 0 && (-d1 + 2 * d2 + k) % 3 == 0 && n / 3 >= max(a,c) && a >= b && c >= b && b >= 0)
            {
                flag = 1;
            }

            a = (-2 * d1 + d2 + k) / 3;
            b = (d1 + d2 + k) / 3;
            c = (d1 - 2 * d2 + k) / 3;
            //printf("%d %d %d\n",a,b,c);
            if((-2 * d1 + d2 + k) % 3 == 0 && (d1 + d2 + k) % 3 == 0 && (d1 - 2 * d2 + k) % 3 == 0 && n / 3 >= b && b >= c && b >= a && a >= 0 && c >= 0)
            {
                flag = 1;
            }

            a = (-2 * d1 - d2 + k) / 3;
            b = (d1 - d2 + k) / 3;
            c = (d1 + 2 * d2 + k) /3;
            if((-2 * d1 - d2 + k) % 3 == 0 && (d1 - d2 + k) % 3 == 0 && (d1 + 2 * d2 + k) %3 == 0 && n / 3 >= c && c >= b && b >= a && a >= 0)
            {
                flag = 1;
            }
            if(flag)
                printf("yes\n");
            else
                printf("no\n");
        }
    }
    return 0;
}
