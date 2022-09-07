// Leetcode 1: Two Sum
#include<iostream>
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