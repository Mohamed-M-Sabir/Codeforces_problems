// Shape3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

    int n,i,j,k;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (k = i; k <= n - 1; k++)
        {
            cout << " ";
        }

        for (j = 1; j <= i + i - 1; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    /*/-------------------------------*/


    for (i = n; i >= 1; i--)
    {

        for (k = i; k <= n - 1; k++)
        {
            cout << " ";
        }

        for (j = i+i-1; j >=1; j--)
        {
            cout << "*";
        }

        cout << "\n";
    }

}

