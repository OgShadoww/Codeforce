#include<iostream>
#include <algorithm>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    string name;
    string p;
    cin >> name >> p;
    sort(p.begin(), p.end());
    sort(name.begin(), name.end());
    if(name == p) {
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  } 
 
  return 0;
}
