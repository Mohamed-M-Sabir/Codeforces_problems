// The last 2 digits.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

    unsigned long long int  a, b, c, d, mul;
    cin >> a >> b >> c >> d;

    mul = ((a % 100) * (b % 100) * (c % 100) * (d % 100)) % 100;
    
    if (mul<10) 
    {
        cout << 0 << mul;
    }
    else
    {
        cout << mul;
    }
   
}

