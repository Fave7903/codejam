#include <bits/stdc++.h>
using namespace std;

int main() {
  int a = 1;
  int count = 0;
  while (a > 0) {
    if (a & 1) count++;
    a /= 2;
  }
  cout << count << "\n";
  
}