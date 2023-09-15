// Convert To Decimal 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    int n,num,i,dec,rem,final_num=0,power=0;

    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cin >> num;

        dec = num;

        while (dec != 0)
        {
            rem = dec % 2;
            dec /= 2;

            if (rem == 0)
            {
                continue;

            }

            else
            {
                final_num += pow(2, power);
            }
            power++;
        }

        cout << final_num << "\n";
        power = 0;
        final_num = 0;


    }

}

