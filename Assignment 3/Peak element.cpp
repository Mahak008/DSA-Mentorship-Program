// An element is considered to be peak if it's value is greater than or equal to the values of its adjacent elements (if they exist)

int peakElement(int arr[], int n) {
  int max = INT_MIN, x, flag;
  for(int i = 0; i < n; i++) {
    if(arr[i] > max) {
      max = arr[i];
      x = i;
    }
  }   
  return x;
}

// n = 3
// arr[] = {3, 4, 2}
// Possible Answer: 1
// Output: 1
// Explanation: The index returned is 1, which corresponds to the value 4. Since 4 is indeed a peak element in this array, the generated output is 1, indicating that the returned index is correct.
