#include <iostream>

using namespace std;


//25.11.11. 21:45 start
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int a, b, n;
		cin >> a >> b >> n;
		int cnt = 0;
		
		while (1) {
			if (a < b) {
				a += b;
			}
			else {
				b += a;
			}
			cnt++;
			if (b > n || a > n) {
				break;
			}
		}
		cout << cnt << "\n";
	}
	return 0;
}
//25.11.11. 21:57 finish