// --------------------------------------- Quick Sort | Time - O(NLogN) | Worst Case - O(N^2)
#include<iostream>
using namespace std;

void swap(int arr[], int i, int j) {
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

int partition(int arr[], int l, int r) {
  int pivot = arr[r];
  int p = l;
  for (int i = l; i <= r - 1; i++) {
    if (arr[i] < pivot) {
      swap(arr, i, p);
      p++;
    }
  }
  swap(arr, p, r);
  return p;
}

void quickSort(int arr[], int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high);
    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
}

int main()
{
  int arr[6] = {3, 5, 2, 9, 1, 8};
  cout << "Before sorting: " << endl;
  for (auto it : arr) {
    cout << it << " ";
  }
  cout << endl;
  quickSort(arr, 0, 5);
  cout << "After sorting: " << endl;
  for (auto it : arr) {
    cout << it << " ";
  }
  cout << endl;
  return 0;
}