#include <iostream>
#include <vector>
#include <string>

using namespace std;

int checkRow(vector<vector<char>> &v, int h, int w, vector<vector<char>> &vf) {
	int result = 0;
	for (int i = 0; i < h; i++) {
		int chk = 0;
		for (int j = 0; j < w; j++) {
			if (v[i][j] == '.') {
				break;
			}
			else {
				chk++;
			}
		}
		if (chk == w) {
			result++;
			for (int j = 0; j < w; j++) {
				vf[i][j] = '#';
			}
			
		}
	}
	return result;
}

int checkCol(vector<vector<char>> &v, int h, int w, vector<vector<char>>& vf) {
	int result = 0;
	for (int i = 0; i < w; i++) {
		int chk = 0;
		int alreadyChk = 0;
		for (int j = 0; j < h; j++) {
			if (v[j][i] == '.') {
				break;
			}
			else {
				chk++;
			}
		}
		if (chk == h) {
			result++;
		}
	}
	return result;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int h, w;
		cin >> h >> w;
		vector<vector<char>> vf(h, vector<char>(w, '.'));
		vector<vector<char>> v(h, vector<char>(w, '.'));
		int chking = 0;
		for (int i = 0; i < h; i++) {
			string str;
			cin >> str;
			for (int j = 0; j < w; j++) {
				if (str[j] == '#') {
					v[i][j] = '#';
					chking++;
				}
			}
		}
		int resultRow = checkRow(v, h, w, vf);
		int resultCol = checkCol(v, h, w, vf);
		if (chking != (h * w)) {
			cout << resultRow + resultCol << endl;
		}
		else {
			if (resultRow <= resultCol) {
				cout << resultRow << endl;
			}
			else {
				cout << resultCol << endl;
			}
		}
		
	}
	return 0;
}