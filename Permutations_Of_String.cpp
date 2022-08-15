// Permutations of a string in any order
#include<bits/stdc++.h>
using namespace std;

class Permutation {
  public:
    void permutation(string str) {
      perm(str, "");
    }
    void perm(string str, string prefix) {
      if (str.length() == 0) {
        cout << prefix << " ";
      } else {
        for (int i = 0; i < str.length(); i++) {
          string pattern = str.substr(0, i) + str.substr(i + 1);
          perm(pattern, prefix + str.at(i));
        }
      }
    }
};

int main()
{
  string s = "ABSG";
  Permutation p;
  p.permutation(s);
  return 0;
}