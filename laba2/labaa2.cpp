#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
	vector<int> numbers;
	int summa = 0, count5 = 0, k, cnt, n, stepen2 = 0, dlina = 0, n2, n3, n1;
	k = 0;
	cnt = 0;
	while (true) {
		cin >> n;
		if (n == 0) {
			break;
		}
		summa += n;
		dlina++;
		if (!(n & (n - 1))) {
			stepen2 += 1;
		}
		if (n > 0 && n % 5 == 0) {
			count5 += 1;
		}
		numbers.push_back(n);
	}
	if (size(numbers) > 2){
		while (k != size(numbers) - 2) {
			if (numbers[k + 2] > numbers[k + 1] + numbers[k]) {
				cnt += 1;
			}
			k += 1;
		}
	}
	if (dlina % 2 == 0) {
		n2 = n;
	}
	else if (dlina % 3 == 0) {
		n3 = n;
	}
	else {
		n1 = n;
	}
	if (dlina > 2) {
		if (n1 == n && n1 > n2 + n3) {
			cnt += 1;
		}
	}
	cout << "average " << summa / dlina << endl;
	cout << "deltamaxmin " << max_element(numbers.begin(), numbers.end()) - min_element(numbers.begin(), numbers.end()) << endl;
	cout <<  ">0 and %5" << count5 << endl;
	cout << "stepen2 " << stepen2 << endl;
	cout << "more than sum of 2 previous " << cnt;
	return 0;
}