#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while(t--) {
    int a, b, c;
    cin >> a >> b >> c;

    if(a + 1 == b && b == c - 1) {
      cout << "yes" << endl;
    }
    else {
      cout << "no" << endl;
    }
  }

  return 0;
}
