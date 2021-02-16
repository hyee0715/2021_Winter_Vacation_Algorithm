#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n; // 블록의 크기
	cin >> n;
	vector<vector<int>> block(n, vector<int>(n));
	int blockCount = 0; // 블록의 총 개수 

	vector<int> front(n);
	for (int i = 0; i < n; i++) {
		cin >> front[i];
	}

	vector<int> right(n);
	for (int i = 0; i < n; i++) {
		cin >> right[i];
	}

	// 정면의 값을 해당하는 모든 열에 넣는다. 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			block[j][i] = front[i];
		}
	}

	// 오른쪽 측면의 값보다 블럭 배열의 값이 더 크면 오른쪽 측면 값으로 교체 
	for (int i = n - 1; i >= 0; i--) {
		for (int j = 0; j < n; j++) {
			if (block[i][j] > right[(n - 1) - i]) { // n이 4라면 i는 3,2,1,0 순으로 줄어들고,
				block[i][j] = right[(n - 1) - i]; // right의 인덱스는 0,1,2,3 순으로 늘어나야 한다. 
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			blockCount += block[i][j];
		}
	}

	cout << blockCount;

	return 0;
}

