#include<iostream>
#include<vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int max = 0;
    for(int i = 0; i < n; i++) {
      if(a[i] > max) max = a[i];
    }
    
    cout << max << endl;
  }

  return 0;
}
