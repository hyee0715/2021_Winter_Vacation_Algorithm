#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n;
	cin >> n;

	int peaks = 0;
	vector<vector<int>> arr(n + 2, vector<int>(n + 2));

	for (int i = 1; i < arr.size() - 1; i++) {
		for (int j = 1; j < arr[i].size() - 1; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 1; i < arr.size() - 1; i++) {
		for (int j = 1; j < arr[i].size() - 1; j++) {
			if (arr[i][j] > arr[i - 1][j] && arr[i][j] > arr[i][j - 1] && arr[i][j] > arr[i + 1][j] && arr[i][j] > arr[i][j + 1]) {
				peaks++;
			}
		}
	}

	cout << peaks;

	return 0;
}

