#include <iostream>
#include <string>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	string inputNum;
	int numCount[10]; // 0-9 숫자의 빈도를 나타내는 배열 
	int max = 0, maxIndex;

	getline(cin, inputNum);

	// numCount 배열 초기화 
	for (int i = 0; i < 10; i++) {
		numCount[i] = 0;
	}

	// inputNum 입력 값에 해당하는 인덱스의 수를 1씩 증가시킴 
	for (int i = 0; i < inputNum.length(); i++) {
		numCount[inputNum[i] - 48]++;
	}

	// 가장 많이 사용된 숫자와 인덱스 찾기. 
	for (int i = 0; i < 10; i++) {
		if (i == 0) {
			max = numCount[i];
			maxIndex = i;
		}

		if (max < numCount[i]) {
			max = numCount[i];
			maxIndex = i;
		}
		else if (max == numCount[i]) {
			// 값이 여러 개인 경우 (뒤에 나오는 값이거나) 가장 큰 수를 출력한다. 
			if (maxIndex <= i) {
				maxIndex = i;
			}
		}
	}

	cout << maxIndex;

	return 0;
}