// First digit !.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int num,rem;
    cin >> num;
    rem = num / 1000;
    if (rem % 2 == 0)
    {
        cout << "EVEN";
    }
    else
    {
        cout << "ODD";
    }
}

