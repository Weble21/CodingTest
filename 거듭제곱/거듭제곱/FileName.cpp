#include <iostream>

using namespace std;

int pow(int n, int m) {
	if (m == 1) {
		return n;
	}
	else {
		return n * pow(n, m - 1);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	for (int i = 0; i < 10; i++) {
		int t;
		cin >> t;
		int n, m;
		cin >> n >> m;
		int result = pow(n, m);
		cout << "#" << t << " " << result << endl;
	}
}