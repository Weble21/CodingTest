#include <iostream>
#include <vector>

using namespace std;

//12.11. 21:19 start
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, m;
		cin >> n >> m;
		vector<vector<int>> v(n, vector<int>(n));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				int tmp;
				cin >> tmp;
				v[i][j] = tmp;
			}
		}
		vector<vector<int>> sum(n+1, vector<int>(n+1));
		for (int i = 1; i < n+1; i++) {
			for (int j = 1; j < n+1; j++) {
				sum[i][j] = v[i-1][j-1] +
					sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
			}
		}
		int max = -1;
		for (int i = 1; i < n + 1; i++) {
			for (int j = 1; j < n + 1; j++) {
				int cmp;
				if (m <= i && m <= j) {
					cmp = sum[i][j] - sum[i - m][j] -
						sum[i][j - m] + sum[i - m][j - m];
					if (max < cmp) {
						max = cmp;
					}
				}
			}
		}
		cout << "#" << i+1 << " " << max << endl;
	}
}