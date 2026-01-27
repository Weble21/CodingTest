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
		string str;
		cin >> str;
		vector<char> v;
		int cnt = 0;
		for (int i = 1; i <= 10; i++) {
			bool ok = true;
			for (int j = i; j < str.size(); j++) {
				if (str[j] != str[j % i]) {
					ok = false;
					break;
				}
			}
			if (ok) {
				cnt = i;
				break;
			}

		}
		cout << "#" << t+1 << " " << cnt << "\n";

	}
	return 0;
}