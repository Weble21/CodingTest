#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		vector<char> v;
		string str;
		cin >> str;
		int L = 0;
		int R = 0;
		for (int j = 0; j < str.size(); j++) {
			v.push_back(str[j]);
		}
		vector<int> res_L;
		vector<int> res_R;
		res_L.push_back(0);
		res_R.push_back(0);
		
		//?°¡ L
		for (int k = 1; k <= str.size(); k++) {
			if (v[k-1] == 'L') {
				res_L.push_back(res_L[k - 1] - 1);
			}
			else if (v[k-1] == 'R') {
				res_L.push_back(res_L[k - 1] + 1);
			}
			else if (v[k-1] == '?') {
				res_L.push_back(res_L[k - 1] - 1);
			}
		}
		for (int k = 0; k < res_L.size(); k++) {
			if (res_L[k] < 0) {
				res_L[k] = res_L[k] * (-1);
			}
		}
		int max_L = *max_element(res_L.begin(), res_L.end());

		//?°¡ R
		for (int k = 1; k <= str.size(); k++) {
			if (v[k - 1] == 'L') {
				res_R.push_back(res_R[k - 1] - 1);
			}
			else if (v[k - 1] == 'R') {
				res_R.push_back(res_R[k - 1] + 1);
			}
			else if (v[k - 1] == '?') {
				res_R.push_back(res_R[k - 1] + 1);
			}
		}
		for (int k = 0; k < res_L.size(); k++) {
			if (res_R[k] < 0) {
				res_R[k] = res_R[k] * (-1);
			}
		}
		int max_R = *max_element(res_R.begin(), res_R.end());

		if (max_R > max_L) {
			cout << max_R << "\n";
		}
		else {
			cout << max_L << "\n";
		}
	}

	return 0;
}
