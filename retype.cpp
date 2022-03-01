#include <bits/stdc++.h>
using namespace std;

void test_case() {
  int N, K, S;
  scanf("%d%d%d", &N, &K, &S);
  int first = K - 1;
  int restart = N + 1;
  int total_restart = first + restart;
  int back = K - S;
  int more = N - S + 1;
  int total_back = more + back + first;
  if (total_back < total_restart) {
    printf("%d\n", total_back);
  } 
  else {
    printf("%d\n", total_restart);
  }
}

int main() {
  int T;
  scanf("%d", &T);
  for (int i = 1; i <= T; i++) {
    printf("Case #%d: ", i);
    test_case();
  }
}