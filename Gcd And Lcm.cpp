#include <bits/stdc++.h>
using namespace std;

// GCD
int gcd(int a, int b) {
  if(a == 0 || a == b) {
    return b;
  }
  if(b == 0) {
    return a;
  }
  if(a > b) {
    return gcd(a-b, b);
  }
  return gcd(a, b-a);
}

// LCM
int lcm(int a, int b) {
  return (a / gcd(a, b)) * b;
}

int main() {
  int a = 36, b = 24;
  cout << gcd(a,b) << endl << lcm(a,b);
  return 0;
}
