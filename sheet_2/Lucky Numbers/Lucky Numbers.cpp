// Lucky Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n1, n2,rem,num, i,flag=-1;
    char ch;
    cin >> n1 >> n2;

    for (i = n1; i <= n2; i++)
    {
      
        num = i;
        ch = 1;
        while (num!=0)
        {
            rem = num % 10;
            num /= 10;
            if (rem != 4 && rem != 7)
            {
                ch = 0;
                break;
                
            }
            
        
        }

        if (ch == 1)
        {
            flag++;
            cout << i << " ";
        }

    }

    
    if (flag == -1)
    {
        cout << -1;
    }
    
   
  
}

