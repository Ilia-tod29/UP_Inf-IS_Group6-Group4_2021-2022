#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int years, wasIll, test, antibodies;
    bool vaccine;
    cout << "Enter years: " << " ";
    cin >> years;
    cout << "Enter if the person has vaccine: " << " ";
    cin >> vaccine;
    cout << "Enter how many month ago the person was ill: " << " ";
    cin >> wasIll;
    cout << "Enter how many antibodies does the person have: " << " ";
    cin >> antibodies;
    cout << "Enter how much hours ago was the last negative test: " << " ";
    cin >> test;

    bool IsGoing = ((years >= 18) && (vaccine || wasIll <= 6 || antibodies >= 100 || test <= 48));
    cout << (IsGoing ? "YES" : "NO") << endl;


    return 0;
}