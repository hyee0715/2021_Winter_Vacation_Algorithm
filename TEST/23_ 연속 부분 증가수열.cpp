#include <iostream>
#include <vector>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n; // 자연수의 개수
	int count = 1; // 증가수열의 길이
	int max = 0; // 최대 길이
	cin >> n;

	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// 뒤의 수가 앞의 수 보다 크거나 같으면 count 값 1 증가 
	for (int i = 1; i < n; i++) {
		if (arr[i] >= arr[i - 1]) {
			count++;
		}
		// 뒤의 수가 앞의 수 보다 작으면 count 1로 초기화 
		else {
			count = 1;
		}

		if (count > max) {
			max = count;
		}
	}

	cout << max;

	return 0;
}