#include <iostream>
#include <queue>
#include <vector>

using namespace std;

//25.12.7. 21:47 start
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		queue<int> a;
		queue<int> b;
		vector<pair<int, char>> result;
		for (int j = 0; j < n; j++) {
			int tmp;
			cin >> tmp;
			a.push(tmp);
		}
		for (int j = 0; j < n; j++) {
			int tmp;
			cin >> tmp;
			b.push(tmp);
		}
		for (int j = 1; j <= n; j++) {
			result.push_back({ j, 'n' });
		}
		
		char team = 'a';
		for(int j = 0; j < n; j++) {
			int check = 1;
			if (team == 'a') {
				while (check) {
					if (result[a.front() - 1].second == 'n') {
						result[a.front() - 1].second = 'A';
						a.pop();
						check = 0;
					}
					else {
						a.pop();
					}
				}
				team = 'b';
			}
			else {
				while (check) {
					if (result[b.front() - 1].second == 'n') {
						result[b.front() - 1].second = 'B';
						b.pop();
						check = 0;
					}
					else {
						b.pop();
					}
				}
				team = 'a';
			}
		}
		for (int i = 0; i < result.size(); i++) {
			cout << result[i].second;
		}
		cout << endl;
		
	}
}
//25.12.7. 22:17 finish