#include<iostream>
using namespace std;
int main()
{
    int n, k;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter k: ";
    cin >> k;
    bool flag = true;
    if (k == 0) {
        cout << boolalpha << !flag << endl;
    }
    else {
        while (n != 0) {
            if (n == k) {
                break;
            }
            else if (n < k || n <= 9) {
                flag = false;
                break;
            }
            n = n / 10;
        }
        cout << boolalpha << flag << endl;
    }
}

