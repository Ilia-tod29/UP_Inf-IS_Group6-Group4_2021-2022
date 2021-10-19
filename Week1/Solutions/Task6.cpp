// Task6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << boolalpha << ((a + b >c) && (a + c > b) && (b + c > a));
}
