#include <iostream>
#include <vector>

using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n;
	cin >> n;

	int temp; // n의 팩토리얼 값
	int div; // 소인수분해 하기 위해 나눌 값 

	vector<int> prime(n + 1); // 소수의 곱을 나타내는 값(출력값) 

	for (int i = 2; i <= n; i++) {
		div = 2; // 2로 나누기 시작해서 나누어 떨어지면 나누어떨어지지 않을 때까지 반복해서 나눈다. 나누어떨어지지 않으면 1 증가시킨다.
		temp = i;

		while (temp > 1) {
			if (temp % div == 0) {
				prime[div]++;
				temp = temp / div;
			}
			else {
				div++;
			}
		}
	}

	cout << n << "! = ";

	for (int i = 0; i < prime.size(); i++) {
		if (prime[i] != 0)
			cout << prime[i] << " ";
	}

	return 0;
}