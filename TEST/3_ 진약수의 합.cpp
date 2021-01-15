#include <iostream>
using namespace std;

int main() {
	int n, sum = 0;

	cin >> n;

	for (int i = 1; i <= n - 1; i++) {
		if (n % i == 0) {
			sum += i;
			if (i < n / 2) // 진약수는 n/2 이상은 나오지 않음. 마지막 약수 구분하기. 
				cout << i << " + ";
			else
				cout << i << " = ";
		}

	}

	cout << sum;

	return 0;
}