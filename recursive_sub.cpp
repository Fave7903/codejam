#include <bits/stdc++.h>
using namespace std;

void subUtil(vector<int> &A, vector<vector<int>> &res, vector<int> &subset, int index) {
  res.push_back(subset);
  for (int i = index; i < A.size(); i++) {
    subset.push_back(A[i]);
    subUtil(A, res, subset, i + 1);
    subset.pop_back();
  }
  return;
}

vector<vector<int>> subsets(vector<int> A) {
  vector<int> subset;
  vector<vector<int>> res;
  int index = 0;
  subUtil(A, res, subset, index);
  return res;
}

int main() {
  vector<int> arr{0, 1, 2};
  vector<vector<int>> res = subsets(arr);
  for (int i = 0; i < res.size(); i++) {
    for (int j = 0; j < res[i].size(); j++) {
      cout << res[i][j] << " ";
    }
    cout << endl;
  }
  for (int i = 0; i < res.size(); i++) {
    int sum = 0;
  
    int val = 3;
    for (int j = 0; j < res[i].size(); j++) {
      sum += res[i][j];
      
    }
    if (sum == val) {
      count++;
      cout << count << endl;
    }
    else sum = 0;
  }
}