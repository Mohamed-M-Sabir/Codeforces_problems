// Digits Summation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    long long int num1, num2,remainder1,remainder2;
    cin >> num1 >> num2;
    remainder1 = num1 % 10;
    remainder2 = num2 % 10;


    cout << remainder1+ remainder2;
}

