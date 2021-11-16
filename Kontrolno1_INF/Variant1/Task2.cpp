#include <iostream>
using namespace std;


int main()
{
    int number;
    cin >> number;
    int temp = 0, number2 = 0, counter = 0;

    while (number != 0)
    {
        temp = temp * 10 + number % 10;
        number /= 10;
    }
    while (temp != 0)
    {
        if ((temp % 10) % 2 != 0)
        {
            number2 = number2 * 10 + temp % 10;
        }
        temp /= 10;
    }
    cout << number2 * 2 << endl;
}