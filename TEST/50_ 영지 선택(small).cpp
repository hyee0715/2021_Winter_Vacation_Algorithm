#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int h, w; // h : 세로길이, w : 가로길이 
	cin >> h >> w;
	vector<vector<int> > land(h, vector<int>(w));

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> land[i][j];
		}
	}

	int territory_h, territory_w, max_sum = 0, temp_sum = 0;
	cin >> territory_h >> territory_w;

	// max_sum 초기값 구하기
	for (int i = 0; i < territory_h; i++) {
		for (int j = 0; j < territory_w; j++) {
			max_sum += land[i][j];
		}
	}

	for (int i = 0; i < h - (territory_h - 1); i++) {
		for (int j = 0; j < w - (territory_w - 1); j++) {
			temp_sum = 0;

			// 4중 for 문을 이용해 sum 비교 
			for (int a = i; a < i + territory_h; a++) {
				for (int b = j; b < j + territory_w; b++) {
					temp_sum += land[a][b];
				}
			}

			if (max_sum < temp_sum) {
				max_sum = temp_sum;
			}
		}
	}

	cout << max_sum;

	return 0;
}

