#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n >= 3 && n <= 25) {
        //Top
        for (int i = 0; i < 6 + 2 * n; i++) {
            if (i > n - 2 && i < n + 7) {
                cout << "*";
            }
            else cout << " ";
        }
        cout << endl;
        //Middle
        for (int i = 0; i < n - 2; i++) {
            for (int j = 0; j < 6 + 2 * n; j++) {
                if (j == n - i - 2 || j == n - i + 2 ||
                j == n + i + 3 || j == n + 7 + i) {
                    cout << "*";
                }
                else cout << " ";
            }
            cout << endl;
        }
        //Bottom
        for (int i = 0; i < 6 + 2 * n; i++) {
            if (i < 5 || i > n * 2) {
                cout << "*";
            }
            else cout << " ";
        }
    }
    else cout << "Wrong number";

    return 0;
}