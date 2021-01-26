#include <iostream>
#include <vector>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n;
	int min, minIndex;

	cin >> n;

	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		min = arr[i];

		// 현재 상태에서 가장 작은 값 min을 찾는다. 
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < min) {
				min = arr[j];
				minIndex = j;
			}
		}

		// arr[i] (교환하지 않은 값 중에 가장 앞에 있는 값)과 min의 값을 교환
		if (arr[i] != min) {
			int temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}