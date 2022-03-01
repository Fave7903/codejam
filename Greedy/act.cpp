#include <bits/stdc++.h>
using namespace std;

struct Act {
  int start, end;
};
bool comp(Act s1, Act s2) {
  return (s1.end < s2.end);
}
void maxAct(Act arr[], int n) {
  sort (arr, arr + n, comp);
  int i, j;
  i = 0;
  cout << "(" <<arr[i].start << "," << arr[i].end << ")\n";
  for (j = 1; j < n; j++) {
    if (arr[j].start >= arr[i].end) {
      cout << "(" << arr[j].start << "," << arr[j].end << ")\n";
      i = j;
    }
  }
}

int main() {
  Act arr[] = {{5, 9}, {1, 2}, {3, 4}, {0, 6}, {5, 7}, {8, 9}};
  int n = sizeof(arr) / sizeof(arr[0]);
  maxAct(arr, n);
}