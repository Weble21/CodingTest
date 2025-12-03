#include <iostream>
#include <deque>
#include <algorithm>
#include <cmath>

using namespace std;

//25.12.3. 22:51 start
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		deque<int> dq;
		for (int i = 0; i < 10; i++) {
			int tmp;
			cin >> tmp;
			dq.push_back(tmp);
		}
		sort(dq.begin(), dq.end());
		dq.pop_front();
		dq.pop_back();

		int sum = 0;
		for (int i = 0; i < dq.size(); i++) {
			sum += dq[i];
		}
		double size = dq.size();
		double result = round(sum / size);
		cout << "#" << i << " " << result << "\n";
		

	}
	return 0;
}
//25.12.3. 23:04 finish