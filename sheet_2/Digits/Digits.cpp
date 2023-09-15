// Digits.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
   long long int t, num, rem, ts;
    int i;
    cin >> t;
    for (i = 1; i <= t; i++)
    {
        cin >> ts;
        if (ts == 0)
        {
            cout << 0<<" ";
        }
        num = ts;
        while (num != 0)
        {
            rem = num % 10;
            num /= 10;
            cout << rem << " ";
        }

        cout << "\n";

    }
}

