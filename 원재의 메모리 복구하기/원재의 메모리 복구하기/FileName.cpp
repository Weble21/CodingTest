#include <iostream>
#include <vector>
#include <string>

using namespace std;

void change(char &a) {
	if (a == '0') {
		a = '1';
	}
	else if (a == '1') {
		a = '0';
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		vector<char> con;
		string str;
		cin >> str;
		int n = str.size();
		for (int j = 0; j < n; j++) {
			con.push_back(str[j]);
		}
		vector<char> v (n, '0');
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			if (con[i] != v[i]) {
				cnt++;
				for (int j = i; j < n; j++) {
					change(v[j]);
				}
			}
		}
		cout << "#" << i + 1 << " " << cnt << endl;
	}
}