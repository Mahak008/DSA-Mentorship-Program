#include <bits/stdc++.h>
using namespace std;

int main() {
  int start = 1, end = 10;
  bool flag;

  for(int i = start; i <= end; i++){
    flag = 1;
    if(i == 1) {
        continue;
    }

    for(int j = 2; j <= i/2; j++) {
      if(i % j == 0) {
        flag = 0;
        break; 
      }
    }
    
    if(flag) {
      cout << i << endl;
    
    }
  }
  
  return 0;
}
