// Sum of Consecutive Odd Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n, i,x,y,minn,maxx,j,sum=0;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> x >> y;
		minn = min(x, y);
		maxx = max(x, y);

		for (j = minn+1; j < maxx; j++)
		{
			if (j % 2 != 0)
			{
				sum += j;
			}

		}
		cout << sum << "\n";
		sum = 0;

	}
}


