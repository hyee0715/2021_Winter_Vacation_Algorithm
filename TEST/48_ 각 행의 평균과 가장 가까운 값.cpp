#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	vector<vector<int>> arr(9, vector<int>(9));

	int sum = 0;
	int subtraction = 0; // 평균과 가까운 값을 찾을 때 쓰이는 뺄셈 결과 변수 

	vector<int> average(9);
	vector<int> nearest(9);

	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr[i].size(); j++) {
			cin >> arr[i][j];
		}
	}

	// 평균 구하기 
	for (int i = 0; i < arr.size(); i++) {
		sum = 0;

		for (int j = 0; j < arr[i].size(); j++) {
			sum += arr[i][j];
			average[i] = round((double)sum / 9); // round 함수 : 반올림 
		}
	}

	// 평균과 가까운 값 구하기
	for (int i = 0; i < arr.size(); i++) {
		subtraction = abs(average[i] - arr[i][0]); // abs 함수 : 절대값 
		nearest[i] = arr[i][0];

		for (int j = 0; j < arr[i].size(); j++) {
			if (subtraction > abs(average[i] - arr[i][j])) {
				subtraction = abs(average[i] - arr[i][j]);
				nearest[i] = arr[i][j];
			}
			else if (subtraction == abs(average[i] - arr[i][j])) {
				if (nearest[i] < arr[i][j]) {
					nearest[i] = arr[i][j];
				}
			}
		}
	}

	for (int i = 0; i < 9; i++) {
		cout << average[i] << " " << nearest[i];
		cout << endl;
	}



	return 0;
}

