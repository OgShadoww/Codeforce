#include <iostream>
using namespace std;

int main() {
  int t;

  cin >> t;
  while(t--) {
    int n;
    string s;
    bool found = false;
    int x = 0;
    int y = 0;
    cin >> n;
    cin >> s;

    for(int i = 0; i < n; i++) {
      if(s[i] == 'U') y++;
      else if(s[i] == 'D') y--;
      else if(s[i] == 'R') x++;
      else if(s[i] == 'L') x--;
      if(x == 1 && y == 1) {
        found = true;
        break;
      }
    }

    cout << (found ? "YES" : "NO") << '\n';
  }

  return 0;
}
