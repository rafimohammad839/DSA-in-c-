#include <iostream>
using namespace std;
// ---------------------------------------------------- Insertion Sort | Time - O(N^2) | Best Case - O(N)
// ---------------------------------------------------- Solution 1 | Usual Way

// void insertionSort(int arr[], int n) {
//   for (int i = 1; i < n; i++) {
//     int key = arr[i];
//     int j = i - 1;
//     while (key < arr[j] && j >= 0) {
//       arr[j + 1] = arr[j];
//       j--;
//     }
//     arr[j + 1] = key;
//   }
// }

// ---------------------------------------------------- Solution 2 | Checking the Previous
// void insertionSort(int arr[], int n) {
//   for (int i = 1; i < n; i++) {
//     int key = arr[i];
//     int j = i;
//     while (arr[j - 1] > key && j > 0) {
//       arr[j] = arr[j - 1];
//       j--;
//     }
//     arr[j] = key;
//   }
// }

// ---------------------------------------------------- Solution 3 | Swapping
void insertionSort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int j = i;
    while (arr[j-1] > arr[j] && j > 0) {
      swap(arr[j-1], arr[j]);
      j--;
    }
  }
}

int main() {
  int arr[] = {10, 5, 8, 12, 15, 30, 2, 19};
  cout << "Before sorting: " << endl;
  for (int i = 0; i < 8; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  insertionSort(arr, 8);
  cout << "After sorting: " << endl;
  for (int i = 0; i < 8; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}