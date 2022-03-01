#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> Pset(vector<int> a) {
  vector<vector<int>> res;
  vector<vector<int>> res1;
  vector<int> subset;
  res.push_back(subset);
  for (int i = 0; i < a.size(); i++) {
    res1 = res;
    for (auto it = res1.begin(); it != res1.end(); it++) {
      (*it).push_back(a[i]);
    }
    for (auto it = res1.begin(); it != res1.end(); it++) {
      res.push_back(*it);
    }
  }
  return res;
}

int main() {
  vector<int> a{0, 1, 2};
  vector<vector<int>> res = Pset(a);
  for (int i = 0; i < res.size(); i++) {
    for (int j = 0; j < res[i].size(); j++) {
      cout << res[i][j] << " ";
    }
    cout << endl;
  }
}