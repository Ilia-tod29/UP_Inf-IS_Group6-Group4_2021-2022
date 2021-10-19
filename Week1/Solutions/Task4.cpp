#include <iostream>

using namespace std;

int main(){
    int number1, number2;
    cin >> number1 >> number2;
    number1 += number2;
    number2 = number1 - number2;
    number1 -= number2;
    cout << "Number1: " <<  number1 << endl
        << "Number2: " << number2 << endl;
    //4.1
    cout << "--------------4.1-------------------" << endl;
    int help;
    help = number1;
    number1 = number2;
    number2 = help;
    cout << "Number1: " <<  number1 << endl
        << "Number2: " << number2 << endl;
    return 0;
}