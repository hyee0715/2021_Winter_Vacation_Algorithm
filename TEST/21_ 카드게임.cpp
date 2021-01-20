#include <iostream>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int a[10];
	int b[10];
	char winner[11];
	int aScore = 0, bScore = 0;

	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < 10; i++) {
		cin >> b[i];
	}

	// 각 라운드 승자 찾기
	for (int i = 0; i < 10; i++) {
		if (a[i] > b[i]) {
			winner[i] = 'A';
			aScore += 3;
		}
		else if (b[i] > a[i]) {
			winner[i] = 'B';
			bScore += 3;
		}
		else if (a[i] == b[i]) {
			winner[i] = 'D';
			aScore += 1;
			bScore += 1;
		}
	}

	cout << aScore << " " << bScore << endl;

	// 최종 승자 찾아서 출력 
	if (aScore > bScore) {
		cout << 'A';
	}
	else if (aScore < bScore) {
		cout << 'B';
	}
	else if (aScore == bScore) {
		for (int i = 9; i >= 0; i--) {
			if (winner[i] != 'D') { // 승점이 같은 경우에는 제일 마지막에 이긴 사람을 게임의 승자로 정함. 
				cout << winner[i];
				break;
			}

			if (i == 0) { // 모든 라운드에서 비기는 경우는 'D' 
				cout << 'D';
			}
		}
	}

	return 0;
}