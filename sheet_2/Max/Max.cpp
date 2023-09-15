// Max.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int n, i;
    long long int number,max=0;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cin >> number;
        if (number > max)
        {
            max = number;
        }
    }
    cout << max;
}

