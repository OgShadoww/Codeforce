#include<iostream>
#include <unordered_map>
using namespace std;

int main() {
  int t;
  cin >> t;
  unordered_map<char, int> map;
  map['-'] = 0;
  map['_'] = 0;
  int result;

  while(t-- > 0) {
    int n; 
    cin >> n;

    for(int i = 0; i < n; i++) {
      char c;
      cin >> c;
      map[c]++;
    }

    int un = map['_'];
    int ln = map['-'];
    
    if(un < 1 || ln < 2) {
      result = 0;
    }

    result = min(un, (ln/2));

    cout << result << endl;
  }

  return 0;
}
