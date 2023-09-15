// Sequence of Numbers and Sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n,m,i,minn,maxx,sum=0;

    while (1)
    {
        cin >> n >> m;

        if (n <= 0 || m <= 0)
        {
            break;
        }
        minn = min(n, m);
        maxx = max(n, m);

        for (i = minn; i <= maxx; i++)
        {
            sum += i;
            cout << i << " ";
        }
        cout << "sum =" << sum<<"\n";
        sum = 0;

    }
}



