#include <iostream>

using namespace std;

int digit_sum(int x) {
	int sum = 0;

	while (x > 0) {
		sum += x % 10;
		x = static_cast<double>(x) / 10;
	}

	return sum;
}

int main() {
	//freopen("input.txt", "rt", stdin);

	int sum[100], inputNum[100]; // 합계와 입력숫자 배열 
	int inputCount; // 입력한 숫자 개수 
	int max, maxIndex;

	cin >> inputCount;

	for (int i = 0; i < inputCount; i++) {
		cin >> inputNum[i];
		sum[i] = digit_sum(inputNum[i]);
	}

	for (int i = 0; i < inputCount; i++) {
		if (i == 0) {
			max = sum[0];
			maxIndex = i;
		}

		if (max < sum[i]) {
			max = sum[i];
			maxIndex = i;
		}
		else if (max == sum[i]) {
			if (inputNum[maxIndex] <= inputNum[i]) {
				max = sum[i];
				maxIndex = i;
			}
		}
	}

	cout << inputNum[maxIndex];

	return 0;
}