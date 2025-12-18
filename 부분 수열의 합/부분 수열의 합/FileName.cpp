#include <iostream>
#include <vector>

using namespace std;

//25.12.18. 08:45 start
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, k;
		cin >> n >> k;
		vector<int> v;
		for (int i = 0; i < n; i++) {
			int tmp;
			cin >> tmp;
			v.push_back(tmp);
		}
		vector<int> dp;
		dp.push_back(0);
		for (int i = 0; i < n; i++) {
			int prev = dp.size();
			for (int j = 0; j < prev; j++) {
				dp.push_back(dp[j] + v[i]);
			}
		}
		int cnt = 0;
		for (int i = 0; i < dp.size(); i++) {
			if (dp[i] == k) {
				cnt++;
			}
		}
		cout << "#" << i+1 << " " << cnt << endl;
	}
}