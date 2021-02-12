#include <iostream>
#include <vector>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n;
	cin >> n;
	int sum, start, end;
	bool isMatch; // 합이 n이 되는지 여부 
	int count = 0; // 총 개수 

	for (int i = n - 1; i >= 1; i--) { // n -1부터 1까지 줄어들면서 sum에 더함. 
		sum = 0;
		isMatch = false;

		for (int j = i; j < n; j++) {
			sum += j;

			if (sum == n) {
				start = i;
				end = j;
				isMatch = true;
				break;
			}
		}

		if (isMatch) { // 합이 n이면 출력 
			count++;

			for (int j = start; j <= end; j++) {
				if (j == start) {
					cout << j;
				}
				else {
					cout << " + " << j;
				}
			}
			cout << " = " << n;
			cout << endl;
		}
	}

	cout << count;


	return 0;
}

