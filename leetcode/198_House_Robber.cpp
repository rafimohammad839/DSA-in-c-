// Leetcode 198: House Robber
#include<bits/stdc++.h>
using namespace std;

// ------------------------------------------------ Solution 1 | Space - O(N) | Time - O(N)
// class Solution {
// public:
//     int rob(vector<int>& nums) {
//       int dp[nums.size() + 1];
//       dp[0] = 0;
//       dp[1] = nums[0];
//       for (int i = 1; i < nums.size(); i++) {
//         dp[i + 1] = max(dp[i], dp[i - 1] + nums[i]);
//       }
//       return dp[nums.size()];
//     }
// };

// ------------------------------------------------ Solution 2 | Space - O(1) | Time - O(N)
class Solution {
public:
    int rob(vector<int>& nums) {
      int first = 0, second = nums[0];
      for (int i = 1; i < nums.size(); i++) {
        int temp = max(second, first + nums[i]);
        first = second;
        second = temp;
      }
      return second;
    }
};

int main()
{
  Solution solution;
  vector<int> houses = {2, 7, 9, 3, 1};
  int result = solution.rob(houses);
  cout << result;
  return 0;
}