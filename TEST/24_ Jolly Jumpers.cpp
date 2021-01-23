#include <iostream>
#include <vector>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n; // 정수의 개수

	cin >> n;

	vector<int> jollyJumpers(n); // 입력 받은 수열 
	vector<int> subtraction(n - 1); // 앞뒤 숫자의 차
	vector<int> check(n - 1); // 1에서 n-1까지의 값 배열 
	bool isEqual = false;

	for (int i = 0; i < n; i++) {
		cin >> jollyJumpers[i];
	}

	// 숫자의 차를 구한다. 
	for (int i = 1; i < n; i++) {
		subtraction[i - 1] = abs(jollyJumpers[i] - jollyJumpers[i - 1]);

	}

	// 1에서 n-1까지의 값을 가진 배열 생성 
	for (int i = 1; i <= n - 1; i++) {
		check[i - 1] = i;
	}

	// 정답과 일치하는지 체크
	for (int i = 0; i < n - 1; i++) {
		isEqual = false;

		for (int j = 0; j < n - 1; j++) {
			if (check[i] == subtraction[j]) {
				isEqual = true;
				break;
			}
		}

		if (!isEqual) {
			cout << "NO";
			break;
		}

	}

	if (isEqual)
		cout << "YES";

	return 0;
}