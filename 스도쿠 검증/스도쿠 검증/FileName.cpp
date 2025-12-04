#include <iostream>
#include <vector>

using namespace std;

//25.12.4. 22:52 start
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		vector<vector<int>> v;
		int result = 1;
		for (int j = 0; j < 9; j++) {
			vector<int> v2;
			for (int k = 0; k < 9; k++) {
				int tmp;
				cin >> tmp;
				v2.push_back(tmp);
			}
			v.push_back(v2);
		}
		for (int j = 0; j < 9; j++) {
			int sum = 0;
			for (int k = 0; k < 9; k++) {
				sum += v[j][k];
			}
			if (sum == 45) {
				result = 1;
			}
			else {
				result = 0;
				break;
			}
		}
		if (result == 0) {
			cout << "#" << i << " " << result << endl;
			continue;
		}
		for (int j = 0; j < 9; j++) {
			int sum = 0;
			for (int k = 0; k < 9; k++) {
				sum += v[k][j];
			}
			if (sum == 45) {
				result = 1;
			}
			else {
				result = 0;
				break;
			}
		}
		if (result == 0) {
			cout << "#" << i << " " << result << endl;
			continue;
		}
		bool ok = true;
		for (int j = 0; j < 9 && ok; j += 3) {
			for (int k = 0; k < 9 && ok; k += 3) {
				int sum = 0;
				for (int a = 0; a < 3; a++) {
					for (int b = 0; b < 3; b++) {
						sum += v[j + a][k + b];
					}
				}
				if (sum != 45) {
					ok = false;
				}
			}
			if (!ok) result = 0;
		}
		cout << "#" << i << " " << result << endl;
	}
}