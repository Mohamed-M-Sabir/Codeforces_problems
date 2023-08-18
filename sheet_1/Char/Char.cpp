// Char.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    char litter;
    cin >> litter;
    if (litter >= 'A' && litter <= 'Z')
    {
        cout << (char)(litter + 32);
    }
    else
    {
        cout << (char)(litter-32);
    }
}

