#include <iostream>
using namespace std;

// 코드 다시 체크하기 

void recursive(int n) {
	if (n > 7) {
		return;
	}
	else {
		// 전위순회 출력 : 1 2 4 5 3 6 7 
		cout << n << " ";
		recursive(n * 2);
		recursive(n * 2 + 1);

		// 중위순회 출력 : 4 2 5 1 6 3 7
//		recursive(n * 2);
//		cout << n << " ";
//		recursive(n * 2 + 1);

		// 후위순회 출력 : 4 5 2 6 7 3 1
//		recursive(n * 2);
//		recursive(n * 2 + 1);
//		cout << n << " ";
	}
}

int main() {
	//	freopen("input.txt", "rt", stdin);

	recursive(1);

	return 0;
}
