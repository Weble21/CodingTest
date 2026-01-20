#include <iostream>

using namespace std;

int main() {
	int tc;
	cin >> tc;
	for (int i = 1; i <= tc; i++) {
		int tmp;
		cin >> tmp;
		cout << "#" << i << " " << (tmp * tmp) << "\n";
	}
	return 0;
}