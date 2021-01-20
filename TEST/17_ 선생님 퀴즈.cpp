#include <iostream>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n; // 학생들의 수
	int cardNum[10]; // 카드에 적힌 수 
	int studentAnswer[10]; // 학생이 구한 정답 
	int correctAnswer[10]; // 정답 

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> cardNum[i] >> studentAnswer[i];
	}

	for (int i = 0; i < n; i++) { // 정답 배열 0으로 초기화 
		correctAnswer[i] = 0;
	}

	for (int i = 0; i < n; i++) { // 정답 구하기 
		for (int j = 1; j <= cardNum[i]; j++) {
			correctAnswer[i] += j;
		}
	}


	for (int i = 0; i < n; i++) {
		if (correctAnswer[i] == studentAnswer[i]) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}


	return 0;
}