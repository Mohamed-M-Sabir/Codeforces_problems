// Factorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int n, i, j, number;
    long long int fact=1;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cin >> number;

        if (number == 0)
        {
            fact = 1;
            cout << fact<<"\n";
        }
        else
        {
            for (j = 1; j <= number; j++)
            {
                fact *= j;
            }
            cout << fact << "\n";
            fact = 1;

        }

    }
}

