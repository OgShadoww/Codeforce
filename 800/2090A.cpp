#include<iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    long long x, y, a;
    cin >> x >> y >> a;

    x *= 2;
    y *= 2;
    a = a * 2 + 1;

    long long depth = (a / (x + y)) * (x+y);

    if((depth + x) >= a) {
      cout << "NO" << endl;
    }
    else {
      cout << "YES" << endl;
    }
  }

  return 0;
}
