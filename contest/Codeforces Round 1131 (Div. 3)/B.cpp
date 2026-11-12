#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while(t--) {
    int r, s, p;
    cin >> r >> s >> p;
    string res;

    if(r >= s && r >= p) {
      res = string(r + s + p, 'P');
    }
    else if(s >= r && s >= p) {
      res = string(r + s + p, 'R');
    }
    else if(p >= r && p >= s) {
      res = string(r + s + p, 'S');
    }

    cout << res << endl;
  }
}

// r s p
// 3 2 2
// p p p p p p p
