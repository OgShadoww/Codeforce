#include<iostream>
#include<iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    int temp;
    int no;
    int in = 0;
    cin >> temp;
    for(int i = 0; i < n-1; i++) {
      int x; 
      cin >> x;
      if(temp == x && in == 0) {
        in = 1;
      }
      else if(x != temp && in == 1) {
        cout << i + 1 << endl;
        break; 
      }
      else if(x != temp && in == 0) {
        in = 1;
        no = i + 1;
      }
      else if(x == temp && in == 1) {
        cout << no << endl;
        break;
      }
      else {
        cout << 0 << endl;
        break;
      }
    }
  }
}
