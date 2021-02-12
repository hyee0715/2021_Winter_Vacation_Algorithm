#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 코드 다시 체크하기 

int count(int size, int arr[], int n) {
	int cnt = 1, pos = arr[1];

	for (int i = 2; i <= n; i++) {
		if (arr[i] - pos >= size) {
			cnt++;
			pos = arr[i];
		}
	}
	return cnt;
}

int main() {
	freopen("input.txt", "rt", stdin);

	int n, m, lt = 1, rt, mid, res;
	cin >> n >> m;
	int *x = new int[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> x[i];
	}

	sort(x + 1, x + n + 1);
	rt = x[n];
	while (lt <= rt) {
		mid = (lt + rt) / 2;
		if (count(mid, x, n) >= m) {
			res = mid;
			lt = mid + 1;
		}
		else
			rt = mid - 1;
	}

	cout << res;
	delete[] x;

	return 0;
}

