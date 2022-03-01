#include <bits/stdc++.h>
using namespace std;

int _mergeSort(int arr[], int temp[], int left, int right);
int merge(int arr[], int temp[], int left, int mid, int right);

int mergeSort(int arr[], int arr_size) {
  int temp[arr_size];
  return _mergeSort(arr, temp, 0, arr_size - 1);
}

int _mergeSort(int arr[], int temp[], int left, int right) {
  int mid, inv_count = 0;
  if (left < right) {
    mid = (left + right) / 2;
    inv_count += _mergeSort(arr, temp, left, mid);
    inv_count += _mergeSort(arr, temp, mid + 1, right);
    inv_count += merge(arr, temp, left, mid + 1, right);
  }
  return inv_count;
}

int merge(int arr[], int temp[], int left, int mid, int right) {
  int i, j, k;
  int inv_count = 0;
  i = left;
  j = mid;
  k = left;
  while ((i <= mid - 1) && (j <= right)) {
    if (arr[i] <= arr[j]) {
      temp[k++] = arr[i++];
    }
    else {
      temp[k++] = arr[j++];
      inv_count += (mid - i);
    }
  }
  while (i <= mid - 1) {
    temp[k++] = arr[i++];
  }
  while (j <= right) {
    temp[k++] = arr[j++];
  }
  for (i = left; i < right; i++) {
    arr[i] = temp[i];
  }
  return inv_count;
}

int main() {
  int arr[] = { 1, 20, 6, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  /*int ans = mergeSort(arr, n);
  cout << "The number of inversions are: " << ans << "\n";*/
  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      if (arr[i] < arr[j]) {
        ans++;
      }
    }
  }
  cout << ans << "\n";
}