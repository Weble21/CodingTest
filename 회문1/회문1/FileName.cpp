#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

int result = 0;
void checkRow(int n, vector<vector<char>> v) {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j <= (8-n); j++) {
			
			stack<char> s;
			for (int k = j; k < ((n+1) / 2) + j; k++) {
				s.push(v[i][k]);
			}
			if (n % 2 != 0) {
				s.pop();
			}
			for (int k = ((n + 1) / 2) + j; k < n+j; k++) {
				if (s.top() != v[i][k]) {
					break;
				}
				else {
					s.pop();
				}
			}
			if (s.empty()) {
				result++;
			}
		}
	}
}

void checkCol(int n, vector<vector<char>> v) {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j <= (8 - n); j++) {

			stack<char> s;
			for (int k = j; k < ((n + 1) / 2) + j; k++) {
				s.push(v[k][i]);
			}
			if (n % 2 != 0) {
				s.pop();
			}
			for (int k = ((n + 1) / 2) + j; k < n + j; k++) {
				if (s.top() != v[k][i]) {
					break;
				}
				else {
					s.pop();
				}
			}
			if (s.empty()) {
				result++;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	for (int k = 0; k < 10; k++) {
		int n;
		cin >> n;
		result = 0;
		vector<vector<char>> v(8,vector<char>(8, 'z'));
		//배열 입력
		for (int i = 0; i < 8; i++) {
			string str;
			cin >> str;
			for (int j = 0; j < 8; j++) {
				v[i][j] = str[j];
			}
		}
		//회문찾기
		checkRow(n, v);
		checkCol(n, v);

		cout << "#" << k+1 << " " << result << endl;
	}
	
}