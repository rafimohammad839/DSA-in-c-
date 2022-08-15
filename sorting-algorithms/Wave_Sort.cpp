#include<iostream>
using namespace std;
// --------------------------------------------- Wave Sort
/*
    After wave-sorting, the array should look something like a wave
    5     7     8    10
       3     1    2      9
*/
void waveSort(int arr[], int n) {
  for (int i = 1; i < n; i += 2) {
    if (arr[i] > arr[i - 1]) {
      swap(arr[i], arr[i - 1]);
    }
    if (arr[i] > arr[i + 1] && i <= n - 2) {
      swap(arr[i], arr[i + 1]);
    }
  }
}

int main()
{
  int arr[] = {3, 5, 7, 2, 1, 8, 9, 10};
  waveSort(arr, 8);
  cout << "After wave-sorting: " << endl;
  for (auto it : arr) {
    cout << it << " ";
  }
  return 0;
}