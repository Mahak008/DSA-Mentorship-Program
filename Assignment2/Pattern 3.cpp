int i, j, k;
for(i = 5; i > 0; i--) {
  for(j = 0; j < i; j++) {
    cout <<" ";
  }
  for(k = 0; k < 5-i+1;k++) {
    cout <<"*";
  }
  cout << endl;
}

// Output -
//      *
//     **
//    ***
//   ****
//  *****
