int n = 5, spaces = n/2, stars = 1;
for(int i = 0; i < n; i++) {

    // Stars in left half
    for(int j = 0; j < spaces; j++) {
        if(i != n/2) {
            cout <<"  ";
        }
        else {
            cout <<"* ";
        }
    }

    // Stars in right half
    for(int j = 0; j < stars; j++) {
        cout <<"* ";
    }
    if(i < n/2) {
        stars++;
    }
    else {
        stars--;
    }
    cout << endl;
}

// Output -
//     * 
//     * * 
// * * * * * 
//     * * 
//     * 
