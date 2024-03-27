for(i = 0; i < 5; i++) {
  for(j = 0; j < 5; j++) {
    if(i == j || j == 5-i-1) {
      cout << "*";
    }
    else {
      cout <<" ";
    }
  }
  cout << endl;
}

// Output -
// *       * 
//   *   *   
//     *     
//   *   *   
// *       * 
