#include <bits/stdc++.h>
using namespace std;

void test_case() {
  int n, x, am;
  cin >> n >> x;
  queue <int> with;
  queue <int> num;
  vector <int> order;
  for (int i = 0; i < n; i++) {
    cin >> am;
    with.push(am);
  }
  for (int i = 1; i <= n; i++) {
    num.push(i);
  }
  while (!with.empty()) {
    int pass = with.front();
    int id = num.front();
    if (pass <= x) {
      with.pop();
      order.push_back(id);
      num.pop();
    }
    else {
      with.push(pass - x);
      with.pop();
      num.push(id);
      num.pop();
    }
  }
  for (auto j : order) {
    cout << j << " ";
  }
  cout << "\n";
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