// One Prime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int number,i,flag=-1;
    cin >> number;

    for (i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            flag++;
        }
    }

    if (flag >= 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}
