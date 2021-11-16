#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool check = (((a > 0 && b > 0) || (a > 0 && c > 0) || (b > 0 && c > 0))&& 
            ((a % 7 == 0 && a != 0 && b % 7 != 0 && c % 7 != 0) ||
            (b % 7 == 0 && b != 0 && a % 7 != 0 && c % 7 != 0)  ||
            (c % 7 == 0 && c != 0 && a % 7 != 0 && b % 7 != 0 )));
    cout << boolalpha << check;
    return 0;
}