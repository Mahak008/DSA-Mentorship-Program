#include <bits/stdc++.h>
using namespace std;

int digit(int num) {
  int count = 0;      
  while(num) {
    count++;
    num = num/10;
  }
  return count;
}

int main() {
  int num = 1234;
  int k = 2;
  while(k) {
    int rem = num%10;
    num = num/10 + rem * (pow(10, digit(num)-1));
    k--; 
  }
  cout << num<< endl;
  return 0;
}
