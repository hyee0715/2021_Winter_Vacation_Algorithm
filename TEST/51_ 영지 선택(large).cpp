#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	freopen("input.txt", "rt", stdin);

	int h, w; // h : 세로길이, w : 가로길이 
	cin >> h >> w;
	vector<vector<int> > land(h, vector<int>(w));
	vector<vector<int> > sum(h, vector<int>(w)); // 각 자리까지의 합을 넣은 배열 

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> land[i][j];
		}
	}

	int territory_h, territory_w;
	cin >> territory_h >> territory_w;

	// 0행줄, 0열줄의 합계를 구함. 
	for (int i = 0; i < w; i++) {
		for (int j = i; j < w; j++) {
			sum[0][j] += land[0][i];
		}
	}

	sum[0][0] = 0;

	for (int i = 0; i < h; i++) {
		for (int j = i; j < h; j++) {
			sum[j][0] += land[i][0];
		}
	}

	// 나머지 sum 구하기 
	for (int i = 1; i < h; i++) {
		for (int j = 1; j < w; j++) {
			sum[i][j] = sum[i][j - 1] + sum[i - 1][j] - sum[i - 1][j - 1] + land[i][j];
		}
	}

	int max = 0;
	int territory; // 영지의 값 
	// 최대값 구하기
	for (int i = territory_h; i < h; i++) {
		for (int j = territory_w; j < w; j++) {
			territory = sum[i][j] - sum[i - territory_h][j] - sum[i][j - territory_w] + sum[i - territory_h][j - territory_w];

			if (max < territory) {
				max = territory;
			}
		}
	}

	cout << max;

	return 0;
}

