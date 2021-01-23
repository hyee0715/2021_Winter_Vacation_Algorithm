#include <iostream>
#include <vector>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int n; // 온도를 측정한 전체 날짜의 수 
	int k; // 합을 구하기 위한 연속적인 날짜의 수
	int sum = 0;
	int max = 0;
	cin >> n >> k;

	vector<int> temperature(n);

	for (int i = 0; i < n; i++) {
		cin >> temperature[i];
	}

	//초반 k개의 값을 sum에 넣어준다.
	for (int i = 0; i < k; i++) {
		sum += temperature[i];
	}

	max = sum;

	// i가 1씩 증가하면서 가장 앞에 있던 값은 빼주고, i자리의 값을 더해준다.
	for (int i = k; i < n; i++) {
		sum = sum + temperature[i] - temperature[i - k];

		if (max < sum) {
			max = sum;
		}
	}

	cout << max;

	return 0;
}