int n = 3, i, j, spaces = 0;
for(i = 0; i < n; i++) {

  // spaces
  for(j = 0; j < n-i-1; j++) {
    cout << " ";
  }
  cout << "*";

  // spaces
  for(j = 1; j < spaces; j++) {
    cout << " ";
  }
  if(i == 0) {
    cout << " ";
  }
  else {
    cout << "*";
  }
  spaces+=2;
  cout << endl;
}

spaces = 2*n-5;
for(i = 1; i < n; i++) {

  // spaces
  for(j = 0; j < i; j++) {
    cout << " ";
  }
  cout << "*";

  // spaces
  for(j = 0; j < spaces; j++) {
    cout << " ";
  }

  if(i != n-1) {
    cout << "*";
  }
  else {
    cout << "";
  }
  spaces-=2;
  cout << endl;
}

// Output - 
//   * 
//  * *
// *   *
//  * *
//   *
  
