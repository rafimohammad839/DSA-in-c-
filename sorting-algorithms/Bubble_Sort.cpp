// ----------------------------------------------- Bubble Sort | Time - O(N)
#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j + 1], arr[j]);
      }
    }
  }
}

int main()
{
  int arr[] = {6, 5, 4, 3, 2, 1};
  cout << "Before sorting: " << endl;
  for (auto it : arr) {
    cout << it << " ";
  }
  cout << endl;
  bubbleSort(arr, 6);
  cout << "After sorting : " << endl;
  for (auto it : arr) {
    cout << it << " ";
  }
  return 0;
}