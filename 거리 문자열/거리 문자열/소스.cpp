#include <iostream>
#include <string>
#include <vector>

using namespace std;

//25.10.21. 18:30 start


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		string str;
		cin >> str;
		vector<int> v;
		int check_arr[10] = { 0, };
		for (int j = 0; j < str.size(); j++) {
			int tmp = str[j] - '0';
			v.push_back(tmp);
			check_arr[tmp] += 1;
		}
		for (int idx = v.size()-1; idx >= 0; idx--) {
			if (v[idx] == -1) {
				continue;
			}
			else {
				int tmp = idx - v[idx] - 1;
				if (tmp < 0) { break; }
				if (v[idx] == v[tmp]) {
					v[idx] = -1;
					v[tmp] = -1;
				}
				else {
					break;
				}
			}
		}
		int res = 1;
		for (int j = 0; j < 10; j++) {
			if (!(check_arr[j] == 2 || check_arr[j] == 0)) {
				res = 0;
				break;
			}
		}
		for (int j = 0; j < str.size(); j++) {
			if (v[j] == -1) {
				continue;
			}
			else {
				res = 0;
			}
		}
		
		if (res == 1) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
}
//25.10.22. 21:29 finish