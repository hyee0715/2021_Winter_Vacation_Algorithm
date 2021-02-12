#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 코드 다시 체크하기 

int main() {
	//freopen("input.txt", "rt", stdin);

	int n, m; // 각 배열의 크기
	int p1 = 0, p2 = 0, p3 = 0; // 각 배열의 포인터 

	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end()); // quick sort로 오름차순 정렬

	cin >> m;
	vector<int> b(m);
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	sort(b.begin(), b.end());

	vector<int> c(n + m); // 결과 배열 

	// p1이 n보다 작고, p2가 m보다 작으면 배열 비교 
	while (p1 < n && p2 < m) {
		if (a[p1] == b[p2]) { // 교집합일때는 두 배열 모두 증가 
			c[p3++] = a[p1++];
			p2++;
		}
		else if (a[p1] < b[p2])
			p1++;
		else
			p2++;
	}

	for (int i = 0; i < p3; i++) {
		cout << c[i] << " ";
	}

	return 0;
}

