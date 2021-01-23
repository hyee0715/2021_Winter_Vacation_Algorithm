#include <iostream>
#include <vector>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int n; // 학생의 수
	cin >> n;

	vector<int> mathScore(n); // 갹 학생들의 수학 점수 
	vector<int> rank(n, 1); // 등수
	int score;

	for (int i = 0; i < n; i++) {
		cin >> mathScore[i];
	}

	// 각각 비교하여 점수가 더 작으면 해당 인덱스의 rank 값을 1 추가한다. 
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (mathScore[i] > mathScore[j]) {
				rank[j]++;
			}
			else if (mathScore[i] < mathScore[j]) {
				rank[i]++;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << rank[i];
	}

	return 0;
}