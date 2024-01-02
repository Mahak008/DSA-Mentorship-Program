int n = 5, a = 0, b = 1, c;

for(int i = 0; i < n; i++) {
    for(int j = 0; j < i; j++) {
        c = a;
        cout << c << " ";
        a += b;
        b = c;
    }
    cout <<endl;
}

// Output -
// 0 
// 1 1 
// 2 3 5 
// 8 13 21 34 
