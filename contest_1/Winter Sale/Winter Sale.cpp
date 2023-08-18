// Winter Sale.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    float percentage, final_price,actual_price;
    cin >> percentage >> final_price;
    actual_price = final_price/(1-(percentage/100.00));
    cout << round(actual_price*100.0)/100.0;
}

