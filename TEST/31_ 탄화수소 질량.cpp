#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);

	int c, h; // 탄소와 수소 개수 
	string strC = "";
	string strH = "";
	string hydrocarbon; // 화합물 
	int indexH = 0; // 'H'의 인덱스 위치 

	getline(cin, hydrocarbon);

	if (hydrocarbon[1] == 'H') {
		strC = '1';
		indexH = 0;
	}
	else {
		for (int i = 1; hydrocarbon[i] != 'H'; i++) {
			strC += hydrocarbon[i];
			indexH++; // 'H' 인덱스 위치 - 1 
		}
	}

	c = stoi(strC);
	indexH += 2; // 'H' 인덱스 위치 + 1 

	if (hydrocarbon[hydrocarbon.length() - 1] == 'H') {
		strH = '1';
	}
	else {
		for (int i = indexH; i < hydrocarbon.length(); i++) {
			strH += hydrocarbon[i];
		}
	}

	h = stoi(strH);
	cout << 12 * c + 1 * h;

	return 0;
}