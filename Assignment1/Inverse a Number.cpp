int main() {
  int num;
  cin >> num;
  int place = 1;
  int sum = 0;

  while(num) {
    int rem = num % 10; 
    sum = sum +  place*(pow(10, rem-1)); // to put 1 at 5th place, we need to concat 4 0s after 1. Similarly to put 2 at 3rd place, we need to concat 2 0s after 2 and so on.
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
