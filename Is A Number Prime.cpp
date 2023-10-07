#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  bool res = 1;

  if(n <= 1) {
    res = 0;
  }

	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			res = 0;
      break;
    }
  }

  if(res){
    cout <<"prime";
  }
  else {
    cout <<"not prime";
  }
	return 0;
}
