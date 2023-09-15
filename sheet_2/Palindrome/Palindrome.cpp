// Palindrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    long long int number,rem,num,final_num=0,x=1;
    int status;
    cin >> number;


    if (number >= 1 && number <= 9)
    {
        status = 1;
    }

    else if (number >= 10 && number <= 99)
    {
        status = 10;
    }

    else if (number >= 100 && number <= 999)
    {
        status = 100;
    }

    else if (number >= 1000 && number <= 9999)
    {
        status = 1000;
    }

    else if (number >= 10000 && number <= 99999)
    {
        status = 10000;
    }

    else if (number >= 100000 && number <= 999999)
    {
        status = 100000;
    }

    else if (number >= 1000000 && number <= 9999999)
    {
        status = 1000000;
    }

    else if (number >= 10000000 && number <= 99999999)
    {
        status = 10000000;
    }

    num = number;

    while (num > 0)
    {
        
        rem = num % 10;
        num = num / 10;
        final_num = final_num + rem * (status / x);
        x = x * 10;
    }

    cout << final_num << "\n";

    if (final_num == number)
    {
        cout << "YES";

    }

    else
    {
        cout << "NO";
    }
    
}

