// Age in Days.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    long long int age,year,month,day;
    cin >> age;
    if (age < 30)
    {
        year = 0;
        month = 0;
        day = age;
    }

    else if (age < 365)
    {
        year = 0;
        month = age/30;
        day = age%30;
    }

    else if (age >= 365)
    {
        year = age/365;
        month = (age % 365)/30;
        day = (age % 365)%30;
    }

    cout << year << " years\n" << month << " months\n" << day << " days\n";
}

