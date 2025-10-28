#include<iostream>
#include<vector>
using namespace std;
 
int main() {
  int t; 
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    vector<int> res(2*n);
    vector<bool> check(2*n, false);
    res[0] = 19;
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        cin >> res[i+j+1];
        check[res[i+j+1]] = true;
      }
    }
    for(int i = 0; i < 2*n; i++) {
      if(check[i] == false) {
        res[0] = i;
      }
    }
 
    for(int i = 0; i < 2*n; i++) {
      cout << res[i] << " ";
    }
    cout << endl;
  }
 
  return 0;
}
