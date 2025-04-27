#include<iostream>
#include <unordered_map>
using namespace std;

// First Idea: To find all variation we can use just C(min(unln, ln); 
// Second idea: min(unln, ln) don't work correct, so better to use C(ln; 2)*A(unln;1). Exapmole: C(2;1)*C(4;2) = 2! * 4! / (2! * 2!) = 2 * 4 * 3 / (2 * 2) = 2 * 3 = 6;
// Checking in example: 9, "--__-_---" = C(3;1)*C(6;2) = 3 * 6! / 2! * 4! = 3 * 6 * 5 / 2 = 30 uncorrect
// Last check 7, "_------" + C(1;1)*C(6;2) = 1 * 6*5 / 2 = 15 uncorrect


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
