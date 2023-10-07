#include <bits/stdc++.h>
using namespace std;

int main() {
  int start, end;
  cin >> start >> end;

  for(int i = start; i <= end; i++){
    bool flag = 1;
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
