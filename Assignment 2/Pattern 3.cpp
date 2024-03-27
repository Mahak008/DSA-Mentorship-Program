int i, j, k, n = 5;
for(i = n; i > 0; i--) {
  for(j = 0; j < i; j++) {
    cout <<"  ";
  }
  for(k = 0; k < n-i+1;k++) {
    cout <<"* ";
  }
  cout << endl;
}

// Output -
//         * 
//       * * 
//     * * * 
//   * * * * 
// * * * * * 
