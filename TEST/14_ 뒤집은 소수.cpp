#include <iostream>
using namespace std;

int reverse(int x) {
	int rev = 0;

	while (x > 0) {
		rev = rev * 10 + (x % 10);
		x = x / 10;
	}

	return rev;
}

bool isPrime(int x) {
	if (x == 1) // 1이면 false 리턴 
		return false;

	// 2부터 x까지 나누어 떨어지는 수가 있다면 소수가 아니므로 false 리턴 	
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			return false;
		}
	}

	return true;
}

int main() {
	//freopen("input.txt", "rt", stdin);

	int n; // 자연수의 개수
	int input[100]; // 입력한 자연수
	int reverseArr[100]; // 뒤집은 자연수 

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input[i];
		reverseArr[i] = reverse(input[i]);
	}

	for (int i = 0; i < n; i++) {
		if (isPrime(reverseArr[i])) {
			cout << reverseArr[i] << " ";
		}
	}

	return 0;
}