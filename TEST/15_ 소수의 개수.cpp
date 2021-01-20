#include <iostream>
using namespace std;

// 코드 다시 체크하기

int main() {
	//freopen("input.txt", "rt", stdin);

	int n;
	cin >> n;

	int primeCount = 0;  // 소수 개수 
	bool flag; // 소수인지의 여부 

	for (int i = 2; i <= n; i++) {
		flag = true;
		for (int j = 2; j * j <= i; j++) { // i의 제곱근까지만 반복 
			if (i % j == 0) {
				flag = false;
				break; // 소수 아님
			}
		}
		if (flag == true)
			primeCount++;
	}

	cout << primeCount;
	return 0;
}