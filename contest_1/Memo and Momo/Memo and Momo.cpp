// Memo and Momo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    long long int a, b, k;
    cin >> a >> b >> k;

    if (a%k==0 && b%k==0) 
    {
        cout << "Both";
    }

    else if (a % k == 0 && b % k != 0)
    {
        cout << "Memo";
    }


    else if (a % k != 0 && b % k == 0)
    {
        cout << "Momo";
    }

    else
    {
        cout << "No One";
    }
}

