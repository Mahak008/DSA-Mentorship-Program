#include<bits/stdc++.h>
void words(int x, vector<string> &ans) {
  if (x == 0) {
    return;
  }
  ans.push_back("Coding Ninjas");
  words(x-1, ans);
}

vector<string> printNTimes(int n) {
	vector<string> ans;
	words(n, ans);
	return ans;
}
