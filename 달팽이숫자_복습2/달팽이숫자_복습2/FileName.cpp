#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	int dx[4] = {1, 0, -1, 0};
	int dy[4] = {0, 1, 0, -1};
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		
		vector<vector<int>> v(n, vector<int> (n,0));
		vector<vector<int>> visited(n, vector<int>(n, 0));
		pair<int, int> position = { 0, 0 };
		int direction = 0;
		for (int i = 0; i < n * n; i++) {
			int y = position.first;
			int x = position.second;

			v[y][x] = i + 1;
			visited[y][x] = 1;

			int ny = y + dy[direction];
			int nx = x + dx[direction];

			if (0 <= ny && ny < n && 0 <= nx && nx < n && visited[ny][nx] == 0) {
				position = { ny, nx };
			}
			else {
				direction = (direction + 1) % 4;
				position = { y + dy[direction], x + dx[direction] };
			}
		}
		cout << "#" << i + 1 << "\n";
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				cout << v[j][k] << " ";
			}
			cout << "\n";
		}

	}
	return 0;
	
}