#include<iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while(t--) { 
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    for(int i = 0; i < s.size(); i++) {
      if(s[i] == 'p') {
        s[i] = 'q';
      }
      if(s[i] == 'q') {
        s[i] = 'p';
      }
    }
    cout << s << endl;
  }

  return 0;
}
