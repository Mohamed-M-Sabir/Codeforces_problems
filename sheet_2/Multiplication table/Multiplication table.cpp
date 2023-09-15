// Multiplication table.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cin >> n;
    for (i = 1; i <= 12; i++)
    {
        cout << n << " * " << i << " = " << n * i<<"\n";
    }
}

