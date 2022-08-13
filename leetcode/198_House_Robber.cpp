// Leetcode 198: House Robber
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
      int dp[nums.size() + 1];
      dp[0] = 0;
      dp[1] = nums[0];
      for (int i = 1; i < nums.size(); i++) {
        dp[i + 1] = max(dp[i], dp[i - 1] + nums[i]);
      }
      return dp[nums.size()];
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