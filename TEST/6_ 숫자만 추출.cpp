#include <iostream>
#include <string>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	string arr, numberExtraction = "";
	cin >> arr;

	for (int i = 0; i < arr.length(); i++) {
		if (arr[i] >= '0' && arr[i] <= '9') {
			numberExtraction += arr[i];
		}
	}

	int naturalNumber = 0;

	// 문자열로 된 숫자를 정수로 변환 
	naturalNumber = stoi(numberExtraction);
	cout << naturalNumber << endl;

	int divisorCount = 0;

	for (int i = 1; i <= naturalNumber; i++) {
		if (naturalNumber % i == 0)
			divisorCount++;
	}

	cout << divisorCount;

	return 0;
}