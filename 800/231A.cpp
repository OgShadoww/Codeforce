#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[3][n];
  int res = 0;
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }

  for(int i = 0; i < n; i++) {
    if((arr[1][i] && arr[2][i]) || (arr[0][i] && arr[1][i]) || (arr[0][i] && arr[2][i])) res++;
  }

  cout << res << endl;
  return 0;
}
