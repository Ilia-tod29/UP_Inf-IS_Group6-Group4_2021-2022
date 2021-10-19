#include <iostream>

using namespace std;

int main(){
    int intervalStart, intervalEnd;
    double number;
    cout << "Enter a real number: " << endl;
    cin >> number;
    cout << "Enter an interval: " << endl;
    cin >> intervalStart >> intervalEnd;
    bool isInInterval = (number >= intervalStart && number <= intervalEnd) || (number >= intervalEnd && number <= intervalStart);
    cout << boolalpha << isInInterval << endl;
    return 0;
}