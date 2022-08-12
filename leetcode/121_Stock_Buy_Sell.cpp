#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int maxProfit(vector<int> &prices)
  {
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (auto it : prices)
    {
      minPrice = min(it, minPrice);
      maxProfit = max(maxProfit, (it - minPrice));
    }

    return maxProfit;
  }
};

int main()
{
  Solution solution;
  vector<int> prices = {7, 6, 4, 3, 1};
  int res = solution.maxProfit(prices);
  cout << res << endl;
  return 0;
}