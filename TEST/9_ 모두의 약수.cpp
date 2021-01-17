#include <iostream>
using namespace std;

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