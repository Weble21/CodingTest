#include <iostream>
#include <string>

using namespace std;

void color(string str1, string str2) {
	if (str1 == str2) {
		cout << "E";
		
	} else {
		if (str1 == "red") {
			if (str2 == "orange" || str2 == "purple") {
				cout << "A";
			} else if (str2 == "green") {
				cout << "C";
			}
			else {
				cout << "X";
			}
		}
		if (str1 == "orange") {
			if (str2 == "red" || str2 == "yellow") {
				cout << "A";
			}
			else if (str2 == "blue") {
				cout << "C";
			}
			else {
				cout << "X";
			}
		}
		if (str1 == "yellow") {
			if (str2 == "orange" || str2 == "green") {
				cout << "A";
			}
			else if (str2 == "purple") {
				cout << "C";
			}
			else {
				cout << "X";
			}
		}
		if (str1 == "purple") {
			if (str2 == "red" || str2 == "blue") {
				cout << "A";
			}
			else if (str2 == "yellow") {
				cout << "C";
			}
			else {
				cout << "X";
			}
		}
		if (str1 == "blue") {
			if (str2 == "purple" || str2 == "green") {
				cout << "A";
			}
			else if (str2 == "orange") {
				cout << "C";
			}
			else {
				cout << "X";
			}
		}
		if (str1 == "green") {
			if (str2 == "blue" || str2 == "yellow") {
				cout << "A";
			}
			else if (str2 == "red") {
				cout << "C";
			}
			else {
				cout << "X";
			}
		}
	}
}

//25.11.20. 21:40 start
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		string str1, str2;
		cin >> str1 >> str2;
		color(str1, str2);
		cout << "\n";
	}
}
//21:52 finish