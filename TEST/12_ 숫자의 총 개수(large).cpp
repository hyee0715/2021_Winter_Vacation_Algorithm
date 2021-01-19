#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int inputNum; // 입력 값 
	int count = 0; // 입력 값의 자릿수 
	int inputSum = 0; // 숫자의 총 개수 (출력 값) 

	cin >> inputNum;
	int num = inputNum;

	// 입력 값의 자릿수 구하기 
	while (num > 0) {
		num = static_cast<double>(num) / 10;
		count++;
	}

	// 자릿수만큼 반복문을 돌면서 숫자의 총 개수를 구한다. 
	for (int i = 1; i <= count; i++) {
		if (i < count) {
			inputSum += i * 9 * pow(10, (i - 1));
		}
		else if (i == count) {
			inputSum += i * ((inputNum - pow(10, (i - 1))) + 1);
		}
	}

	cout << inputSum;

	return 0;
}