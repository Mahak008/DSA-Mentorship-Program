int n = 3;
int spaces = n;
int stars = 1;

for(int i = 1; i <= 2*n-1; i++) {

    // spaces
    for(int j = 1; j <= spaces; j++) {
        cout << " ";
    }
    
    //stars
    for(int k = 0; k < stars; k++) {
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
