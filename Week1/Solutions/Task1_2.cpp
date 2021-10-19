#include <iostream>

using namespace std;

int main(){
    int number;
    cin >> number;
    int firstDigit = number / 1000;
    int secondDigit = (number / 100) % 10;
    int thirdDigit = (number / 10) % 10;
    int fourthDigit = number % 10;
    cout << "First digit: " << firstDigit << endl
        << "Second digit: " << secondDigit << endl
        << "Third digit: " << thirdDigit << endl
        << "Fourth digit: " << fourthDigit << endl
        << "Sum: " << firstDigit + secondDigit + thirdDigit + fourthDigit << endl;

    int reversed = (fourthDigit * 1000) + (thirdDigit * 100) + (secondDigit * 10) + firstDigit;
    cout << "Reversed: " << reversed << endl;
    return 0;
}