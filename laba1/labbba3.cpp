#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	cin >> n;
	if (n <= 2) {
		return 0;
	}
	cout << "2" << " ";
	for (int i = 3; i <= n; i += 2) {
		int flag = 1;
		for (int j = 3; j <= sqrt(i); j += 2) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag == 1) {
			cout << i << " ";

		}
	}
	return 0;
}