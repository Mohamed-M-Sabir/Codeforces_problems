// Some Sums.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int n, a, b,i,rem,num,sum=0,total_sum=0;
    cin >> n >> a >> b;

    for (i = 1; i <= n; i++)
    {
        num = i;
        while (num > 0)
        {
            rem = num % 10;
            num /= 10;
            sum += rem;
        }
        
        if (sum >= a && sum <= b)
        {
            total_sum += i;
           
        }

        sum = 0;
    }

    cout << total_sum;

}

