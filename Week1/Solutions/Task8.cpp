// Task8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double max = a;
    double min = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    
    if (min > b)
    {
        min = b;
    }
    if (min > c)
    {
        min = c;
    }

    cout << max << " " << min; 
}

