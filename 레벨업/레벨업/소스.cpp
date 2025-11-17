#include <iostream>

using namespace std;

//25.11.17. 21:28 start

int abs(int b, int a) {
	int res = b - a;
	if (res < 0) {
		return res * -1;
	}
	else {
		return res;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		int* arr = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int min = 100000000;
		for (int cnt = 1; cnt < n-1; cnt++) {
			int result = 0;
			for (int i = 1; i < n; i++) {
				if (i != cnt) {
					result += abs(arr[i], arr[i - 1]);
				} else {
					i++;
					result += abs(arr[i], arr[i - 2]);
				}
			}
			//cout << "Res : " << result << endl;
			if (result < min) {
				min = result;
			}
		}
		cout << min << endl;
	}
}
//25.11.17. 22:09 finish