#include <iostream>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n; // 학생 수
	int heights[100]; // 학생들의 앉은 키 정보
	int angryMakerCount = 0; // 분노유발자 수 

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> heights[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (heights[i] <= heights[j]) {
				break;
			}

			if (j == n - 1) {
				angryMakerCount++;
			}
		}
	}

	cout << angryMakerCount;

	return 0;
}