#include <bits/stdc++.h>
using namespace std;

void test_case() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int lis[n];
  lis[0] = 1;
  for (int i = 1; i < n; i++) {
    lis[i] = 1;
    if (abs(arr[i] - arr[i - 1]) == abs(arr[i + 1] - arr[i])) {
      lis[i] = lis[i - 1] + 1;
    }
  }
  int max = lis[0];
  for (int i = 0; i < n; i++) {
    if (lis[i] > max)  {
      max = lis[i];
    }
  }
  cout << max << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  for (int i = 1; i <= T; i++) {
    cout << "Case #" << i << ": ";
    test_case();
  }
}