#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;
    vector<int> mass(n);
    int sum = 0;
    bool possible = false;
    bool middle = false;
    if(n == 1) {
      int res;
      cin >> res;
      cout << res << endl;
      continue;
    }
    for(int i = 0; i < n; i++) {
      cin >> mass[i];
      sum += mass[i];

      if(mass[i] > 1) {
        possible = true;
      }

      if(mass[i] > 1 && i > 0 && i < n - 1) {
        middle = true;
      }
    }

    if(!possible) {
      cout << "-1" << endl;
    }
    else if(middle) {
      cout << sum - 1 << endl;
    }
    else {
      cout << sum - n + 1 << endl;
    }
  }

  return 0;
}
