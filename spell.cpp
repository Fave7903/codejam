#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    while(T--) {
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr + 3);
        cout << arr[1] + arr[2] << "\n";
    }
	return 0;
}