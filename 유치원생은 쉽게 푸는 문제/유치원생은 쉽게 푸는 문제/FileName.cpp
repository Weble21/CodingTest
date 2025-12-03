#include <iostream>

using namespace std;


//25.12.3. 22:32 start
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int x;
		cin >> x;
		if (x == 1) {
			cout << 0 << endl;
		}
		else {
			int divide = x % 2;
			int rep = x / 2;
			if (divide == 1) {
				cout << 4;
				for (int i = 0; i < rep; i++) {
					cout << 8;
				}
				cout << "\n";
			}
			else {
				for (int i = 0; i < rep; i++) {
					cout << 8;
				}
				cout << "\n";
			}
		}
	}
	return 0;
}
//12.3. 22:46 finish