#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for (int j = 0; j < t; j++) {
		int n, m, k;
		cin >> n >> m >> k;
		int max = 0;
		vector<int> customer(11111, 0);
		vector<int> v;
		for (int i = 0; i < n; i++) {
			int tmp;
			cin >> tmp;
			if (tmp > max) {
				max = tmp;
			}
			customer[tmp]++;
		}
		bool chk = false;
		v.push_back(0);
		if (customer[0] > 0) {
			cout << "#" << j + 1 << " " << "Impossible\n";
			continue;
		}
		for (int i = 1; i <= max; i++) {
			if (i % m == 0) {
				v.push_back(v[i - 1] + k);
			}
			else {
				v.push_back(v[i - 1]);
			}
			
			if (customer[i] != 0) {
				if (v[i] - customer[i] < 0) {
					cout << "#" << j + 1 << " " << "Impossible\n";
					chk = true;
					break;
				}
				else {
					v[i] -= customer[i];
				}
			}
			
		}
		if (!chk) {
			cout << "#" << j + 1 << " " << "Possible\n";
		}
	}
}