// Ali Baba and Puzzles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    long long int a, b, c, d;
    cin >>a >> b >> c >> d;

    if (a + b - c == d) 
    {
        cout << "YES";
    }

    else if (a + (b * c) == d)
    {
        cout << "YES";
    }

    else if (a - b + c == d)
    {
        cout << "YES";
    }

    else if (a - (b * c) == d)
    {
        cout << "YES";
    }

    else if (( a * b) + c == d)
    {
        cout << "YES";
    }

    else if ((a * b) - c == d)
    {
        cout << "YES";
    }

    else 
    {
        cout << "NO";
    }
}

