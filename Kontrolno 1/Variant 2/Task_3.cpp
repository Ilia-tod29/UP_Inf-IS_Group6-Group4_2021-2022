#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n > 2 && n < 26) {
		for (int i = 0; i < 6 + 2 * n; i++) {
			if (i < 5 || i > n * 2) {
				cout << "*";
			}
			else cout << " ";
		}
		cout << endl;
		for (int j = 0; j < n - 2; j++) {
			for (int j1 = 0; j1 < 6 + 2 * n; j1++) {
				if (j1 == j + 1 || j1 == j + 5 ||
					j1 == 4 + 2 * n - j || j1 == 2 * n - j) {
					cout << "*";
				}
				else cout << " ";
			}
			cout << endl;
		}
		for (int k = 0; k < 6 + 2 * n; k++) {
			if (k > n - 2 && k < n + 7) {
				cout << "*";
			}
			else cout << " ";
		}
	}
	else cout << "Wrong number";
	return 0;
}
