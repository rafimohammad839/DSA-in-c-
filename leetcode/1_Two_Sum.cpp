// Leetcode 1: Two Sum
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int, int> u_map;
      vector<int> ans;
      for (int i = 0; i < nums.size(); i++) {
        if (u_map.find(target - nums[i]) != u_map.end()) {
          ans.push_back(u_map[target - nums[i]]);
          ans.push_back(i);
          return ans;
        } else {
          u_map[nums[i]] = i;
        }
      }
      return ans;
    }
};

int main()
{
  Solution sol;
  vector<int> arr = {2, 7, 11, 15};
  int target = 9;
  vector<int> res;
  res = sol.twoSum(arr, target);
  for (auto it : res) {
    cout << it << " ";
  }
  return 0;
}