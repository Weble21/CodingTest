#include <iostream>
#include <string>

using namespace std;

int time(int a, int b) {
	if (b == 0) {
		return 1;
	}
	else {
		int a2 = a;
		for (int i = 1; i < b; i++) {
			a *= a2;
		}
		return a;
	}
}

int result(int *arr, int arr_size) {
	int sum = 0;
	for (int i = 0; i < arr_size; i++) {
		int tmp = arr[i] * time(10, arr_size - i- 1);
		sum += tmp;
	}
	return sum;
}

void swap(int* arr, int a, int b) {
	int tmp = arr[a];
	arr[a] = arr[b];
	arr[b] = tmp;

}

//25.10.22. 21:39 start
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		string str;
		int n;
		cin >> str >> n;
		int str_size = str.size();
		int* dp = new int[str_size];
		int max = 0;
		int idx = 0;
		for (int j = 0; j < str_size; j++) {
			dp[j] = str[j] - '0';
			if (dp[j] >= max) {
				max = dp[j];
				idx = j;
			}
		}
		//cout << result(dp, str_size) << endl;
		int res = 0;
		for (int j = 0; j < str_size; j++) {
			if (!(dp[j] == max)) {
				for (int k = 0; k < n; k++) {

				}
			}
		}
		
	}
}