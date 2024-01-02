int n = 3;
int spaces = n;
int stars = 1;
int num = 1;

for(int i = 1; i <= 2*n-1; i++) {

    // spaces
    for(int j = 1; j <= spaces; j++) {
        cout << "  ";
    }
    
    //numbers
    int val = num;
    for(int k = 1; k <= stars; k++) {
        cout << val << " ";
        if(k <= stars/2) {
            val++;
        }
        else {
            val--;
        }
    }

    if(i < n) {
        spaces--;
        stars+=2;
        num++;
    }
    else {
        spaces++;
        stars -= 2;
        num--;
    }

    cout <<endl;
}

// Output - 
//      1 
//     2 3 2 
//   3 4 5 4 3 
//     2 3 2 
//       1 
