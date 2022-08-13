// Leetcode 7: Reverse Integer
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
      if (x / 10 == 0) {
        return x;
      }
      int result = 0;
      int mod;
      while (x) {
      // Just before the number turns into something greater than the INT upper bound,
      // compare it with the INT32_MAX or INT32_MIN / 10 i.e., compare the number
      // with the upper bound exluding the last digit so as to compare equal digits number
      // Just take the example of 2147483647 as x and try to reverse it. You will understand it.
       if (result > INT32_MAX/10 || result < INT32_MIN/10) {
        return 0;
       }
          
        mod = x % 10;
        result = result * 10 + mod;
        x /= 10;
          
      }
      return result;
    }
};

int main()
{
  Solution solution;
  int result = solution.reverse(-123);
  cout << "Reverse is " << result;
  return 0;
}