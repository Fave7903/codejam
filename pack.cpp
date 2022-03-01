#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int N;
    cin >> N;
    if (N == 2) {
        cout << 2 << endl;
    }
    else {
        int dp[N + 1];
        for (int i = 2; i <= N; i++) {
            dp[i] = N % i;
        }
        int max = dp[2];
        int ans;
        for (int j = N; j >= 2; j--) {
            if (dp[j] > max) {
                max = dp[j];
                ans = j;
            }
        }
        cout << ans << endl;
    }
}

int main() {
	int T;
	cin >> T;
	while (T--) {
	    test_case();
	}
}