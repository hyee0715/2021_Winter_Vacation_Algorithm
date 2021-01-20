#include <iostream>
#include <string>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int arr[123];
	string input1, input2;

	getline(cin, input1);
	getline(cin, input2);

	for (int i = 0; i < 123; i++) { // 0으로 초기화 
		arr[i] = 0;
	}

	for (int i = 0; i < input1.length(); i++) {
		arr[input1[i]] += 1;
	}

	for (int i = 0; i < input2.length(); i++) {
		arr[input2[i]] += 1;
	}

	for (int i = 0; i < 123; i++) {
		if (arr[i] != 0) {
			if (arr[i] % 2 != 0) { // 짝수가 아니면 아나그램이 아니므로 NO 출력 
				cout << "NO";
				break;
			}
		}

		if (i == 122) // 문자열들을 모두 확인했을 때 같은 경우 YES 출력 
			cout << "YES";
	}

	return 0;
}