// Easy Fibonacci.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

    int n,i,first=0,second=1,temp;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        if (i == 0 || i == 1)
        {
            cout << i << " ";
        }

        else
        {
            cout << first + second << " ";
            temp=first;
            first = second;
            second = temp + second;

        }
    }
}


