#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k, nums, count = 0;
	cin >> n >> k;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> nums;
		arr[i] = nums;
	}
	for (int j = 0; j < n; j++) {
		if (arr[j] % k == 0) count++;
	}
  cout << count << "\n";
	return 0;
}