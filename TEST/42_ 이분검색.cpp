#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 코드 다시 체크하기 

int main() {
	//freopen("input.txt", "rt", stdin);

	int n, m, tmp, lt = 0, rt, mid;
	cin >> n >> m;

	vector<int> arr;

	for (int i = 0; i < n; i++) {
		cin >> tmp;
		arr.push_back(tmp);
	}
	sort(arr.begin(), arr.end());

	rt = n - 1;
	while (lt <= rt) {
		mid = (lt + rt) / 2;

		if (arr[mid] == m) {
			cout << mid + 1;
			return 0;
		}
		else if (arr[mid] > m)
			rt = mid - 1;
		else
			lt = mid + 1;

	}


	return 0;
}

