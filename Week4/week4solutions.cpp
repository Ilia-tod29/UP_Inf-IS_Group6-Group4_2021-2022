// week4solutions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	/*
	//task 0
	int n;
	cin >> n;
	int num = 1;
	cout << num;
	for (int i = 0; i < n - 1; i++)
	{
		num = num * 10 + 1;
		cout << " + " << num;

	}
	
	//task 1
	int SUM = 0;
	for (int i = 100; i <= 200; i++)
	{
		if (i % 9 == 0)
			SUM += i;
	}
	cout << SUM << endl;
	
	//task 2

	int number;
	cin >> number;
	int reverseNumber, temp = number;
	reverseNumber = 0;
	while (temp != 0) {
		reverseNumber = reverseNumber * 10 + temp % 10;
		temp = temp / 10;
	}
	if (number == reverseNumber) {
		cout << "The number is palindrom";
	}
	else {
		cout << "The number is not palindrom";
	}

	/*

	//task 3

	int n, reversedNUm = 0, remainder;

	cout << " Enter a integer: ";
	cin >> n;

	while (n != 0) {
		remainder = n % 10;
		reversedNUm = reversedNUm * 10 + remainder;
		n /= 10;
	}
	cout << " Reversed: " << reversedNUm;
	return 0;

	//task 4

	int Number;
	cin >> Number;
	int temp = Number, firstDigit, lastDigit = Number % 10;
	while (temp != 0) {

		if (temp < 10)
		{
			firstDigit = temp;
		}
		temp /= 10;

	}
	cout << " The first digit of " << Number << " is:" << firstDigit << endl;
	cout << " The last digit of " << Number << " is :" << lastDigit << endl;
	if (firstDigit == lastDigit) {
		cout << "firstDigit = lastDigit" << endl;

	}
	else
	{
		cout << "firstDigit != lastDigit" << endl;
	}

	//task 5

	int number;
	cin >> number;
	for (int i = 2; i < number / 2; i++) {
		if (number % i == 0) {
			bool flag = true;
			for (int j = 2; j < i / 2; j++) {
				if (i % j == 0) {
					flag = false; break;
				}
			}
			if (flag) cout << i << " ";
		}
	}
	return 0;
	//task 6
	int a, b, c;
	for (size_t i = 1; i <= 50; i++)
	{
		c = i;
		for (size_t j = 1; j <= 50; j++)
		{
			b = j;
			for (size_t k = j; k <= 50; k++)
			{
				a = k;
				if (c * c * c == a * a + b * b)
				{
					cout << a << ", " << b << ", " << c << endl;
				}
			}
		}
	}

	//task 7
	double x, y, x_circle, y_circle, radius;
	cin >> x >> y >> x_circle >> y_circle >> radius;
	bool is_inside = (x - x_circle) * (x - x_circle) + (y - y_circle) * (y - y_circle) <= radius * radius;
	cout << boolalpha << is_inside;

	// task 8
	int n;
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		cout << "* ";
	}
	cout << endl;
	for (size_t i = 1; i <= n - 2; i++)
	{
		for (size_t j = 1; j <= n; j++)
		{
			if (j == 1 || j == n)
			{
				cout << "* ";
			}
			else if (j <= i)
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
	for (size_t i = 0; i < n; i++)
	{
		cout << "* ";
	}
	*/
}


