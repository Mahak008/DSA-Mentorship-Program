int k = 1;
for(int i = 0; i < 5; i++) {
  for(int j = 0; j < i; j++) {
    cout << k++ << " ";
  }
  cout << endl;
}

// Output - 
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
