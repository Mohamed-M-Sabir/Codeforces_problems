// Area of a Circle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>

#define pi 3.141592653
using namespace std;

int main()
{
    double r;
    cin >> r;
    cout << fixed << setprecision(9)<< pi * r * r;
}

