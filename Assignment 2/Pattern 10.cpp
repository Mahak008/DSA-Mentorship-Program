int n = 3;
int spaces = n, c_space = -1;

for(int i = 1; i <= 2*n-1; i++) {

    // spaces
    for(int j = 1; j <= spaces; j++) {
        cout << " ";
    }
    cout << "*";

    //spaces
    for(int k = 1; k <= c_space; k++) {
        cout << " ";
    }
    if (i > 1 && i < 2*n-1) {
        cout << "*";
    }

    if(i < n) {
        spaces--;
        c_space+=2;
    }
    else {
        spaces++;
        c_space -= 2;
    }

    cout <<endl;
}

// Output - 
//   * 
//  * *
// *   *
//  * *
//   *
  
