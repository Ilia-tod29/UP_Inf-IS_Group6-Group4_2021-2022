// Task7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	double perimeter = a + b + c;
	double halfPerimeter = perimeter / 2;
	double area = sqrt(halfPerimeter * (halfPerimeter - a) * (halfPerimeter - b) * (halfPerimeter - c));
	cout << "Perimeter = " << perimeter << " Area = " << area ;

}
