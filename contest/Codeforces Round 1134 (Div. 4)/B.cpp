#include <iostream>
#include <string>
using namespace std;

int main() {
  int t;
  cin >> t;

  while(t--) {
    int n;
    string s;
    int res = 0;
    cin >> n;
    cin >> s;

    if(s[0] == 'B') res++;

    for(int i = 0; i < n - 1; i++) {
      if(s[i + 1] == s[i]) {
        res++;
      }
    }

    cout << res << endl;
  }

  return 0;
}
