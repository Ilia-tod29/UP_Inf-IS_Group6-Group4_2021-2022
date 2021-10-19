#include <iostream>

using namespace std;

int main(){
    int number1, number2;
    cin >> number1 >> number2;
    int product = number1 * number2;
    cout << "Product: " << product << endl
        << "Last digit: " << product % 10 << endl
        << "Is even: " << ((product % 10) % 2 == 0) << endl;
    return 0;
}