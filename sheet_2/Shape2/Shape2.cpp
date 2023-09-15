// Shape2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int i, j,k,n;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = n - i; j >= 1; j--)
        {
            cout << " ";
        }

        for (k = 1; k <= i+i-1; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    
}

