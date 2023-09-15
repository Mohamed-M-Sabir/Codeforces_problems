// Three Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

    int k, s,i,j,l,count=0;
    cin >> k >> s;

    for (i = 0; i <= k; i++)
    {
        for (j = 0; j <= k; j++)
        {
            
            if (s - i - j >= 0 && s - i - j <= k)
            {
                count++;
            }
        }
    }
    cout << count;
}

