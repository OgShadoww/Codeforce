#include<iostream>
using namespace std;

int main() {
  int t; 
  cin >> t;
  while(t-- > 0) {
    int n;
    int res = 0;
    cin >> n;
    string s;
    for(int i = 0; i < n; i++) {
      cin >> s[i];
    }
    for(int i = 0; i < n; i++) {
      if(s[i] == '0') {
        res++; 
      }
      for(int j = 0; j < n; j++) {
        if(i != j && s[j] == '1') {
          res++; 
        }
      }
    }

    cout << res << endl;
  }

  return 0;
}
