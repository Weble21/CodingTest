#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int dx[4] = { 1, 0, -1, 0 };
	int dy[4] = { 0, 1, 0, -1 };

	int T;
	cin >> T;
	for (int t = 0; t < T; t++) {
		int n;
		cin >> n;
		//n*n 행렬의 벡터, 0으로 초기화
		vector<vector<int>> v(n, vector<int>(n, 0));
		vector<vector<int>> visited(n, vector<int>(n, 0));
		pair<int, int> pos = { 0, 0 };
		int dir = 0;

		for (int i = 0; i < n*n; i++) {
			int y = pos.first;
			int x = pos.second;

			v[y][x] = i + 1;
			visited[y][x] = 1;

			int ny = y + dy[dir];
			int nx = x + dx[dir];

			//중요
			if (0 <= ny && ny < n && 0 <= nx && nx < n && visited[ny][nx] == 0) {
				pos = { ny, nx };
			}
			else {
				dir = (dir + 1) % 4;
				pos = { y + dy[dir], x + dx[dir] };
			}
			
		}
		cout << "#" << t + 1 << "\n";
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				cout << v[j][k] << " ";
			}
			cout << "\n";
		}
		
	}
	return 0;
}