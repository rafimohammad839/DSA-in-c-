// ---------------------------------------------------- Insertion Sort | Time - O(N^2) | Best Case - O(N)
#include<iostream>
using namespace std;

void insertionSort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int key = arr[i];
    int j = i - 1;
    while (key < arr[j] && j >= 0) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}

int main()
{
  int arr[] = {5, 3, 2, 9, 10};
  cout << "Before sorting: " << endl;
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  insertionSort(arr, 5);
  cout << "After sorting: " << endl;
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}