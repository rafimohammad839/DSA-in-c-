// ---------------------------------------- Merge Sort | Time - O(NLogN) | Space - O(N)
#include<iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high) {
  int n1 = mid - low + 1;
  int n2 = high - mid;
  int left[n1], right[n2];

  for (int i = 0; i < n1; i++) {
    left[i] = arr[low + i];
  }
  for (int j = 0; j < n2; j++) {
    right[j] = arr[mid + 1 + j];
  }

  int i = 0, j = 0, k = low;

  while (i < n1 && j < n2) {
    if (left[i] < right[j]) {
      arr[k++] = left[i++];
    } else {
      arr[k++] = right[j++];
    }
  }

  while (i < n1) {
    arr[k++] = left[i++];
  }
  while (j < n2) {
    arr[k++] = right[j++];
  }
}

void mergeSort(int arr[], int low, int high) {
  if (low < high) {
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
  }
}

void display(int arr[],int n) {
  for(int i=0;i<n;i++) {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}


int main()
{
  int n;
  int arr[n];
  cout << "Enter array size: ";
  cin >> n;
  cout << "Enter array elements: " << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << "Unsorted array is " << endl;
  display(arr, n);
  mergeSort(arr, 0, n - 1);
  cout << "Sorted array is " << endl;
  display(arr, n);
  return 0;
}
// [10, 5, 8, 9, 22, 12, 3, 15]