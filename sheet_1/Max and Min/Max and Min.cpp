// Max and Min.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    long long int a, b, c,max,min;
    cin >> a >> b >> c;

    if (a < b)
    {
        if (a < c)
        {
            min = a;
        }
        else
            min = c;
    }
    else if (b < c)
    {
        min = b;
    }
    else
    {
        min = c;
    }
    cout << min<<" ";
    /*---------------------------------*/
    if (a > b)
    {
        if (a > c)
        {
            max = a;
        }
        else
            max = c;
    }
    else if (b > c)
    {
        max = b;
    }
    else
    {
        max = c;
    }
    cout << max;

}

