// Next Alphabet.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    char alpha,next_alpha;
    cin >> alpha;

    if ((int)alpha == 122) 
    {
        next_alpha = 97;
    }
    else
    {
        next_alpha = alpha + 1;

    }
    cout << next_alpha;
}

