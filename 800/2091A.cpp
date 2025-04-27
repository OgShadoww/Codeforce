#include<iostream>
#include <unordered_map>
#include<vector>
using namespace std;

// Idea: the full amount of variations is A(20; 8) that less than 10^6. So greed search can help
// Second idea to use hash map

int main() {
  vector<int> target  {0, 1, 0, 3, 2, 0, 2, 5};
  unordered_map<int, int> map;
  for(int d: target) map[d]++;
  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;
    vector<int> digits(n);
    for(int i = 0; i < n; i++) {
      cin >> digits[i];
    }

    unordered_map<int, int> freq = map;
    int answer = 0;
    int remaining = target.size();

    for(int i = 0; i < n; i++) {
      if (freq[digits[i]] > 0) {
        freq[digits[i]]--;
        remaining--;
      }      
      if(remaining == 0) {
        answer = i + 1;
        break;
      }
    }

    cout << answer << endl;
  }

  return 0;
}
