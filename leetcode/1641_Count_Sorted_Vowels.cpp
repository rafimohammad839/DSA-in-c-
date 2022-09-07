// Leetcode 1641: Count Sorted Vowel Strings
#include<bits/stdc++.h>
using namespace std;

// ----------------------------------------------------------- Dynamic Programming Solution | Time - O(N) | Space - O(1)
class Solution {
public:
    int countVowelStrings(int n) {
      vector<int> dp(5, 1);
      int sum = 0;
      while (--n) {
        for (int i = 1; i < dp.size(); i++) {
          dp[i] += dp[i - 1];
        }
      }
      for (auto it : dp) {
        sum += it;
      }
      return sum;
    }
};

int main()
{
  Solution sol;
  int count = sol.countVowelStrings(2);
  cout << count << endl;
  return 0;
}