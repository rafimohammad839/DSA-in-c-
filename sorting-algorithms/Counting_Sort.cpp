// ------------------------------------------ Counting Sort | Time - O(N+k) | Auxiliary Space - O(N+k)
#include <iostream>
using namespace std;

void countingSort(int arr[], int n) {
  int k = arr[0];

  for (int i = 0; i < n; i++) {
    k = max(k, arr[i]);
  }

  int count[k+1] = {0};
  for (int i = 0; i < n; i++) {
    count[arr[i]]++;
  }

  for (int i = 1; i < 10; i++) {
    count[i] += count[i - 1];
  }

  int sortedArr[n];
  for (int i = n - 1; i >= 0; i--) {
    sortedArr[--count[arr[i]]] = arr[i];
  }

  for (int i = 0; i < n; i++) {
    arr[i] = sortedArr[i];
  }
}

int main() {
  cout << "Counting Sort!\n";
  int arr[] = {6, 3, 2, 2, 1, 1, 1, 4, 5};
  countingSort(arr, 9);
  cout << "After sorting:\n";
  for (int i = 0; i < 9; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}