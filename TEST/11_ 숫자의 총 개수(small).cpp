#include <iostream>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int inputNum, num;
	int count = 0;

	cin >> inputNum;
	num = inputNum;

	for (int i = 1; i <= inputNum; i++) {
		num = i;
		while (num > 0) {
			num = static_cast<double>(num) / 10;
			count++;
		}
	}

	cout << count;

	return 0;
}