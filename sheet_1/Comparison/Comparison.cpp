// Comparison.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    char op;
    cin >> num1 >> op >> num2;
    switch (op) 
    {
        case '<':
            if (num1 < num2)
            {
                cout << "Right";
            }
            else
            {
                cout << "Wrong";
            }
            break;

        case '>':
            if (num1 > num2)
            {
                cout << "Right";
            }
            else
            {
                cout << "Wrong";
            }
            break;

        case '=':
            if (num1 == num2)
            {
                cout << "Right";
            }
            else
            {
                cout << "Wrong";
            }
            break;

    }
}

