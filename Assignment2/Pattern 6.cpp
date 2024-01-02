int n = 3;
int spaces = n;
int stars = 1;
for(int i = 1; i <= 2*n-1; i++) {
    // stars
    for(int j = 1; j <= spaces; j++) {
        cout << "*";
    }
    //spaces
    for(int k = 0; k < stars; k++) {
        cout << " ";
    }
    // stars
    for(int j = 1; j <= spaces; j++) {
        cout << "*";
    }
    if(i < n) {
        spaces--;
        stars+=2;
    }
    else {
        spaces++;
        stars -= 2;
    }
    cout <<endl;
}

// Another Method

// Upper Symmetry
int n = 3, i, j, spaces = 1;
for(i = 0; i < n; i++) {

  // stars
  for(j = 0; j < n-i; j++) {
    cout << "*";
  }
        
  // spaces
  for(j = 0; j < spaces; j++) {
    cout << " ";
  }

  // stars
  for(j = 0; j < n-i; j++) {
    cout << "*";
  }
  spaces += 2;
  cout << endl;
}

// Lower Symmetry
spaces = 2*n-2;
for(i = 1; i < n; i++) {

  // stars
  for(j = 0; j < i+1; j++) {
    cout << "*";
  }
        
  // spaces
  for(j = 0; j < spaces-1; j++) {
    cout << " ";
  }

  // stars
  for(j = 0; j < i+1; j++) {
    cout << "*";
  }
  spaces -= 2;
  cout << endl;
}

// Output - 
// *** ***
// **   **
// *     *
// **   **
// *** ***
