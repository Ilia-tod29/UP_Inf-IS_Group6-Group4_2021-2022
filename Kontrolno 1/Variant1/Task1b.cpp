#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    cout << "Enter the coordinates of (x, y): ";
    cin >> x >> y;
    bool flag = false;
    const bool isInOneOfTheCircles = ((x + 2) * (x + 2) + y * y <= 4) || ((x - 2) * (x - 2) + y * y <= 4);
    if (isInOneOfTheCircles && x <= 2 && x >= -2) {
        flag= true;
    }
    if (flag)
    {
        cout << "This point belongs to the coloured figure.";
    }
    else {
        cout << "This point does not belong to the coloured figure.";
    }


    return 0;
}