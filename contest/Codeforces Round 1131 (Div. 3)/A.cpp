#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int t; 
  cin >> t;
  vector<string> res;

  while(t--) {
    int n, m;
    cin >> n >> m;
    string s1, s2;
    cin >> s1 >> s2;
    unordered_map<char, int> freq;
    string final;

    for(const auto &ch : s2) {
      freq[ch]++;
    }
    for(const auto &ch : s1) {
      if(freq[ch] > 0) {
        freq[ch]--;
      }
      else {
        final += ch;
      }
    }

    sort(final.begin(), final.end());

    if(final == "isx" && n == m + 3) {
      res.push_back("YES");
    }
    else {
      res.push_back("NO");
    }
  }

  for(auto s : res) {
    cout << s << endl;
  }
}
