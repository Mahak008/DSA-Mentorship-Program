int main() {
  int num, k;
  cin >> num >> k;

  string s = to_string(num);
  string str;
  int l = s.length();
  int leng = l - k;

  for(int i = leng; i < l; i++) {
    str += s[i];
  }

  for(int i = 0; i < leng; i++) {
    str += s[i];
  }

  cout << str;

  return 0;
}

// Another Method

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
