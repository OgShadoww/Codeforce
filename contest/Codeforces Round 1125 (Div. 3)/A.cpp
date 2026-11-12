#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while(t--) {
    int x, y, r;
    cin >> x >> y >> r;
    for(int i = -10; i < 10; i++) {
      for(int j = -10; j < 10; j++) {
        if(((x - i) * (x - i)) + ((y - j) * (y - j)) == r * r) {
          cout << i << " " << j << endl;
          return 0;
        }
      }
    }
  }
}
