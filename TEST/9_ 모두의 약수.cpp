#include <iostream>
using namespace std;

// 코드 다시 체크하기

int divisorCount[50001];

int main() {
	//freopen("input.txt", "rt", stdin);

	int input;
	cin >> input;

	for (int i = 1; i <= input; i++) {
		for (int j = i; j <= input; j = j + i) {

			divisorCount[j]++;
		}
	}

	for (int i = 1; i <= input; i++) {
		cout << divisorCount[i] << " ";
	}

	return 0;
}