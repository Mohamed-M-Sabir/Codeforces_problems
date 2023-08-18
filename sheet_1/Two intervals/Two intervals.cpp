// Two intervals.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (c >= a && c <= b)
    {
        if (b <= d)
        {
            cout << c << " "<< b;
        }
        else
        {
            cout << c << " " << d;
        }
    }


    else if (a>=c &&a<=d)
    {
        if (b <= d)
        {
            cout << a << " " << b;
        }
        else
        {
            cout << a << " " << d;
        }
    }

    else
    {
        cout << -1;
    }
}

