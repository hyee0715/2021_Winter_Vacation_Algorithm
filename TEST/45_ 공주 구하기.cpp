#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	//	freopen("input.txt", "rt", stdin);

	int n, k;
	cin >> n >> k;
	vector<int> arr(n + 1, 1);

	int count = 0;
	int princeNumber = n; // 왕자의 수 
	int finalPrince; // 공주를 구할 왕자 

	// 왕자의 수가 1이 될 때까지 반복하여 구한다. 
	while (princeNumber > 1) {
		for (int i = 1; i <= n; i++) {
			if (arr[i] == 1) {
				count++;

				// 값이 1인 배열에서 count 값을 증가시켜 k값과 같으면 해당 칸의 값을 0으로 만든다. 
				if (count == k) {
					arr[i] = 0;
					count = 0;
					princeNumber--;
				}

				// 왕자의 수가 1이 되면 반복을 끝낸다.				
				if (princeNumber == 1) {
					break;
				}
			}
		}
	}

	// 마지막 남은 왕자 찾기
	for (int i = 1; i <= n; i++) {
		if (arr[i] == 1) {
			finalPrince = i;
		}
	}

	cout << finalPrince;

	return 0;
}

