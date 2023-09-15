// Primes from 1 to n.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int number, i,j,flag=-2;
    cin >> number;

    for (i = 2; i <= number; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                flag++;
            }
        }

        if (flag == 0)
        {
            cout << i << " ";
        }
        
        flag = -2;
    }

    

}
