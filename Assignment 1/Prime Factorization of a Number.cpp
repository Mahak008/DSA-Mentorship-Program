int n = 48;
for(int i = 2; i <= n; i++) {
  while(n % i == 0) {
    cout << i <<" ";
    n = n/i;
  }
}

// In the above method, the worst case time complexity is O(n)

// Another Method
for(int i = 2; i*i <= n; i++) {
  while(n % i == 0) {
    cout << i <<" ";
    n = n/i;
  }
}
if(n > 1) {
  cout << n;
}

// Output -
// 2 2 2 2 3
