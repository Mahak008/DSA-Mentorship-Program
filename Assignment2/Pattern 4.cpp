int i, j, k, n = 5;
for(i = n; i > 0; i--) {
  for(k = 0; k < n-i+1;k++) {
    cout <<"  ";
  }
  for(j = 0; j < i; j++) {
    cout <<"* ";
  }
  cout << endl;
}

// Output -
// * * * * * 
//   * * * * 
//     * * * 
//       * * 
//         * 
