#include<iostream>
using namespace std;
// -------------------------------------------------------------------- Heap Sort | Time - O(NLogN)
void maxHeapify(int arr[], int n, int i) {
  int left = i * 2 + 1;
  int right = i * 2 + 2;
  int largest = i;
  if (left <= n && arr[left] > arr[i]) {
    largest = left;
  }
  
  if (right <= n && arr[right] > arr[largest]) {
    largest = right;
  }

  // If the largest is not the root, then swap largest and i
  if (largest != i) {
    swap(arr[i], arr[largest]);
    maxHeapify(arr, n, largest);
  }
}

void heapSort(int arr[], int n) {
  int lastLeaf = n / 2 - 1;
  // First off, maxHeapifying the entire array
  for (int i = lastLeaf; i >= 0; i--) {
    maxHeapify(arr, n - 1, i);
  }

  // Popping the first element and pushing it to the end
  for (int i = n - 1; i >= 0; i--) {
    swap(arr[i], arr[0]);
    maxHeapify(arr, i - 1, 0);
  }
}

int main()
{
  int arr[] = {7, 6, 5, 4, 3, 2, 1};
  heapSort(arr, 7);
  cout << "After sorting : " << endl;
  for (auto it : arr) {
    cout << it << " ";
  }
  cout << endl;
  return 0;
}