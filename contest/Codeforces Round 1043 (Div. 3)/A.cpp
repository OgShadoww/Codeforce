#include<iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n, m;
    string a,b;
    string order;
    cin >> n;
    cin >> a;
    cin >> m;
    cin >> b;
    cin >> order;

    for(int i = 0; i < m; i++) {
      if(order[i] == 'V') {
        a.insert(0, 1, b[i]);
      }
      else {
        a += b[i];
      }
    }

    cout << a << endl;
  }

  return 0;
}
