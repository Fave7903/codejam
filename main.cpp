#include <bits/stdc++.h>
using namespace std;

int main() {
  int k;
  cin >> k;
  vector <int> ks;
  int s;
  for (int i = 0; i < k; i++) {
    cin >> s;
    ks[i] = s;
  }
  for (auto x : ks) {
    cout << x << endl;
  }
}