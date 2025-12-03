#include <iostream>
#include <deque>

using namespace std;

//25.11.24. 22:23 start
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n = 10;
	while (n--) {
		int t;
		cin >> t;
		deque<int> arr;
		for (int i = 0; i < 8; i++) {
			int tmp;
			cin >> tmp;
			arr.push_back(tmp);
		}
		int res = 1;
		while (res) {
			for (int i = 1; i < 6; i++) {
				int tmp;
				tmp = arr.front();
				arr.pop_front();
				tmp -= i;
				if (tmp <= 0) {
					tmp = 0;
				}
				arr.push_back(tmp);
				if (tmp <= 0) {
					res = 0;
					break;
				}
			}
			
		}
		cout << "#" << t << " ";
		for (int i = 0; i < 8; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	
	}
	return 0;
}
//25.11.24. 22:38 finish