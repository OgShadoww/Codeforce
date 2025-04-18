#include<iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while(t-- > 0) {
    int x, y, a;
    int k = 1;
    cin >> x >> y >> a;
    a += 1;
    
    while(a >= 0) {
      if(k % 2 == 0) {
        if(a - y > 0) {
          a -= y;
        }
        else {
          cout << "YES" << endl;
          break;
        }
        k++;
      }
      if(k % 2 != 0) {
        if(a - x > 0) {
          a -= x;
        }
        else {
          cout << "NO" << endl;
          break;
        }
        k++;
      }
    }
  }
    
  return 0;
}
