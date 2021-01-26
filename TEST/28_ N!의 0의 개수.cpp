#include <iostream>
#include <vector>

using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n; // 자연수 n 입력
	cin >> n;

	int temp; // n 복사값 
	int div; // 소인수분해 하기 위해 나누는 소수 
	int count2 = 0, count5 = 0;

	for (int i = 2; i <= n; i++) {
		temp = i;
		div = 2;

		// 2*5가 있으면 10의 배수이므로 2*5의 수를 세면 된다. 
		while (temp > 1) {
			if (temp % div == 0) {
				if (div == 2) {
					count2++;
				}
				else if (div == 5) {
					count5++;
				}

				temp = temp / div;
			}
			else {
				div++;
			}
		}
	}

	if (count2 > count5)
		cout << count5;
	else
		cout << count2;

	return 0;
}