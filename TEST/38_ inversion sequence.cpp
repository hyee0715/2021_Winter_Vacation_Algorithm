#include <iostream>
#include <vector>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n;
	cin >> n;

	vector<int> inversionSequence(n + 1);
	vector<int> arr(n + 1); // 원래의 배열

	int count, plus;

	for (int i = 1; i <= n; i++) {
		cin >> inversionSequence[i];
	}

	for (int i = 1; i <= n; i++) { // inversionSequence
		count = 1;
		plus = 0;

		if (inversionSequence[i] == 0) { // inversionSequence[i]가 0이면 arr배열의 가장 앞에 있는 0 자리에 들어감 
			for (int j = 1; j <= n; j++) { // arr
				if (arr[j] == 0) {
					arr[j] = i;
					break;
				}
			}
		}
		else {
			for (int j = 1; j <= n; j++) { // arr
				if (arr[j] == 0) { // arr 배열의 자리가 0으로 비어있으면 count 증가. 
					count++;

					if (count == inversionSequence[i] + 1) // 원래의 수는 inversionSequence[i] + 1 자리에 들어간다. 따라서 count가 값이 같아지면 break 
						break;
				}
				else if (arr[j] != 0) {
					plus++;
				}
			}

			if (arr[count + plus] == 0)
				arr[count + plus] = i;
			else {
				while (arr[count + plus] != 0) // arr 배열에 이미 값이 있으면 그 다음 자리에 값을 넣어야 하므로 0이 나올때까지 count를 1 증가시킴. 
					count++;

				arr[count + plus] = i;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}