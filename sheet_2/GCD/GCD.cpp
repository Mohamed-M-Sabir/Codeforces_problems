// GCD.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int n1,n2, i,max=1;
    cin >> n1 >> n2;
    for (i = 1; (i <= n1 || i<=n2); i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            if (i > max)
            {
                max = i;
            }
            
        }
    }

    cout << max << "\n";
}
