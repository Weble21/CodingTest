#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	
	int tc;
	cin >> tc;
	for (int t = 1; t <= tc; t++) {
		int n;
		cin >> n;
		vector<vector<int>> cost(n);
		vector<vector<pair<int, bool>>> v(n, vector<pair<int, bool>>());
		for (int i = 0; i < n; i++) {
			string str;
			cin >> str;
			for (int j = 0; j < n; j++) {
				v[i].push_back(make_pair(0, false));
				cost[i].push_back(str[j] - '0');
			}
		}
		v[0][0].second = true;
		queue<pair<int, int>> q;

		int row = 0;
		int col = 0;
		q.push({ col, row });
		while (!q.empty()) {
			row = q.front().first;
			col = q.front().second;
			q.pop();
			//범위 확인
			if ((row + 1 < n)) {
				if ((!v[col][row + 1].second)) {
					q.push({ col, row + 1 });
					v[col][row + 1].second = true;
					v[col][row + 1].first = cost[col][row + 1] + v[col][row].first;
				}
				else {
					int newCost = cost[col][row + 1] + v[col][row].first;
					v[col][row + 1].first = min(v[col][row + 1].first, newCost);
				}
			}
			if ((col + 1 < n)) {
				if ((!v[col + 1][row].second)) {
					q.push({ col + 1, row });
					v[col + 1][row].second = true;
					v[col + 1][row].first = cost[col + 1][row] + v[col][row].first;
				}
				else {
					int newCost = cost[col + 1][row] + v[col][row].first;
					v[col + 1][row].first =	min(v[col + 1][row].first, newCost);
				}
			}
		}
		cout << "#" << t << " " << v[n - 1][n - 1].first << "\n";

	}
}