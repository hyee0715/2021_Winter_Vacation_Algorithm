#include <iostream>
#include <vector>

using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n; // 자연수의 개수
	cin >> n;

	int temp;
	int threeCount = 0;

	for (int i = 1; i <= n; i++) {
		temp = i;

		while (temp > 0) {
			if (temp % 10 == 3) {
				threeCount++;
			}
			temp = temp / 10;
		}
	}

	cout << threeCount;

	return 0;
}