#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

string h,answer;
__int64 num;
__int64 _min,_max;
int n;

int check()
{
    if(h == ">=")
    {
        if(answer  == "Y")
        {
            if(num >= _min)
            {
                _min = num;
            }
        }
        if(answer  == "N")
        {
            if(num <= _max)
            {
                _max = num - 1;
            }
        }
    }
    else if(h == "<")
    {
        if(answer  == "Y")
        {
            if(num <= _max)
            {
                _max = num - 1;
            }
        }
        if(answer  == "N")
        {
            if(num >= _min)
            {
                _min = num;
            }
        }
    }
    else if(h == "<=")
    {
        if(answer  == "Y")
        {
            if(num <= _max)
            {
                _max = num;
            }
        }
        if(answer  == "N")
        {
            if(num >= _min)
            {
                _min = num + 1;
            }
        }
    }
    else if(h == ">")
    {
        if(answer  == "Y")
        {
            if(num >= _min)
            {
                _min = num + 1;
            }
        }
        if(answer  == "N")
        {
            if(num <= _max)
            {
                _max = num;
            }
        }
    }
}

int main()
{
    _min =  -1 * 2000000000;
    _max = 2000000000;
/*
    cout << _min << endl;
    cout << _max << endl;*/

    cin >> n;
    while(n--)
    {
        cin >> h >> num >> answer;
        check();
    }
    if(_min <= _max)
    {
        cout << _min << endl;
    }
    else
        cout <<"Impossible" << endl;
    return 0;
}

