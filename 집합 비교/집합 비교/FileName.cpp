#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

//25.12.9. 21:49 start
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		vector<int> array_A;
		vector<int> array_B;
		for (int i = 0; i < a; i++) {
			int tmp;
			cin >> tmp;
			array_A.push_back(tmp);
		}
		for (int i = 0; i < b; i++) {
			int tmp;
			cin >> tmp;
			array_B.push_back(tmp);
		}
		char result = '?';
		if (array_A.size() > array_B.size()) {
			//find B to A
			for (int i = 0; i < array_B.size(); i++) {
				auto it = find(array_A.begin(), array_A.end(), array_B[i]);
				if (it == array_A.end()) {
					//존재X
					result = '?';
					break;
				}
				else {
					result = '>';
				}
			}
			
		}
		else if (array_A.size() < array_B.size()) {
			//find A to B
			for (int i = 0; i < array_A.size(); i++) {
				auto it = find(array_B.begin(), array_B.end(), array_A[i]);
				if (it == array_B.end()) {
					//존재X
					result = '?';
					break;
				}
				else {
					result = '<';
				}
			}
		}
		else {
			for (int i = 0; i < array_B.size(); i++) {
				auto it = find(array_A.begin(), array_A.end(), array_B[i]);
				if (it == array_A.end()) {
					//존재X
					result = '?';
					break;
				}
				else {
					result = '=';
				}
			}
		}
		cout << result << "\n";
	}
}
//25.12.9. 22:03 finish