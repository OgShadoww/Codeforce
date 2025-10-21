#include<iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n, k;
    cin >> n >> k;
    int res = k + (k - 1) / (n - 1);
    cout << res << endl;
  }

  return 0;
}
