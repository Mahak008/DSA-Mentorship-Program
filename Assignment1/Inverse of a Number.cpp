// The inverse of a number is defined as the number created by interchanging the face value and index of digits of number.
// e.g. for 426135 (reading from right to left, 5 is in place 1, 3 is in place 2, 1 is in place 3, 6 is in place 4, 2 is in place 5 
// and 4 is in place 6), the inverse will be 416253 (reading from right to left, 3 is in place 1, 5 is in place 2,2 is in place 3, 
// 6 is in place 4, 1 is in place 5 and 4 is in place 6) More examples - inverse of 2134 is 1243 and inverse of 24153 is 24153.    

int main() {
  int num;
  cin >> num;
  int place = 1;
  int sum = 0;

  while(num) {
    int rem = num % 10; 
    sum = sum +  place*(pow(10, rem-1)); 
    // to put 1 at 5th place, we need to concat 4 0s after 1. Similarly to put 2 at 3rd place, we need to concat 2 0s after 2 and so on.
    num /= 10;
    place++;
  }

  cout << sum;
  return 0;
}

// Examples
// Input :- 426135
// Output :- 416253
// Input :- 28346751
// Output :- 73425681
