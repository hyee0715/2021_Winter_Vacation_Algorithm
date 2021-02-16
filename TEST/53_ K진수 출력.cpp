#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

// 코드 다시 체크하기 

/* 스택 직접 구현

vector<int> stack(100); int top = -1;

void push(int x) {
	stack[++top] = x;
}

int pop() {
	return stack[top--];
}
*/

int main() {
	freopen("input.txt", "rt", stdin);

	int n, k;
	stack<int> s;
	char str[20] = "0123456789ABCDEF";

	cin >> n >> k;

	while (n > 0) {
		s.push(n % k);
		// push(n % k); //스택 직접 구현 시 사용		
		n = n / k;
	}

	//	while (top != -1) { //스택 직접 구현 시 사용 
	//		cout << str[pop()];
	//	}

	while (!s.empty()) { // empty()는 스택이 비어있으면 참을 리턴, 비어있지 않으면 거짓을 리턴한다. 
		cout << str[s.top()]; // top 자리 값 리턴 
		s.pop(); // 값 빼내기 
	}

	return 0;
}

