#include <stdio.h>
#include <iostream>

using namespace std;

double x,y;
double a,d;
int n;
double sum;

void solve()
{
    __int64 m = (__int64)(sum / a);
    double remind = sum - a * (double)m;
    sum = (m % 4) * a + remind;

    if(m % 4 == 0)
    {
        x = remind;
        y = 0;
    }
    else if(m % 4 == 1)
    {
        x = a;
        y = remind;
    }
    else if(m % 4 == 2)
    {
        x = a - remind;
        y = a;
    }
    else
    {
        x = 0;
        y = a - remind;
    }
}

int main()
{
   /* cin >> a >> d;
    cin >> n;*/
    scanf("%lf %lf",&a,&d);
    scanf("%d",&n);

    for(int i = 1;i <= n;i++)
    {
        sum = (double)i * d;
        solve();
        printf("%.10f %.10f\n",x,y);
    }

    return 0;
}

