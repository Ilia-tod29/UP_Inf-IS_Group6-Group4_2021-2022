#include <iostream>
using namespace std;
int main()
{
    double x, y;
    bool check = false;
    cin >> x >> y;
    if (x <= 2 && x >= -2 && y <= 2 && y >= -2) {
        check = true;
    }
    if (y <= 0 && x * x + (y + 2) * (y + 2) < 4) {
        check = false;
    }
    cout << (check ? "Yes" : "No");
    return 0;
}