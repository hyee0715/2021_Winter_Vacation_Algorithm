#include <iostream>
#include <vector>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int s; // 캐시의 크기 
	cin >> s;

	int n; // 작업의 개수 
	bool isHit; // hit 여부

	cin >> n;

	vector<int> cache(s); // 캐시 메모리 
	vector<int> task(n); // 작업 

	for (int i = 0; i < n; i++) {
		cin >> task[i];
	}

	for (int i = 0; i < n; i++) { // 캐시 Hit 여부 확인 
		isHit = false;

		for (int j = 0; j < s; j++) { // 캐시메모리 
			if (task[i] == cache[j]) { // Cache hit
				int temp = cache[j];
				int tempIndex = j;

				for (int k = j - 1; k >= 0; k--) { // 기존 작업 옮기기
					cache[k + 1] = cache[k];
				}
				cache[0] = task[i]; // 선택된 작업 맨 앞으로 옮기기 

				isHit = true;
				break;
			}
		}

		//Cache miss
		if (!isHit) {
			for (int j = s - 1; j >= 1; j--) {
				cache[j] = cache[j - 1]; // 캐시에 있는 작업들 다 한 칸씩  뒤로 옮기기 
			}
			cache[0] = task[i]; // 맨 앞에 작업 놓기 
		}
	}

	for (int i = 0; i < s; i++) {
		cout << cache[i] << " ";
	}

	return 0;
}