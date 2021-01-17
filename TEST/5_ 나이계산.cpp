#include <iostream>
#include <string>
using namespace std;

int main() {
	string privateNumber;
	getline(cin, privateNumber);

	int realAge, year;

	// 태어난 연도 구하기 (문자는 아스키코드로 인식되므로 -48을 해주어야 한다.) 
	if (privateNumber[0] != '0')
		year = 1900 + ((privateNumber[0] - 48) * 10 + (privateNumber[1] - 48));
	else
		year = 2000 + (privateNumber[0] - 48) * 10 + (privateNumber[1] - 48);

	// 나이 구하기 
	realAge = 2019 - year + 1;

	if (privateNumber[7] == '1' || privateNumber[7] == '3') {
		cout << realAge << " M";
	}
	else if (privateNumber[7] == '2' || privateNumber[7] == '4') {
		cout << realAge << " W";
	}


	return 0;
}