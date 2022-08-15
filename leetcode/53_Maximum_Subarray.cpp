// Leetcode 53: Maximum Subarray
#include<bits/stdc++.h>
using namespace std;
// ------------------------------------------------------------- Kadane's Algo | Time - O(N)
int maxSubArray(vector<int>& nums) {
  int sum = 0, maxi = INT_MIN;
  for (auto it : nums) {
    if (sum < 0) sum = 0;
    sum += it;
    maxi = max(maxi, sum);
  }
  return maxi;
}

int main()
{
  int n;
  cin >> n;
  vector<int> arr;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    arr.emplace_back(x);
  }
  cout << maxSubArray(arr);
  return 0;
}