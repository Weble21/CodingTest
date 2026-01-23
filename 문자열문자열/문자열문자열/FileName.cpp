#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int tc;
	cin >> tc;
	for (int t = 0; t < tc; t++) {
		int len;
		cin >> len;
		string str;
		cin >> str;
		if (len % 2 != 0) {
			cout << "#" << t + 1 << " No\n";
			continue;
		}
		int middle = len / 2;
		bool chk = true;
		for (int i = 0; i < middle; i++) {
			if (str[i] == str[i + middle]) {
				chk = true;
			}
			else {
				chk = false;
				break;
			}
		}
		if (chk == true) {
			cout << "#" << t + 1 << " Yes\n";
		}
		else {
			cout << "#" << t + 1 << " No\n";
		}
		
	}
	return 0;
}