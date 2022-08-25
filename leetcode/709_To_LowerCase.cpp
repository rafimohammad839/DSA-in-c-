// Leetcode 709: To Lower Case
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
      string res = "";
      for (int i = 0; i < s.length(); i++) {
        int code = (int)s.at(i);
        if (code > 64 && code < 91) {
          res += (char)(code + 32);
        } else {
          res += s.at(i);
        }
      }
      return res;
    }
};


int main()
{
  Solution solution;
  string result = solution.toLowerCase("Hello");
  cout << result << endl;
  return 0;
}