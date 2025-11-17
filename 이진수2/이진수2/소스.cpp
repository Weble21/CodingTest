#include <iostream>
#include <vector>

using namespace std;

double pow(int a, int b) {
	if (b == 1) {
		return a;
	}
	else {
		int res = 1;
		for (int i = 0; i < b; i++) {
			res *= a;
		}
		return res;
	}
}

//11.17.22:23 start
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	double arr[13] = { 0 };
	for (int i = 0; i < 13; i++) {
		arr[i] = 1/pow(2, (i + 1));
	}
	
	
	for (int i = 0; i < t; i++) {
		double n;
		cin >> n;
		vector<int> v;
		for (int i = 0; i < 12; i++) {
			if (n - arr[i] >= 0) {
				v.push_back(1);
				n -= arr[i];
				if (n == 0) {
					break;
				}
			} else {
				v.push_back(0);
			}
		}
		if (n == 0) {
			cout << "#" << i << " ";
			for (int j = 0; j < v.size(); j++) {
				cout << v[j];
			}
		}
		else {
			cout << "#" << i << " overflow";
		}
		cout << "\n";
	}
	
}