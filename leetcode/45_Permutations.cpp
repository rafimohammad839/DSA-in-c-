// Leetcode 46: Permutations

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
      vector<int> ds;
      vector<vector<int>> result;
      int freq[nums.size()];
      for (int i = 0; i < nums.size(); i++) {
        freq[i] = 0;
        recursivePermute(result, ds, nums, freq);
      }
      return result;
    }

    void recursivePermute(vector<vector<int>> &result, vector<int> &ds, vector<int> nums, int freq[]) {
      if (ds.size() == nums.size()) {
        result.push_back(ds);
        return;
      }
      for (int i = 0; i < nums.size(); i++) {
        if (!freq[i]) {
          ds.push_back(nums[i]);
          freq[i] = 1;
          recursivePermute(result, ds, nums, freq);
          freq[i] = 0;
          ds.pop_back();
        }
      }
    }
};

int main()
{
  Solution solution;
  vector<int> nums = {1, 2, 3};
  vector<vector<int>> result = solution.permute(nums);
  cout << "Permutations of the nums is " << endl;
  for (int i = 0; i < result.size(); i++) {
    cout << "{";
    for (int j = 0; j < result[i].size(); j++) {
      if (j == result[i].size() - 1) {
        cout << result[i][j];
      } else {
        cout << result[i][j] << ", ";
      }
    }
    if (i == result.size() - 1) {
      cout << "}";
    } else {
      cout << "}, ";
    }
  }
  cout << endl;
  return 0;
}