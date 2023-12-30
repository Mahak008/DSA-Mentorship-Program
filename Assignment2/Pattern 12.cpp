int n = 4, i, j, num = 1;
for(i = 0; i < n; i++) {
  for(j = 0; j <= i; j++) {
    cout << num++ << " ";
  }
  cout << endl;
}

// Output -
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
