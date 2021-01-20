#include <iostream>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n; // 게임 횟수
	int a[100]; // A가 낸 가위바위보 정보 
	int b[100]; // B가 낸 가위바위보 정보 
	char whoIsWin[100]; // 승자

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	for (int i = 0; i < n; i++) {
		if (a[i] == b[i]) { // 비겼을 경우 
			whoIsWin[i] = 'D';
		}
		else if ((a[i] == 1 && b[i] == 3) || (a[i] == 2 && b[i] == 1) || (a[i] == 3 && b[i] == 2)) { // a가 이기는 경우
			whoIsWin[i] = 'A';
		}
		else if ((b[i] == 1 && a[i] == 3) || (b[i] == 2 && a[i] == 1) || (b[i] == 3 && a[i] == 2)) { // b가 이기는 경우
			whoIsWin[i] = 'B';
		}
	}

	for (int i = 0; i < n; i++) {
		cout << whoIsWin[i] << endl;
	}

	return 0;
}