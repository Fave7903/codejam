#include <bits/stdc++.h>
using namespace std;

int odd_sum(int n) {
    int num = n * 2;
    int sum = 0;
    for (int i = 1; i < num; i += 2) {
        sum += i;
    }
    return sum;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
	    int n, k, s;
	    cin >> n >> k >> s;
	    int s1 = odd_sum(n);
	    int ext = s - s1;
	    for (int i = 1; i < (n * 2); i += 2) {

	        int sk = (ext / i) + 1;
	        if (ext % i == 0 && sk == k) {
	            cout << i << "\n";
	            break;
	        }
	    }
	}
	return 0;
}
