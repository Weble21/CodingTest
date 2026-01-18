#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

int resultRow = 1;
int resultCol = 1;

void checkRow(int n, vector<vector<char>> v) {
	for (int len = n; len >= 1; len--) {
		if (resultRow >= len) {
			break;
		}
		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++) {
				
				bool flag = true;
				if ((100 - j) >= len) {
					for (int k = 0; k < (len / 2); k++) {
						if (v[i][j + k] != v[i][j + len - k - 1]) {
							flag = false;
							break;
						}

					}
					if (flag) {
						resultRow = len;
						return;
					}
				}

			}

		}
	}
	
}

void checkCol(int n, vector<vector<char>> v) {
	for (int len = n; len >= 1; len--) {
		if (resultRow >= len) {
			break;
		}
		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++) {

				bool flag = true;
				if ((100 - j) >= len) {
					for (int k = 0; k < (len / 2); k++) {
						if (v[j + k][i] != v[j + len - k - 1][i]) {
							flag = false;
							break;
						}

					}
					if (flag) {
						resultCol = len;
						return;
					}
				}
			}

		}
	}

}

int comp(int a, int b) {
	if (a >= b) {
		return a;
	}
	else {
		return b;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	for (int k = 0; k < 10; k++) {
		resultCol = 1;
		resultRow = 1;
		int t;
		cin >> t;
		//100x100 배열 생성
		vector<vector<char>> v(100, vector<char>(100, 'z'));
		for (int i = 0; i < 100; i++) {
			string str;
			cin >> str;
			for (int j = 0; j < 100; j++) {
				v[i][j] = str[j];
			}
		}
		checkRow(100, v);
		checkCol(100, v);
		
		int result = comp(resultCol, resultRow);
		cout << "#" << t << " " << result << "\n";
		
	}
}