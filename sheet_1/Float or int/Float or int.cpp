// Float or int.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    float num;
    cin >> num;
    if (num == (int)num)
    {
        cout << "int " << int(num);
    }
    else
    {
        cout << "float " << int(num) << " " << num - (int)num;
    }
}

