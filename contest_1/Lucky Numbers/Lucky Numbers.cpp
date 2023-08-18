// Lucky Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int number, digit1, digit2;
    cin >> number;
    digit1 = number / 10;
    digit2 = number % 10;

    if (digit2 == 0)
    {
        cout << "YES";
    }
    else if (digit1 % digit2 == 0 || digit2 % digit1 == 0 )
    {
        cout << "YES";
    }

    else
    {
        cout << "NO";
    }
    
}

