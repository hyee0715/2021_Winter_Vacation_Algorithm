#include <iostream>
#include <vector>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n; // 선수의 수
	int lowerRankCount; // 현재 앞등수이지만 더 낮은 점수를 가진 사람 수 

	cin >> n;

	vector<int> ability(n + 1); // 선수들의 평소실력 (인덱스 1부터 시작) (인덱스로 등수를 나타내기 때문에 1부터 시작했음) 
	vector<int> possibleRank(n + 1); // 최선의 등수

	for (int i = 1; i <= n; i++) {
		cin >> ability[i];
	}

	possibleRank[1] = 1; // 1등은 앞에 아무도 없기 때문에 1에서 변하지 않으므로 임의로 1을 넣음. 

	for (int i = 2; i <= n; i++) { // 2등부터 계산 시작한다. 
		lowerRankCount = 0;

		for (int j = i - 1; j >= 1; j--) { // 앞에 있는 수와 계산한다. 
			if (ability[i] > ability[j]) {
				lowerRankCount++;
			}
		}

		possibleRank[i] = i - lowerRankCount; // 최선의 등수 = 원래 등수 - 현재 앞등수이지만 더 낮은 점수를 가진 사람 수 
	}

	for (int i = 1; i <= n; i++) {
		cout << possibleRank[i] << " ";
	}



	return 0;
}