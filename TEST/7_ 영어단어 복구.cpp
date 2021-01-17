#include <iostream>
#include <string>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	string input, word = "";

	getline(cin, input);

	// 공백 제거 
	for (int i = 0; i < input.length(); i++) {
		if (input[i] != ' ')
			word += input[i];
	}

	// 대문자를 소문자로 변경 
	for (int i = 0; i < word.length(); i++) {
		if (word[i] >= 'A' && word[i] <= 'Z')
			word[i] = word[i] + 32;
	}

	cout << word;

	return 0;
}