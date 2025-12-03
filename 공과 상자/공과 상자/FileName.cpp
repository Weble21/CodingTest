#include <iostream>

using namespace std;

//25.11.25. 21:45 start

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int b, w, x, y, z;
		cin >> b >> w >> x >> y >> z;
		
		int min, n;
		if (b < w) {
			min = b;
			n = w;
		}
		else {
			min = w;
			n = b;
		}
		int res;
		res = (y * w) + (x * b);
		//cout << "first : " << res << endl;
		for (int j = 2; j <= min * 2; j = j+2) {
			//cout << "j :" << j << endl;
			int tmp;
			int cnt = j / 2;
			tmp = (z * j) + (y * (w - cnt)) + (x * (b - cnt));
			if (tmp > res) {
				res = tmp;
			}
			//cout << "tmp :" << tmp << endl;
		}
		cout << res << "\n";
	}
	return 0;
}
//25.11.25. 22:13 finish