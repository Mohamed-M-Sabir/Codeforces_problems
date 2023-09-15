// Even Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n, i,flag=-1;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            flag++;
            cout << i << "\n";

        }
    
    }
    if (flag == -1)
    {
        cout << flag;
    }
}

