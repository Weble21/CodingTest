#include <iostream>
#include <deque>
#include <string>

using namespace std;

int abs(int x) {
	if (x >= 0) {
		return x;
	}
	else {
		return (-1) * x;
	}
}

int abs_checking(int x) {
	if (x > 0) {
		return 1;
	}
	else if (x < 0) {
		return -1;
	}
	else {
		return 0;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		string str;
		cin >> str;
		deque<char> dq;
		for (int i = 0; i < str.size(); i++) {
			dq.push_back(str[i]);
		}
		int k;
		cin >> k;
		for (int i = 0; i < k; i++) {
			int x;
			cin >> x;
			int abs_chk = abs_checking(x);
			x = abs(x) % dq.size();
			//cout << x << endl;
			if (abs_chk == 1) {
				for (int j = 0; j < x; j++) {
					char tmp;
					tmp = dq.front();
					dq.pop_front();
					dq.push_back(tmp);
				}
			}
			else if (abs_chk == -1) {
				for (int j = 0; j < x; j++) {
					char tmp;
					tmp = dq.back();
					dq.pop_back();
					dq.push_front(tmp);
				}
			}
			else {
				continue;
			}
			
			
		}
		for (int i = 0; i < dq.size(); i++) {
			cout << dq[i];
		}
		cout << endl;
	}
}