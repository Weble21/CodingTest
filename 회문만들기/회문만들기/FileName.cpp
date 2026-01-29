#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

template <typename T>
bool chkHM(const T& v) {
	int len = v.size();
	for (int i = 0; i < ((len + 1) / 2); i++) {
		if (v[i] != v[len - i - 1]) {
			return false;
		}
		else {
			continue;
		}
	}
	return true;
}

int prove(string str) {
	int l = 0;
	int r = str.size() - 1;
	int cnt = 0;
	while (l < r) {
		if (str[l] == str[r]) {
			l++;
			r--;
		}
		else if (str[l] == 'x') {
			l++;
			cnt++;
		}
		else if (str[r] == 'x') {
			r--;
			cnt++;
		}
		else {
			return -1;
		}
	}
	return cnt;
}



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int tc;
	cin >> tc;
	for (int t = 0; t < tc; t++) {
		string str;
		cin >> str;
	
		if (chkHM(str)) {
			cout << 0 << endl;
		}
		else {
			int result = prove(str);
			cout << result << endl;
		}
	}
	return 0;
}