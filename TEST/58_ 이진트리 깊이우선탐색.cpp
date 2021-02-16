#include <iostream>
using namespace std;

// 코드 다시 체크하기 

void recursive(int n) {
	if (n > 7) {
		return;
	}
	else {
		cout << n << " ";
		recursive(n * 2);
		recursive(n * 2 + 1);
	}
}

int main() {
	//	freopen("input.txt", "rt", stdin);

	recursive(1);

	return 0;
}