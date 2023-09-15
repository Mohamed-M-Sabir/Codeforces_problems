// PUM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int n, i,pum=4,start=1;
    cin >> n;

    while (n != 0)
    {
        for (i = start; i < pum; i++)
        {
            cout << i << " ";
        }
        cout << "PUM\n";
        start = pum + 1;
        pum += 4;
        n = n - 1;
    }

}

