// Fixed Password.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int pass, correct_pass = 1999;

    while (1)
    {
        cin >> pass;

        if (pass != correct_pass)
        {
            cout << "Wrong\n";
            continue;
        }

        else
        {
            cout << "Correct";
            break;
        }
    }

}

