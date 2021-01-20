#include <iostream>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n; // 측정 시간
	int m; // 측정치 경보음이 울리는 값
	int measure[100]; //초단위 실시간 측정치 
	int time = 0; // 연속으로 경보음이 울린 시간 
	int maxTime = 0; // 최대 연속으로 경보음이 울린 시간 
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> measure[i];
	}


	for (int i = 0; i < n; i++) {
		if (measure[i] > m) {
			// m보다 큰 측정치가 끊겼다가 나타나면 1초부터 시작 
			if (measure[i - 1] <= m)
				time = 1;
			else
				time++;
		}

		if (time > maxTime) { // 측정치가 최대 측정치보다 크면 갱신 
			maxTime = time;
		}
	}

	cout << maxTime;
	return 0;
}