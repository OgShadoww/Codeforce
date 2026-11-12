#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  
  while(t--) {
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++) {
      cin >> a[i];
      if(i % 2 != 0) {
        a[i] *= -1;
      }
    }
    int sum = 0;

    sort(a.begin(), a.end(), [](const auto &a, const auto &b) {
      return a > b;
    });

    for(int i = 0; i < n; i++) {
      if(i < n / 2) {
        sum += a[i];
      }
      else {
        sum -= a[i];
      }
    }

    cout << sum << endl;
  }

  return 0;
}
