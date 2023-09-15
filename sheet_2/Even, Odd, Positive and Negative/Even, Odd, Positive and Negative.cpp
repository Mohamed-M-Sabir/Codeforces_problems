// Even, Odd, Positive and Negative.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int n,i,number,pos=0,neg=0,even=0,odd=0;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> number;

        if (number > 0)
        {
            pos += 1;
        }
        else if(number<0)
        {
            neg += 1;
        }


        if (number % 2 == 0)
        {
            even += 1;
        }
        else
        {
            odd += 1;
        }
    }

    cout << "Even: " << even << "\n" << "Odd: " << odd << "\n" << "Positive: " << pos << "\n" << "Negative: " << neg << "\n";
}

