int i, j, k;
for(i = 5; i > 0; i--) {
  for(k = 0; k < 5-i+1;k++) {
    cout <<" ";
  }
  for(j = 0; j < i; j++) {
    cout <<"*";
  }
  cout << endl;
}

// Output -
// *****
//  ****
//   ***
//    **
//     *
