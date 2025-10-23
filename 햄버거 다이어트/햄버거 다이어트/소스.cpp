#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//복습하기
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T;
	cin >> T;
	for (int t = 0; t < T; t++) {
		int N, L;
		cin >> N >> L;

		vector<int> score(N);
		vector<int> cal(N);
		for (int j = 0; j < N; j++) {
			cin >> score[j] >> cal[j];
		}
		vector<int> dp(L + 1, 0);
		for (int i = 0; i < N; i++) {
			for (int j = L; j >= cal[i]; j--) {
				dp[j] = max(dp[j], score[i] + dp[j - cal[i]]);
			}
		}
		cout << "#" << t + 1 << " " << dp[L] << "\n";

		
	}
	return 0;
}