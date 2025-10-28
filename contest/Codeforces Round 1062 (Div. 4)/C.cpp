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
    for(int i = 0; i < n; i++) {
      for(int j = i+1; j < n-1; j++) {
        if(a[i] > a[j] && ((a[j] % 2 == 0 && a[i] % 2 != 0) || (a[j] % 2 != 0 && a[i] % 2 == 0))) {
          swap(a[i], a[j]);
        }
      }
    }

    for(int i = 0; i < n; i++) {
      cout << a[i] << " ";
    }
    cout << endl;
  }

  return 0;
}
