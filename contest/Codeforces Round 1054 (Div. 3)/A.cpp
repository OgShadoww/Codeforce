#include<iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    int res = 0;
    int m = 0;

    for(int i = 0; i < n; i++) {
      int d;
      cin >> d;
      if(d == 0) {
        res++;
      }
      if(d == -1) {
        m++;
      }
    }
    if(m % 2 == 0) {
      cout << res << endl;
    }
    else {
      cout << res + 2 << endl;
    }
  }
  
  return 0;
}
