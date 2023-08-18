// Data Type Guessing.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    long double a, n, k, result;
    cin >> n >> k >> a;
    result = (n * k) / a;

    /*   
        Note
    
            double is when a number has a floating-point.

            int Range: [−2147483648,2147483647].

            long long can hold values of a bigger range than that of int.

    */

    if ((long long int)result != result)
    {
        cout << "double";
    }

    else if ((result>= -2147483648) && (result<= 2147483647))
    {
        cout << "int";
    }

    else
    {
        cout << "long long";
    }
}


