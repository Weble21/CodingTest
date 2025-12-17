#include <iostream>
#include <stack>
#include <string>

using namespace std;

//12.17. 22:19 start
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t = 10;
	

	for (int i = 1; i <= t; i++) {
		int cnt;
		cin >> cnt;
		string str;
		cin >> str;
		stack<char> s;
		int result = 1;
		for (int j = 0; j < cnt; j++) {
			if (str[j] == '(') {
				s.push('(');
			}
			else if (str[j] == '[') {
				s.push('[');
			}
			else if (str[j] == '{') {
				s.push('{');
			}
			else if (str[j] == '<') {
				s.push('<');
			}
			else if (str[j] == ')') {
				if (!s.empty() && s.top() == '(') {
					s.pop();
				}
				else {
					result = 0;
					break;
				}
			}
			else if (str[j] == ']') {
				if (!s.empty() && s.top() == '[') {
					s.pop();
				}
				else {
					result = 0;
					break;
				}
			}
			else if (str[j] == '}') {
				if (!s.empty() && s.top() == '{') {
					s.pop();
				}
				else {
					result = 0;
					break;
				}
			}
			else if (str[j] == '>') {
				if (!s.empty() && s.top() == '<') {
					s.pop();
				}
				else {
					result = 0;
					break;
				}
			}
			
		}
		if (s.size() != 0) {
			result = 0;
		}
		cout << "#" << i << " " << result << endl;
	}
}