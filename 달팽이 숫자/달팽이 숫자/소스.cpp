#include <iostream>
#include <vector>

using namespace std;

int t, n;
int dy[4] = { 0, 1, 0, -1 };
int dx[4] = { 1, 0, -1, 0 };



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;

		vector<vector<int>> v(n, vector<int>(n, 0));
		vector<vector<int>> visited(n, vector<int>(n, 0));

		//v[y][x]
		pair<int, int> position = { 0,0 };
		int direction = 0;

		for (int j = 0; j < n * n; j++) {
			int y = position.first;
			int x = position.second;

			v[y][x] = j + 1;
			visited[y][x] = 1;

			int ny = position.first + dy[direction];
			int nx = position.second + dx[direction];

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
			for (int i = 0; i < n; i++) {
				cout << v[j][i] << " ";
			}
			cout << "\n";
		}
	}

	return 0;
}