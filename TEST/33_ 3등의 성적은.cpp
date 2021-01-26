#include <iostream>
#include <vector>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n;
	int min, minIndex, rankCount, rank;

	cin >> n;

	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// 선택정렬 
	for (int i = 0; i < n; i++) {
		min = arr[i];

		for (int j = i + 1; j < n; j++) {
			if (arr[j] < min) {
				min = arr[j];
				minIndex = j;
			}
		}

		if (min != arr[i]) {
			int temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;
		}
	}

	// 맨 뒤에서부터 1등으로 하여 작은 수가 나올때마다 rankCount를 +1 하여 3등을 찾는다. 
	rank = arr[n - 1];
	rankCount = 1;

	for (int i = n - 2; i >= 0; i--) {
		if (rank > arr[i]) {
			rank = arr[i];
			rankCount++;
		}

		if (rankCount == 3) {
			break;
		}
	}

	cout << rank;

	return 0;
}