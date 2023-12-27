#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, sum = 0, i;
  cin >> n;
  
  while(n) {
    i = n % 10;
    sum = sum * 10 + i;
    n /= 10;
  }

  cout << sum;
  return 0;
}
