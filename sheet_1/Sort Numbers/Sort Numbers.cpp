// Sort Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    long long int a, b, c,min;
    cin >> a >> b >> c;

    if (a <= b && a<=c)
    {
        if (b <= c) 
        {
            cout << a << "\n" << b << "\n" << c<<"\n\n";
            cout << a << "\n" << b << "\n" << c ;
        }
        else
        {
            cout << a << "\n" <<c << "\n" << b << "\n\n";
            cout << a << "\n" << b << "\n" << c;

        }

    }

    else if (b <= a && b <= c)
    {
        if (a <= c)
        {
            cout << b << "\n" << a << "\n" << c << "\n\n";
            cout << a << "\n" << b << "\n" << c;
        }
        else
        {
            cout << b << "\n" << c << "\n" << a << "\n\n";
            cout << a << "\n" << b << "\n" << c;
        }

    }

    else if (c<=a &&c<=b)
    {
        if (b<=a)
        {
            cout << c << "\n" << b << "\n" << a << "\n\n";
            cout << a << "\n" << b << "\n" << c;
        }
        else
        {
            cout << c << "\n" << a << "\n" << b << "\n\n";
            cout << a << "\n" << b << "\n" << c;
        }
    }
}

