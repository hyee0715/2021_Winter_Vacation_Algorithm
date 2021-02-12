#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n, k;
	cin >> n;
	vector<int> arr(n + 1);
	int arrSum = 0;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		arrSum += arr[i];
	}

	cin >> k;
	int blackoutTime = k; // 정전발생시간 
	int restartTaskNumber; // 다시 시작해야하는 작업번호 (결과 값) 
	bool endFlag = false;

	if (k >= arrSum) { // 결과 1: 정전발생시간 >= 배열의 합이면 처리할 작업이 없으므로 -1 출력. 
		restartTaskNumber = -1;
	}
	else if (k < arrSum) { // 결과 2: 정전발생시간 < 배열의 합이면 정전시간만큼 -1 해주며 계산한다. 
		while (1) {
			for (int i = 1; i <= n; i++) {
				if (arr[i] != 0) {
					if (blackoutTime == 0) {
						restartTaskNumber = i;
						endFlag = true;
						break;
					}
					else {
						arr[i] = arr[i] - 1;
						blackoutTime--;
					}
				}
			}

			if (endFlag) {
				break;
			}
		}
	}

	cout << restartTaskNumber;


	return 0;
}

