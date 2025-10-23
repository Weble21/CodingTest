#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	vector<int> v;
	for (int i = 0; i < t; i++) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);

	}
	sort(v.begin(), v.end());
	cout << v[t / 2];
}