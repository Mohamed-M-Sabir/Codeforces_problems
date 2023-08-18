// Mathematical Expression.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    long long int num1, num2,result;
    char op,equal;
    cin >> num1 >> op >> num2>>equal>>result;
    switch (op)
    {
    case '+':
        if (num1 + num2==result)
        {
            cout << "Yes";
        }
        else
        {
            cout << num1+num2;
        }
        break;

    case '-':
        if (num1 - num2==result)
        {
            cout << "Yes";
        }
        else
        {
            cout << num1-num2;
        }
        break;

    case '*':
        if (num1 * num2==result)
        {
            cout << "Yes";
        }
        else
        {
            cout << num1*num2;
        }
        break;

    }
}
