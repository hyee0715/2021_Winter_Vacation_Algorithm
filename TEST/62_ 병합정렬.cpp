#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 코드 다시 체크하기 

int data[10], tmp[10];

void divide(int lt, int rt) {
	int mid;
	int p1, p2, p3;
	if (lt < rt) {
		mid = (lt + rt) / 2;
		divide(lt, mid);
		divide(mid + 1, rt);
		p1 = lt;
		p2 = mid + 1;
		p3 = lt;

		while (p1 <= mid && p2 <= rt) {
			if (data[p1] < data[p2])
				tmp[p3++] = data[p1++];
			else
				tmp[p3++] = data[p2++];
		}

		while (p1 <= mid)
			tmp[p3++] = data[p1++];

		while (p2 <= rt)
			tmp[p3++] = data[p2++];

		for (int i = lt; i <= rt; i++) {
			data[i] = tmp[i];
		}
	}
}

int main() {
	freopen("input.txt", "rt", stdin);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> data[i];
	}
	divide(1, n);
	for (int i = 1; i <= n; i++) {
		cout << data[i] << " ";
	}

	return 0;
}