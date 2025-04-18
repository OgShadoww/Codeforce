#include<iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while(t-- > 0) {
    long long x, y, a;
    int k = 1;
    long long depth;
    cin >> x >> y >> a;
    a += 1;
    
    
    while(true) {
      if(k % 2 == 0) {
        depth += x;
      }
      if(k % 2 != 0) {
        depth += y;
      }

      if(depth > a) {
        if(k % 2 == 0) {
          cout << "NO" << endl;
          break;
        }
        else {
          cout << "YES" << endl;
        }
      }

      k++;
    }
  }
    
  return 0;
}
