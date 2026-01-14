#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		stack<char> s;
		string str;
		cin >> str;
		int len = str.size();
		int mid = (len / 2);
		if (len % 2 != 0) {
			mid++;
		}
		for (int j = 0; j < mid; j++) {
			s.push(str[j]);
		}
		if (len % 2 != 0) {
			s.pop();
		}
		for (int j = mid; j < len; j++) {
			if (s.top() == str[j]) {
				s.pop();
			}
			else {
				break;
			}
		}
		if (!s.empty()) {
			cout << "#" << i << " " << 0 << "\n";
		}
		else {
			cout << "#" << i << " " << 1 << "\n";
		}
		
	}
}