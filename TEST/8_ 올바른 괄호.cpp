#include <iostream>
#include <string>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	string input;
	int number[30];
	int count = 0;

	getline(cin, input);

	//number 배열 모두 0으로 초기화 
	for (int i = 0; i < 30; i++) {
		number[i] = 0;
	}

	// '('으로 시작하고 ')'로 끝나는 문자열만 다룬다. 
	if (input[0] != ')' && input[input.length() - 1] != '(') {

		for (int i = 0; i < input.length(); i++) {
			// '('은 1, ')'은 -1로 설정하여 총 합계가 0이 되면 YES. 0이 아니면 NO 
			if (input[i] == '(') {
				number[i] = 1;
			}
			else if (input[i] == ')') {
				number[i] = -1;
			}
		}

		for (int j = 0; j < 30; j++) {
			count += number[j];
		}

		if (count == 0)
			cout << "YES";
		else
			cout << "NO";
	}
	else {
		cout << "NO";
	}

	return 0;
}