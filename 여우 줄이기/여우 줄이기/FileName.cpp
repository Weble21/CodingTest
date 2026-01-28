#include <iostream>
#include <string>
#include <stack>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int tc;
	cin >> tc;
	for (int t = 1; t <= tc; t++) {
		int n;
		cin >> n;
		string str;
		cin >> str;
		stack<char> s;
		for (int i = 0; i < str.size(); i++) {
			s.push(str[i]);
			if (s.size() >= 3) {
				char x = s.top();
				s.pop();
				char o = s.top();
				s.pop();
				char f = s.top();
				s.pop();

				if (!(x == 'x' && o == 'o' && f == 'f')) {
					s.push(f);
					s.push(o);
					s.push(x);
				}
			}
		}
		cout << s.size() << endl;
	}
}