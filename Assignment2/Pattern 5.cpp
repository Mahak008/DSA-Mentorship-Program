int n = 5;
for(int i = 0; i < n; i++) {
  for(int j = 0; j < n; j++) {
    if(i == n/2 || j == n/2) {
      cout << "* ";
    }
    else if ((i != 0 && i != n-1) && (i == j || j == n-i-1)) {
      cout << "* ";
    }
    else {
      cout << "  ";
    }
  }
  cout << endl;
}

// Output -
//     *     
//   * * *   
// * * * * * 
//   * * *   
//     *     
