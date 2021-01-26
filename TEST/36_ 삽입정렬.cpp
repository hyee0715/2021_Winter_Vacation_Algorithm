#include <iostream>
#include <vector>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n;
	cin >> n;

	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int key, keyIndex;

	for (int i = 1; i < n; i++) {
		key = arr[i];
		keyIndex = i;

		for (int j = i - 1; j >= 0; j--) {
			if (key < arr[j]) {
				int temp = arr[j];
				arr[j] = arr[keyIndex];
				arr[keyIndex] = temp;

				keyIndex = j;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}