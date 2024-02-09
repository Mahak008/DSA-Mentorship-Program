pair<long long, long long> getMinMax(long long a[], int n) {
  long long small = INT_MAX, large = INT_MIN;
  for(int i = 0; i < n; i++) {
    if(a[i] > large) {
      large = a[i];
    }
    if(a[i] < small) {
      small = a[i];
    }
  }
  return {small, large};
}
