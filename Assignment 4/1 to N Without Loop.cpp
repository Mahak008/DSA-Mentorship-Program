void number(int x, vector<int> &ans) {
  if (x == 0) {
    return;
  }
  number(x - 1, ans);
  ans.push_back(x);
}

vector<int> printNos(int x) {
  vector<int> ans;
  number(x, ans);

  return ans;
}
