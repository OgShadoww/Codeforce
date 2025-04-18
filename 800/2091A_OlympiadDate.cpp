#include<iostream>
#include<vector>
using namespace std;

// Idea: the full amount of variations is A(20; 8) that less than 10^6. So greed search can help
// Second idea to use hash map

int main() {
  vector<int> target  {0, 1, 0, 3, 2, 0, 2, 5};
  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;
    vector<int> digits(n);
    int k = 0;
    for(int i = 0; i < n; i++) {
      cin >> digits[i];
    }
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < 8; j++) {
        if(digits[i] == target[j]) {
          k++;
          if(k == 8) {
            cout << i; 
            break;
          }
        }
      }
      if(k != 8) {
        cout << 0;
        break;
      }
    }
  }

  return 0;
}
