#include<iostream>
using namespace std;
// ----------------------------------------------- Selection Sort | Time - O(N^2)
void selectionSort(int arr[]) {
  for (int i = 0; i < 4; i++) {
    int select = i;
    for (int j = i + 1; j < 5; j++) {
      if (arr[j] <= arr[select]) {
        select = j;
      }
    }
    swap(arr[i], arr[select]);
  }
}

int main()
{
  int arr[5] = {10, 3, 20, 50, 9};
  selectionSort(arr);
  for (auto ele : arr) {
    cout << ele << " ";
  }
  cout << endl;
  return 0;
}