#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 코드 다시 체크하기 

int n, ch[11];

void dfs(int x) {
	if (x == n + 1) {
		for (int i = 1; i <= n; i++) {
			if (ch[i] == 1)
				cout << i << " ";
		}
		cout << endl;
	}
	else {
		ch[x] = 1;
		dfs(x + 1);
		ch[x] = 0;
		dfs(x + 1);
	}
}

int main() {
	freopen("input.txt", "rt", stdin);

	cin >> n;

	dfs(1);

	return 0;
}