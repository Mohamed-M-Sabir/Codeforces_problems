// Two numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    float num1, num2;
    cin >> num1 >> num2;
    cout << "floor " << num1 << " / " << num2 << " = " << floor(num1 / num2) << "\n";
    cout << "ceil " << num1 << " / " << num2 << " = " << ceil(num1 / num2) << "\n";
    cout << "round " << num1 << " / " << num2 << " = " << round(num1 / num2) << "\n";
    return 0;
}