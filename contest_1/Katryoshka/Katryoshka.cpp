// Katryoshka.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    unsigned long long int eye, mouth, body, Katryoshkas=0;
    cin >> eye >> mouth >> body;

    /*
        1.Two eyes and one body.
        2.Two eyes, one mouth, and one body.
        3.One eye, one mouth, and one body.
    */

    if (mouth <= eye && mouth <= body && mouth!=0)
    {
        Katryoshkas += mouth;
        eye -= mouth;
        body -= mouth;

        if (body <= eye / 2)
        {
            Katryoshkas += body;
        }

        else if (eye / 2 <= body)
        {
            Katryoshkas += eye / 2;
        }
    }

    else if (mouth == 0)
    {
        if (body <= eye/2)
        {
            Katryoshkas = body;
        }

        else if(eye/2 <=body)
        {
            Katryoshkas = eye / 2;
        }
    }

    else
    {
        if (mouth <= body && mouth>=eye)
        {
            Katryoshkas = eye;
        }
        else if (mouth >= body && mouth <= eye)
        {
            Katryoshkas = body;
        }
        else if (eye <= body)
        {
            Katryoshkas = eye;
        }
        else if (eye >= body)
        {
            Katryoshkas = body;
        }

    }
    


    cout << Katryoshkas;
}

