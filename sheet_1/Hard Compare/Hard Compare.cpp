// Hard Compare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	unsigned long long int a, b, c, d;
	cin >> a >> b >> c >> d;

	if (b*log(a) > d*log(c))
	{
		cout << "YES";

	}
	else
	{
		cout << "NO";
	}

}

