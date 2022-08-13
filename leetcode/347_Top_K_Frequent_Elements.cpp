// Leetcode 347: Top K Frequent Elements
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      unordered_map<int, int> map;
      priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > queue;
      vector<int> result;
      // Counting frequency of each element in map
      for (auto it : nums) {
        map[it]++;
      }
      // Inserting only k element in priority queue
      for (auto & it : map) {
        queue.push({it.second, it.first});
        if (queue.size() > k) {
          queue.pop();
        }
      }
      // Getting the top k elements in an array
      while (k--) {
        result.push_back(queue.top().second);
        queue.pop();
      }

      return result;
    }
};

int main()
{
  Solution solution;
  vector<int> v = {5, 3, 5, 5, 2, 2, 2, 2, 9};
  int k = 2;
  vector<int> result = solution.topKFrequent(v, k);
  for (auto it : result) {
    cout << it << " ";
  }
  cout << endl;
  return 0;
}