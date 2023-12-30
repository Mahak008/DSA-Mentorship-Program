int n = 3, i, j, k;
for(i = 0; i < n; i++) {
  for(j = 0; j < (n-i); j++) {
    cout << " ";
  }
  for(k = 0; k < i*2+1; k++) {
    cout << "*";
  }
  cout << endl;
}
    
for(i = n-1; i > 0; i--) {
  for(j = 0; j <= (n-i); j++) {
    cout << " ";
  }
  for(k = i*2-1; k > 0; k--) {
    cout << "*";
  }
  cout << endl;
}

// Output -
//     *     
//   * * *   
// * * * * * 
//   * * *   
//     *     
