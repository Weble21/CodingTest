#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//12.16. 21:33 start
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	for (int t = 1; t < 11; t++) {
		int testcase;
		cin >> testcase;
		int cnt = 0;
		string find_str;
		cin >> find_str;
		string str;
		cin >> str;

		auto it = str.begin();
		while (true) {
			it = search(it, str.end(),
				find_str.begin(), find_str.end());
			if (it != str.end()) {
				cnt++;
				it += find_str.size();
			}
			else {
				break;
			}
		}
		cout << "#" << testcase << " " << cnt << "\n";
	}
}
//12.16. 21:52 finish