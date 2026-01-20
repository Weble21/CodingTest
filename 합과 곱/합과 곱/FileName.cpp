#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int tc;
	cin >> tc;
	for (int i = 0; i < tc; i++) {
		long long s, p;
		cin >> s >> p;
		long double chk = (long double)s*s - (2.0L * p);
		if (chk < 0) {
			cout << "No\n";
			continue;
		}
		long long chkRoot = sqrt(chk);
		while ((long double)(chkRoot + 1) * (chkRoot + 1) <= chk) chkRoot++;
		while ((long double)chkRoot * chkRoot > chk) chkRoot--;


		chk -= (long double)chkRoot * chkRoot;
		if (chk < 0) {
			cout << "No\n";
			continue;
		}
		long long x = sqrt(chk);
		if (x * x == chk || (x+1) * (x+1) == chk) {
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}
	}

	return 0;
}