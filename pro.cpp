#include <bits/stdc++.h>
using namespace std;

bool perfect(long double v) {
    if (v >= 0) {
        long long val = sqrt(v);
        if (val * val == v) {
            return true;
        }
        else {
            return false;
        }
    }
    return false;
}

int main() {
  for (int i = 0; i <= 100; i++) {
    cout << perfect(i) << endl;
  }
}