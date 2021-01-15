#include <iostream>
using namespace std;

int main() {
	// 배열을 101개로 잡고 (1살부터 시작) 나이 자체를 배열로 잡음.
	// 배열을 0으로 초기화한다. 
	int count, age, lowestAge, highestAge;
	int arr[101];

	for (int i = 0; i < 101; i++) {
		arr[i] = 0;
	}

	// 입력받은 나이의 인덱스에 나이를 넣는다. 
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> age;
		arr[age] = age;
	}

	// 가장 어린 나이 구하기. 0이 아닌 수 중에 가장 앞에 있는 숫자가 가장 어림. 
	for (int i = 0; i < 101; i++) {
		if (arr[i] != 0) {
			lowestAge = arr[i];
			break;
		}
	}

	// 가장 많은 나이 구하기. 0이 아닌 수 중에 가장 뒤에 있는 숫자가 가장 나이 많음. 
	for (int i = 100; i >= 0; i--) {
		if (arr[i] != 0) {
			highestAge = arr[i];
			break;
		}
	}

	// 나이차이 구하기 
	cout << highestAge - lowestAge;

	return 0;
}