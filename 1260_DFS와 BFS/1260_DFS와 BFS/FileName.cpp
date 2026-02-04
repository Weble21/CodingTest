#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>

using namespace std;

void dfs(int v, vector<vector<int>> &graph, vector<bool> visited) {
	stack<int> s;
	s.push(v);
	while (!s.empty()) {
		int node = s.top();
		s.pop();
		if (!visited[node]) {
			visited[node] = true;
			cout << node << " ";
			for (int i = 0; i < graph[node].size(); i++) {
				int nextNode = graph[node][i];
				if (!visited[nextNode]) {
					s.push(nextNode);
				}
			}
		}
		else {
			continue;
		}
		
		
	}
}

void bfs(int v, vector<vector<int>>& graph, vector<bool> visited) {
	queue<int> q;
	q.push(v);
	while (!q.empty()) {
		int node = q.front();
		q.pop();
		if (!visited[node]) {
			visited[node] = true;
			cout << node << " ";
			for (int i = graph[node].size() -1; i >= 0; i--) {
				int nextNode = graph[node][i];
				if (!visited[nextNode]) {
					q.push(nextNode);
				}
			}
		}
		else {
			continue;
		}


	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, m, v;
	cin >> n >> m >> v;
	vector<bool> visited;
	vector <vector<int>> graph(n + 1);
	for (int i = 0; i <= n; i++) {
		visited.push_back(false);
	}
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	for (int i = 0; i < n + 1; i++) {
		sort(graph[i].begin(), graph[i].end(), greater<>());
	}
	
	dfs(v, graph, visited);
	cout << "\n";
	bfs(v, graph, visited);
}