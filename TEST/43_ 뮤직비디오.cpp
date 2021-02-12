#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 코드 다시 체크하기 

int count(int size, int arr[], int n) {
	int cnt = 1, sum = 0;

	for (int i = 1; i <= n; i++) {
		if (sum + arr[i] > size) {
			cnt++; // dvd 개수 늘림 
			sum = arr[i];
		}
		else
			sum = sum + arr[i];
	}
	return cnt;
}

int main() {
	//freopen("input.txt", "rt", stdin);

	int a[1001], n, m, lt = 1, rt = 0, mid, res, maxx = -2147000000;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		rt = rt + a[i];
		if (a[i] > maxx)
			maxx = a[i];
	}

	while (lt <= rt) {
		mid = (lt + rt) / 2;

		if (mid >= maxx && count(mid, a, n) <= m) {
			res = mid;
			rt = mid - 1;
		}
		else
			lt = mid + 1;
	}
	cout << res;


	return 0;
}

