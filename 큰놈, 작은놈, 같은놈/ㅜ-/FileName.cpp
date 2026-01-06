#include <iostream>

using namespace std;

char result(int a, int b) {
	if (a > b) {
		return '>';
	}
	else if (a == b) {
		return '=';
	}
	else {
		return '<';
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int a, b;
		cin >> a >> b;
		cout << "#" << i + 1 << " " << result(a, b) << endl;
	}
}