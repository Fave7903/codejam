#include <bits/stdc++.h>
using namespace std;

void test_case() {
  int n; 
  char s[n + 5];
  cin >> n;
  scanf("%s", s);
  vector <int> d(n, 1);
  for (int i = 1; i < n; i++) {
    if (s[i] > s[i - 1]) {
      d[i] = d[i - 1] + 1;
    }
  }
  for (auto it : d) {
    cout << it << " ";
  }
}
  
int main() {
  int T;
  scanf("%d", &T);
  for (int i = 1; i <= T; i++) {
    printf("Case #%d: ", i);
    test_case();
    printf("\n");
  }
}