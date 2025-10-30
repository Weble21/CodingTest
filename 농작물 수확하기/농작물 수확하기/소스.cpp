#include <iostream>
#include <vector>
#include <string>

using namespace std;

//25.10.30. 22:55 start

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	for (int k = 0; k < t; k++) {
		int n;
		cin >> n;
		vector <vector<int>> v (n,vector<int>(n,0));
		for (int i = 0; i < n; i++) {
			string str;
			cin >> str;
			for (int j = 0; j < n; j++) {
				v[i][j] = str[j] - '0';
			}
		}
		
		int result = 0;
		int i = 0;
		int cnt = 1;
		int st = n / 2;
		
		while(true) {
			
			if (cnt > n) {
				break;
			}
			int tmp_st = st;
			for (int j = 0; j < cnt; j++) {
				result += v[i][tmp_st];
				tmp_st++;
			}
			st -= 1;
			i++;
			cnt += 2;
		}
		cnt = n - 2;
		st += 2;
		while (true) {

			if (cnt <= 0) {
				break;
			}
			int tmp_st = st;
			for (int j = 0; j < cnt; j++) {
				result += v[i][tmp_st];
				tmp_st++;
			}
			st += 1;
			i++;
			cnt -= 2;
		}
		cout << "#" << k+1 << " " << result << "\n";
	}

}
//25.10.30. 23:40 finish