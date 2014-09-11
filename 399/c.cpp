#include <iostream>
#include <cstdio>
typedef long long ll;

using namespace std;

int A, B;

ll Ans; int Ai = -1;

int main()
{
    scanf("%d %d", &A, &B);

    Ans = (ll)(-1)*(B)*(B);

    for(int i = 0; i < A; i++)
    {
        ll p, t, l;
        p = i*1+(ll)(A-i)*(A-i);
        t = B/(i+2); l = B%(i+2);
        p -= (ll)(l)*(t+1)*(t+1)+(ll)(i+2-l)*t*t;

        if( Ans < p ){ Ans = p; Ai = i; }
    }

    printf("%I64d\n", Ans); //cout<<Ai<<endl;

    int j = 1, k = 1;

    while(1)
    {

        if( k <= B%(Ai+2) )
            for(int p = 0; p < B/(Ai+2)+1; p++)
                printf("x");

        else
            for(int p = 0; p < B/(Ai+2); p++)
                printf("x");

        k++;

        if( j >= Ai+2 ){ puts(""); return 0; }

        if( j == Ai+1 )
            for(int p = 0; p < A-Ai; p++)
                printf("o");

        else printf("o");

        j++;


    }
}

