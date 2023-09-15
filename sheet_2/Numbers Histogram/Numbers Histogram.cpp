// Numbers Histogram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

    char sympol;
    int n,i,j,nums;
    cin >> sympol >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> nums;
        for (j = 1; j <= nums; j++)
        {
            cout << sympol;
        }
        cout << "\n";
    
    }

    
}

