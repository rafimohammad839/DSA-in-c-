// Remove Duplicates from Sorted Array
#include <iostream>
using namespace std;

// ----------------------------------------------------------- Solution 1 | Time - O(N) | Auxiliary Space - O(N)
// int removeDuplicates(int arr[], int n) {
//   int temp[n];
//   int j = 0;
//   for (int i = 0; i < n - 1; i++) {
//     if (arr[i] != arr[i + 1]) {
//       temp[j++] = arr[i];
//     }
//   }
//   temp[j++] = arr[n - 1];
//   for (int i = 0; i < j; i++) {
//     arr[i] = temp[i];
//   }
//   return j;
// }

// ----------------------------------------------------------- Solution 1 | Time - O(N) | Auxiliary Space - O(1)
int removeDuplicates(int arr[], int n) {
  int j = 0, i;
  for (i = 0; i < n - 1; i++) {
    if (arr[i] != arr[i + 1]) {
      arr[j++] = arr[i];
    }
  }

  arr[j++] = arr[i];
  return j;
}

int main() {
  cout << "Find Unique Elements!\n";
  int arr[] = {1, 2, 2, 2, 2, 3, 4, 5, 5, 5, 6, 6, 6};
  int len = removeDuplicates(arr, 13);
  for (int i = 0; i < len; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}